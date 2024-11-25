#include <iostream>
using namespace std;

void Fibonacci(int N){

    if (N == 0)
    {
        cout << 0;
    }
    else if (N == 1)
    {
        cout << 0 << " " << 1 << "\n";
    }
    else
    {
        int fib[N + 1];

        fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= N; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    cout << "The Fibonacci Series up to " << N << "th term:" << endl;
    for (int i = 0; i <=N; i++)
    {
        cout << fib[i] << " ";
    } 
    }
}

    int
    main()
{

    int N;
    cout << "Enter N : ";
    cin >> N;

    Fibonacci(N);

    return 0;
}