// What is the time complexity of searching for an element in an unsorted array?

#include <iostream>
using namespace std;

int linerSearch(int Arr[], int key,int size)
{

    for(int i=0; i<size; i++ ){
        if(key == Arr[i]){
           return i+1;
        }
    }
    return -1;
}

int main(){

    int Arr[10] = {2,5,6,8,1,22,3,4,6,77};
    int key = 22;

    int size = sizeof(Arr) / sizeof(Arr[0]);

    cout << linerSearch(Arr,key,size);

    return 0;
}