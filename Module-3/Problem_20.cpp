#include <iostream>
using namespace std;

int main()
{
    int a = 425;
    int b = 1150;
    int gcd;

    int init_a = a;
    int init_b = b;

    if(a < b)
    {
        swap(a, b);
    }

    bool flag = true;

    while(flag)
    {

        if(b == 1)
        {
            gcd = 1;
            flag = false;
        }

        else if(a % b == 0)
        {
            gcd = b;
            flag = false;
        }

        else
        {
            int temp_a = b;
            b = a%b;
            a = temp_a;

        }
    }

    cout << "The GCD of " << init_a << " and " << init_b << " is: " << gcd;

    return 0;
}
