#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int x[n] = {};
    x[0] = 32;
    int a = 5;
    int c = 7;
    int m = 111;

    for(int i = 1; i < n; i++)
    {
        x[i] = (a * x[i-1] + c) % m;
    }

    cout << "Using a = " << a << ", c = " << c << ", m = " << m << " and x0 = " << x[0] << endl;
    cout << n << " pseudo random numbers: {";

    for(int i = 0; i < n; i++)
    {
        cout << x[i];
        if(i == n-1)
        {
            cout << "}" << endl;
        }
        else
        {
            cout << ", ";
        }
    }

    return 0;
}
