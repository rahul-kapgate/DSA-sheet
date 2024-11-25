// Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.



#include <iostream>
using namespace std;

void calculateApperance(int Arr[], int n)
{

   if(n == 1){
    cout<<Arr[0];
   } 

   bool flag = true;

   for(int i=0; i<n; i++){

    flag = true;
    
       for(int j=0; j<n; j++){

        if(i == j){
            continue;
        }

        if(Arr[i] == Arr[j]){
            flag = false;
        }
       }

       if(flag == true){
        cout<< Arr[i]<<" ";
       }
   }
};

int main(){

    int Arr[10] = {1,1,2,2,3,3,4,5,5};

    calculateApperance(Arr ,9);

    return 0;
}