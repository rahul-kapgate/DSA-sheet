#include <iostream>
#include <vector>
#include <set>
using namespace std;


void RemoveZeroApproch1(int Arr[],int size){

vector <int> myArr;

for(int i=0; i<size;i++){

if(Arr[i] != 0) {
     myArr.push_back(Arr[i]);
}
}

int i=0;
for(int El: myArr){
    Arr[i] = El;
    i++;
}

for(int i=myArr.size();i<size; i++){
    Arr[i] = 0;
}


//Print Array 
for(int i=0; i<size;i++){
    cout<<Arr[i]<<" ";
}

}

void RemoveZeroApproch2(int Arr[], int size){

     int pointer1=1, pointer2 = 1;

    for(int i=0; i<size; i++){

         if(Arr[i] == 0){
            pointer2++;
         }else{
            Arr[pointer1+1] = Arr[i];
            pointer1++;
            pointer2++;
         }
    }

    //print Arr
    for(int i=0; i<size; i++){
        cout<<Arr[i]<<" ";
    }

}

    int main()
    {

        int OrgArr[10] = {1, 0, 2, 0, 3, 3, 4, 0, 5, 0};
        int size = sizeof(OrgArr) / sizeof(OrgArr[0]);

        // int Arr1[10];
        // copy(begin(OrgArr), end(OrgArr), begin(Arr1));
        // RemoveZeroApproch1(Arr1, size);

        int Arr2[10];
        copy(begin(OrgArr), end(OrgArr), begin(Arr2));  //using two pointers 
        RemoveZeroApproch2(Arr2, size);

        return 0;
    }