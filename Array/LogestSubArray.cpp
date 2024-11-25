// Problem Statement : Given an array and a sum k, we need to print the length of the longest
//  subarray that sums to k.

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void LongestSubArray(vector<int> &Arr, int sum)
{
    int n = Arr.size();
    int maxLen = 0;

    for(int i=0; i<n; i++){  // selecting i where sub Array Started
        
        int k = 0;

        for(int j=i; j<n; j++){
            k += Arr[j];

        if(k ==  sum){
            maxLen = max(maxLen, j - i + 1);
        }
        }

    }

    cout<<maxLen;
   
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    vector<int> Arr(arr, arr + sizeof(arr) / sizeof(arr[0])); // Convert array to vector

    int sum = 7;

    LongestSubArray(Arr,sum);

    return 0;
}


// Time Complexity: O(N2) approx., where N = size of the array.
// Reason: We are using three nested loops, each running approximately N times.

// Space Complexity: O(1) as we are not using any extra space.