#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n)
{
    if(n == 1)
    {
        return n;
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

int npr_wr(int n, int r)
{
    return pow(n, r);
}

int ncr_wr(int n, int r)
{
    return ncr(n+r-1, n);
}

int main()
{
    int n = 6;
    int r = 4;

    cout << n << "P" << r << "[with repetition]: " << npr_wr(n, r) << endl;
    cout << n << "C" << r << "[with repetition]: " << ncr_wr(n, r) << endl;

    return 0;
}
