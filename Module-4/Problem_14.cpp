#include <iostream>
using namespace std;

int ackerman(int m, int n)
{
    if(m == 0)
    {
        return 2*n;
    }

    else if(m >= 1)
    {
        if(n == 0)
        {
            return 0;
        }

        else if(n == 1)
        {
            return 2;
        }

        else
        {
            return ackerman(m-1, ackerman(m, n-1));
        }
    }
}

int main()
{
    int m, n;
    m = 3;
    n = 3;
    cout << "Ackerman(" << m << "," << n << ") = " << ackerman(3, 3);

    return 0;
}
