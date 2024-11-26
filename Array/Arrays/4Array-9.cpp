#include <iostream>
using namespace std;


void Approch1(int Arr[], int size){

    int copyArray[size];
    
    for(int i=0; i<size; i++){   // Moving elements to copy Array 
        copyArray[i] = Arr[i];
    }

    //Move Array to in revers order in orriganl Array 
    for(int i=0; i<size; i++){
        Arr[i] = copyArray[size-(i+1)]; // size-i+1 worng , size-i-1
    }

    // Print reversed Array 
    cout<<"Reversed Array : ";
    for(int i=0; i<size; i++){
        cout<<Arr[i] <<" ";
    }
    cout<<endl;
}

void Approch2(int Arr[], int size){

    int start=0, end = size-1;

    while(start < end){

        //swap
        int temp = start;
        start = end;
        end = temp;

        start ++;
        end--;

    };

    // Print reversed Array
    cout << "Reversed Array : Approch 2 : ";
    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << " ";
    }

    }

int main(){

    int Arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(Arr)/sizeof(Arr[0]);

    cout<<"Orignal Array : ";
    for (int i = 0; i < size; i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<endl;

    Approch1(Arr,size);   //TC : O(n) , SC : O(n) to stroge copy Array 

    Approch2(Arr,size);   //Tc : O(n), Sc = O(1)

    return 0;
}