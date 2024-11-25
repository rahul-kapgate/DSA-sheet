#include <iostream>
using namespace std;


void rotateLeft(int Arr[],int size){

int firstEl = Arr[0];

for(int i=0; i<size-1; i++){
    Arr[i] = Arr[i+1];
}

Arr[size-1] = firstEl;


//print Array
for (int i = 0; i < size; i++)
{
    cout << Arr[i] << " ";
}
}

void rotateRight(int Arr[], int size){

int lastEl = Arr[size-1];
for(int i=size-1; i>0; i--){
    Arr[i] = Arr[i-1];
}

Arr[0] = lastEl;

cout<<endl;
for(int i=0; i<size;i++){
    cout<<Arr[i]<<" ";
}
}

int main(){

    int originalArr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(originalArr) / sizeof(originalArr[0]);

     int Arr1[5];
     copy(begin(originalArr), end(originalArr), begin(Arr1));
     rotateLeft(Arr1, size);

     int Arr2[5];
     copy(begin(originalArr), end(originalArr), begin(Arr2));
     rotateRight(Arr2, size);

     return 0;
}

