#include <iostream>
using namespace std;

int main()
{
    int a = 125;
    int b = 50;
    int gcd, lcm;

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

    lcm = (init_a*init_b) / gcd;

    cout << "The LCM of " << init_a << " and " << init_b << " is: " << lcm;

    return 0;
}

