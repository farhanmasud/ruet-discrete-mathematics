#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int gcd;

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

}

int main()
{
    int a = 6;
    int b = 14;
    int gcd_ab = gcd(a, b);

    int upper = 100;
    int lower = -100;

    int t, s;

    bool flag = false;

    for(int i = 0; i <= upper; i++)
    {
        if(flag)
        {
            break;
        }
        for(int j = lower; j <= upper; j++)
        {
            if( (i*a + j*b) ==  gcd_ab )
            {
                t = i;
                s = j;
                flag = true;
                break;
            }
        }
    }

    if(!flag)
    {
        for(int i = -1; i >= lower; i++)
        {
            if(flag)
            {
                break;
            }
            for(int j = lower; j <= upper; j++)
            {
                if( (i*a + j*b) ==  gcd_ab )
                {
                    t = i;
                    s = j;
                    flag = true;
                    break;
                }
            }
        }

    }

    if(flag)
    {
        cout << "GCD of " << a << " and " << b << " = " << gcd_ab << endl;
        cout << gcd_ab << " = " << t << "*" << a << " + " << s << "*" << b << endl;
    }

    else
    {
        cout << "t and s not found in the limit of [-100, 100]" << endl;
    }

    return 0;
}
