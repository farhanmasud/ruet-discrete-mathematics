#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n <= 1)
    {
        return 1;
    }

    else
    {
        return n * factorial(n - 1);
    }
}

int npr(int n, int r)
{
    return factorial(n) / factorial(n-r);
}


int ncr(int n, int r)
{
    return npr(n, r) / factorial(r);
}

int main()
{
    int n = 5;
    int r = 3;

    cout << n << "P" << r << ": " << npr(n, r) << endl;
    cout << n << "C" << r << ": " << ncr(n, r) << endl;

    return 0;
}
