#include <iostream>
#include <set>
#include <vector>
using namespace std;

void Union(int Arr1[], int sizeArr1, int Arr2[], int sizeArr2)
{

    set<int> mySet;

    for(int i=0; i<sizeArr1; i++){
        mySet.insert(Arr1[i]);
    } 

    for(int i=0; i<sizeArr2; i++){
        mySet.insert(Arr2[i]);
    }  


    //print 
    for(int El : mySet){
        cout<<El<<" ";
    }
}

void UnionUsingPointer(int Arr1[], int sizeArr1, int Arr2[], int sizeArr2){

int i=0,j=0; //pointer 
vector <int> Union;
while(i < sizeArr1 && i< sizeArr2){

    if(Arr1[i] <=  Arr2[j]){   //case 1 and 2

        if(Union.size() == 0 || Union.back() != Arr1[i]){
               Union.push_back(Arr1[i]);
        }
        i++;
    }else {  // case 3

        if(Union.size() == 0 || Union.back() != Arr2[j]){
                Union.push_back(Arr2[j]);
        }
        j++;
    }
}

while(i < sizeArr1){
    if (Union.size() == 0 || Union.back() != Arr1[i])
    {
        Union.push_back(Arr1[i]);
    }
    i++;
}

while (j < sizeArr2)
{
    if (Union.size() == 0 || Union.back() != Arr2[j])
    {
        Union.push_back(Arr2[j]);
    }
    j++;
}


//print Vector 
for(int El : Union){
    cout<<El<<" ";
}

}

void UnionUsingPointerUnsorted(const int Arr1[], int sizeArr1, const int Arr2[], int sizeArr2)
{
    int i = 0, j = 0; // Pointers for Arr1 and Arr2
    vector<int> Union;

    // Traverse both arrays
    while (i < sizeArr1 && j < sizeArr2)
    {
        if (Arr1[i] < Arr2[j])
        {
            // Case 1: Arr1[i] is smaller
            if (Union.empty() || Union.back() != Arr1[i])
            {
                Union.push_back(Arr1[i]);
            }
            i++;
        }
        else if (Arr1[i] > Arr2[j])
        {
            // Case 2: Arr2[j] is smaller
            if (Union.empty() || Union.back() != Arr2[j])
            {
                Union.push_back(Arr2[j]);
            }
            j++;
        }
        else
        {
            // Case 3: Both elements are equal
            if (Union.empty() || Union.back() != Arr1[i])
            {
                Union.push_back(Arr1[i]);
            }
            i++;
            j++;
        }
    }

    // Add remaining elements of Arr1
    while (i < sizeArr1)
    {
        if (Union.empty() || Union.back() != Arr1[i])
        {
            Union.push_back(Arr1[i]);
        }
        i++;
    }

    // Add remaining elements of Arr2
    while (j < sizeArr2)
    {
        if (Union.empty() || Union.back() != Arr2[j])
        {
            Union.push_back(Arr2[j]);
        }
        j++;
    }

cout<<endl;
    // Print the union
    for (int el : Union)
    {
        cout << el << " ";
    }
    cout << endl;
}

int main(){

int Arr1[5] = {1,2,3,4,5};
int Arr2[5] = {3,4,5,6,7};
int sizeArr1 = sizeof(Arr1) / sizeof(Arr1[0]);
int sizeArr2 = sizeof(Arr2) / sizeof(Arr2[0]);

Union(Arr1, sizeArr1, Arr2, sizeArr2);

int Arr12[5] = {1, 2, 3, 4, 5};
int Arr22[5] = {3, 4, 5, 6, 7};
int sizeArr12 = sizeof(Arr12) / sizeof(Arr12[0]);
int sizeArr22 = sizeof(Arr22) / sizeof(Arr22[0]);

UnionUsingPointer(Arr12, sizeArr12, Arr22, sizeArr22);


int ArrU1[10] = {1,2,3,4,5,6,7,8,9,10};
int ArrU2[10] = {5,6,7,8,9,10,11,12,13,14};
int size1 = sizeof(ArrU1) / sizeof(ArrU1[0]);
int size2 = sizeof(ArrU2) / sizeof(ArrU2[0]);
UnionUsingPointerUnsorted(ArrU1,size1,ArrU2,size2);



    return 0;
}

