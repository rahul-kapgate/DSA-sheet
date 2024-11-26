#include <iostream>
using namespace std;

void Approch1(int Arr[], int size)
{

    if (size < 2)
    {
        return;
    }

    int max = INT_MIN;
    int secondMax = 0;

    for (int i = 0; i < size; i++)
    {

        if (Arr[i] > max)
            max = Arr[i];
    }

    for (int i = 0; i < size; i++)
    {

        if (Arr[i] > secondMax && Arr[i] != max)
            secondMax = Arr[i];
    }

    cout << "1st :" << max << endl;
    cout << "2nd :" << secondMax << endl;
}

void Approch2(int Arr[], int size)
{

    if (size < 2)
    {
        return;
    }

    int max = INT_MIN;
    int secondMax = 0;

    for (int i = 0; i < size; i++)
    {

        if (Arr[i] > max)
        {
            secondMax = max;
            max = Arr[i];
        }

       else if (Arr[i] > secondMax && Arr[i] != max)
            secondMax = Arr[i];
    }

    cout << "1st :" << max << endl;
    cout << "2nd :" << secondMax << endl;
}

int main()
{

    // int Arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int Arr[10] = {10,9,8,7,6,5,4,3,2,1};
    int size = sizeof(Arr) / sizeof(Arr[0]);

    Approch1(Arr, size);
    Approch2(Arr, size);

    return 0;
}