#include <iostream>
using namespace std;

int main(){


int Arr[10] = {1,2,3,4,5,6,7,8,10,9};


int key = 7;

for(int i=0; i<10; i++){

    if(Arr[i] == key ){
        cout<<i;
    }
}


    return 0;
}