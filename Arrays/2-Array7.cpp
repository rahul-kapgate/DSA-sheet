#include <iostream>
#include <Math.h>
using namespace std;

void findLagestEl(int Arr[], int size){
    int max = INT_MIN;
    
    for(int i=0; i<size; i++){
        if(max < Arr[i]){
            max = Arr[i];
        }
    }
    cout << "Lagest El : " << max <<endl;  
}

void findSmallestEl(int Arr[], int size){

    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (min > Arr[i])
        {
            min = Arr[i];
        }
    }
    cout << "Smallest El : " << min << endl;
}

    int
    main()
{

    int Arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(Arr)/sizeof(Arr[0]);

    findLagestEl(Arr,size);  // time compexcity : O(n)   n is size of Array 
    findSmallestEl(Arr,size);
  
    return 0;
}