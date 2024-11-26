#include <iostream>
using namespace std;


void RotateLeftApproch1(int Arr[], int size, int k){

//Store k elements in tempArr
int tempArr[k];
for(int i=0; i<k; i++){
    tempArr[i] = Arr[i];
}

//shift Array by k positions
for(int i=0; i<size-k; i++){

    Arr[i] = Arr[k+i];
}

// tempArr to Array 
int j=0;
for(int i=size-k; i<size; i++){
     Arr[i] = tempArr[j++];
}



//print Array
cout << endl;
for(int i=0; i<size; i++){
   
    cout<<Arr[i]<<" ";
}

}

void RotateLeftApproch2(int Arr[],int size, int k){

    //Reverse first k elements
    int a=0;
    int b=k-1;
    while(a<b){
        swap(Arr[a],Arr[b]);
        a++;
        b--;
    }

    //Reverse the last size-k elements
    int i=k;
    int j=size-1;
    while (i<j)
    {
       swap(Arr[i],Arr[j]);
       i++;
       j--;
    }

    //Reverse whole Array 
    int p=0;
    int q=size-1;
    while(p<q){
        swap(Arr[p],Arr[q]);
        p++;
        q--;
    }
    
    //Print Array 
    cout<<endl;
    for(int i=0; i<size; i++){
        cout<<Arr[i]<<" ";
    }
}

int main(){

    int OrginalArr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(OrginalArr)/sizeof(OrginalArr[0]);

    int k;
    cout<<"Enter K : ";
    cin>>k;

    int Arr1[10];
    copy(begin(OrginalArr), end(OrginalArr), begin(Arr1));
    RotateLeftApproch1(Arr1,size,k);

    int Arr2[10];
    copy(begin(OrginalArr), end(OrginalArr), begin(Arr2));
    RotateLeftApproch2(Arr2, size, k);

    return 0;

}