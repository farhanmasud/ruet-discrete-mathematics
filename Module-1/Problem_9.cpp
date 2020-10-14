#include <iostream>
using namespace std;

int main()
{
    long n = 13;
    long init_n = n;

    bool flag = false;
    while(1)
    {
        if(n == 1)
        {
            flag = true;
            break;
        }

        if(n % 2 == 0)
        {
            cout << n << "/2=" << n/2 << endl;
            n = n / 2;

        }
        else
        {
            cout << "3*" << n << "+1=" << 3*n+1 << endl;
            n = 3*n + 1;
        }
    }

    if(flag)
    {
        cout << "3n+1 is true for the integer " << init_n << endl;
    }

    return 0;
}
