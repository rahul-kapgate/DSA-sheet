#include <iostream>
using namespace std;

void Approch1(int Arr[],int size,int k){

    int subArr = 0;
    int LSubArr = 0;

    for(int i=0; i<size; i++){

        int sum = 0 ;

        int leg = 0;
        for(int j=i; j<size; j++){
            leg++;
           
            sum += Arr[j];
            

            if(sum == k){
              subArr = leg;
            }
           

            if(subArr > LSubArr){
                LSubArr = subArr;
            }
            
        }
        
    }

    cout<<"Longest Sub Array Lenght for Sum : "<<k << " is "<<LSubArr<<endl;
}

int main(){

    int Arr[] = {94, -33 ,-13, 40, -82, 94, -33, -13, 40, -82};
    int size = sizeof(Arr) / sizeof(Arr[0]);
    
    
    int k = 52;
        Approch1(Arr, size, k);
   

    

    return 0;
}