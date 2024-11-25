#include <iostream>
#include <Set>
using namespace std;

void Approch1(int Arr[], int size)
{

    set<int> mySet;

    for (int i = 0; i < size; i++)
    {

        mySet.insert(Arr[i]);
    }

    int i = 0;
    for (int ele : mySet)
    {
        // cout << ele << " ";
        Arr[i] = ele;
        i++;
    }

    // cout<<endl<< mySet.size();  6
    // cout<<endl<< size;          10

    for (int i = 6; i < size; i++)
    {
        Arr[i] = 0;
    }

    // Print Array

    cout << "Ap 1 : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << " ";
    }
}

void Approch2(int Arr[], int size)
{

    int P1 = 0;
    int P2 = 1;

    for (int i = 0; i < size; i++)
    {

        if (Arr[P1] == Arr[P2])
        {
            P2++;
        }
        else if (Arr[P1] != Arr[P2])
        {
            Arr[P1 + 1] = Arr[P2];
            P1++;
            P2++;
        }
    }
    cout
        <<endl<< "Ap 2 : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << " ";
    }
}

void removeDuplicates(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    cout <<endl << "Ap 3 : " << endl;
    for (int j = 0; j < i + 1; j++)
    {
        cout << arr[j] << " ";
    }
}

int main()
{
    int originalArr[10] = {1, 1, 2, 5, 3, 3, 5, 4, 4, 6};
    int size = sizeof(originalArr) / sizeof(originalArr[0]);

    // Test Approch1
    int Arr1[10];
    copy(begin(originalArr), end(originalArr), begin(Arr1));
    Approch1(Arr1, size);

    cout << endl;

    // Test Approch2
    int Arr2[10];
    copy(begin(originalArr), end(originalArr), begin(Arr2));
    Approch2(Arr2, size);

    cout << endl;

    // Test removeDuplicates
    int Arr3[10];
    copy(begin(originalArr), end(originalArr), begin(Arr3));
    removeDuplicates(Arr3, size);

    return 0;
}
