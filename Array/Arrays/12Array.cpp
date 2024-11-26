#include <iostream>
using namespace std;

void Approch1(int Arr[], int size){

    for(int i=0; i<size; i++){

        int flag =0;

        for(int j=0; j<size; j++){

            if(Arr[i] == Arr[j]){
                flag++;
            }
        }

        if(flag == 1){
            cout<<Arr[i];
        }
    }
}

void OptimalApproach(int Arr[], int size){

int xorr = 0;
for(int i=0; i<size; i++){
 
 xorr = xorr ^ Arr[i];

}

cout<<endl<<xorr;

}

int main(){

    int Arr[] = { 4, 1, 2,  1,  2 };
    int size = sizeof(Arr)/sizeof(Arr[0]);

    Approch1(Arr,size);    //O(n^2)  O(1)

    // Optimal Approach(Using XOR)

    int Arr1[] = {6,7,4,7,4, 1, 2, 1, 2};
    int size1 = sizeof(Arr1) / sizeof(Arr1[0]);

    OptimalApproach(Arr1,size1);

            return 0;
}