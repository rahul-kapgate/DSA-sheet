#include <iostream>
using namespace std;

void ConsecutiveOne(int Arr[], int size)
{

    int strik = 0;
    int maxstrik = 0;

    for (int i = 0; i < size; i++)
    {
        if (Arr[i] == 1)
        {
            strik++;
        }
        else
        {
            strik = 0;
        }

        if (strik > maxstrik)
        {
            maxstrik = strik;
        }
    }

    cout << maxstrik << endl;
}

int main()
{

    int Arr[] = {1, 1, 0, 1, 1, 1,1,0,1,1,1};
    int size = sizeof(Arr) / sizeof(Arr[0]);

    ConsecutiveOne(Arr, size);

    return 0;
}
