#include <iostream>
using namespace std;

int fib_recur(int n, int cnt = 0, int fib_n1 = 0, int fib_n = 1)
{
    if(n <= 1)
    {
        return n;
    }

    else if(cnt == n-1)
    {
        return fib_n;
    }

    else
    {
        int temp_n1 = fib_n;
        fib_n = fib_n + fib_n1;
        fib_n1 = temp_n1;
        cnt++;

        return fib_recur(n, cnt, fib_n1, fib_n);
    }
}

int main()
{
    int n = 7;

    cout << "n: " << n << endl;
    cout << "nth Fibonacci number: " <<  fib_recur(n) << endl;;

    return 0;
}
