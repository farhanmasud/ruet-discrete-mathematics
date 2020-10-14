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

int main()
{

    int n = 5;

    cout << "n = " << n << endl;

    for(int i = 0; i <= n; i++)
    {
        float d = 0.0;
        for(int j = 0; j <= i; j++)
        {
            d = d + (1.0/ (float)factorial(j) );
        }

        d = d * (float)factorial(i);
        cout << "D" << i << " = " << d << endl;
    }


    return 0;
}
