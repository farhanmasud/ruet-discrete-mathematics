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


int main()
{
    int n = 3;
    int m = 6;
    int sum = pow(n, m);

    for(int i = 1; i < n; i++)
    {
        sum = sum + pow(-1, i) * ncr(n, i) * pow( (n-i), m );
    }

    cout << "The number of onto functions ";
    cout << "from a set of " << m << " elements ";
    cout << "to a set of " << n << " elements: ";
    cout << sum << endl;


    return 0;
}
