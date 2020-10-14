#include <iostream>
using namespace std;

double a_to_the_n(double a, int n, double an)
{
    if(n == 1)
    {
        return an*a;
    }

    else
    {
        an = an*a;
        n--;
        return a_to_the_n(a, n, an);
    }
}

int main()
{
    double a = 2.0152;
    int n = 7;
    double two_n = 1.0;
    double an = 1.0;

    two_n = a_to_the_n(2.0, n, two_n);
    an = a_to_the_n(a, two_n, an);

    cout << "a: " << a << endl;
    cout << "n: " << n << endl;

    cout.precision(16);
    cout << "pow(a, n): " << an << endl;
    return 0;
}
