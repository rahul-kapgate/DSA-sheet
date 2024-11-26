#include <bits/stdc++.h>
using namespace std;

vector <int> Approch1(int Arr[], int size, int k){

for(int i=0; i<size; i++){  //outer loop

    for(int j=i; j<size; j++){

        if(Arr[i] + Arr[j] == k){
            if(i != j ){
            return {i+1 , j+1};
            }
        }
    }
}

return {-1,-1};

}


vector <int> Approch2(int Arr[], int size, int k){

//outer loop
// for(int i=0; i<size; i++)
// {

//     if(k - Arr[i] == )
// }

 }



int main(){

    int Arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(Arr) / sizeof(Arr[0]);

    int k;
    cout << "Enter Sum : ";
    cin>>k;
    
    // for(int i=0; i<=25; i++){

    // vector <int > result = Approch1(Arr, size, i);

    // cout<<i<<" = "<<result[0]<<" "<<result[1]<<endl;

    // }

    int Arr2[10];
    copy(begin(Arr),end(Arr),begin(Arr));
    
    Approch2(Arr2,size,k);  // using Hashing


    return 0;
}