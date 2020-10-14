#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if(a < b)
    {
        swap(a, b);
    }

    if(a % b == 0)
    {
        return b;
    }

    else
    {
        return gcd(b, a%b);
    }

}

int main()
{
    int a = 15;
    int b = 105;

    int init_a = a;
    int init_b = b;

    int ab_gcd = gcd(a, b);

    cout << "The GCD of " << init_a << " and " << init_b << " is: " << ab_gcd;

    return 0;
}
