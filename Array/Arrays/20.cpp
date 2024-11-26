#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



void Approch1(int arr[], int size){

sort(arr, arr+size);
cout << "Using Sort " << endl;
for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
}



}

void betterApproch(int arr[], int n){

    int _0 = 0;
    int _1 = 0;
    int _2 = 0;
     
    for(int i=0; i<n; i++){

        if(arr[i] == 0){
           _0++;
        }else if(arr[i] == 1){
            _1++;
        }else{
            _2++;
        }
    }

    //overide the Array 
    for(int i=0; i<_0; i++){   // 0 1
        arr[i] = 0;
    }

    for (int i = _0; i < _0 + _1; i++)   // 2 3
    {
        arr[i] = 1;
    }

    for (int i = _0 + _1; i < n; i++)   // 4 5
    {
        arr[i] = 2;
    }

    //print Array 
    cout<<endl<<"better Approch"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void sortArray(vector<int> & arr, int n)
    {

        int low = 0, mid = 0, high = n - 1; // 3 pointers

        while (mid <= high)
        {
            if (arr[mid] == 0)
            {
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            }
            else if (arr[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(arr[mid], arr[high]);
                high--;
            }
        }
    }


    int
    main()
{

    int nums[] = { 2, 0, 2, 1, 1, 0 };
    int size = sizeof(nums)/sizeof(nums[0]);

    Approch1(nums,size);  // using hasing

    int nums1[] = {2, 0, 2, 1, 1, 0};
    int size1 = sizeof(nums) / sizeof(nums[0]);

   betterApproch(nums1, size1);

//    int nums2[] = {2, 0, 2, 1, 1, 0};
//    int size2 = sizeof(nums) / sizeof(nums[0]);

//    optimalApproch(nums2, size2);

   int n = 6;
   vector<int> arr = {0, 2, 1, 2, 0, 1};
   sortArray(arr, n);
   cout << "Optimal  Approch:" << endl;
   for (int i = 0; i < n; i++)
   {
       cout << arr[i] << " ";
   }
   cout << endl;

   return 0;
}