#include <iostream>
using namespace std;

int fib_iter(int n)
{
    if(n <= 1)
    {
        return n;
    }

    else
    {
        int fib_n = 1;
        int fib_n1 = 0;
        for(int i = 0; i < n-1; i++)
        {
            int temp_n1 = fib_n;
            fib_n = fib_n + fib_n1;
            fib_n1 = temp_n1;
        }

        return fib_n;
    }

}

int main()
{
    int n = 7;

    cout << "n: " << n << endl;
    cout << "nth Fibonacci number: " <<  fib_iter(n) << endl;;

    return 0;
}
