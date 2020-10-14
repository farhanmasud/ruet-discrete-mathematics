#include <iostream>
#include <cmath>
using namespace std;

bool check_prime(int x)
{
    int upper = ceil(sqrt(x));

    bool prime = true;
    if(x < 2)
    {
        return false;
    }

    else if(x == 2)
    {
        prime = true;
    }

    else
    {
        for(int i = 2; i <= upper; i++)
        {
            if(x % i == 0)
            {
                prime = false;
                break;
            }
        }

    return prime;

    }
}

int main()
{
    int n = 6;
    int n1, n2;

    if(n%2 == 1)
    {
        cout << n << " is not an even number." << endl;
        return 0;
    }

    for(int i = 1; i <= n/2; i++)
    {
        n1 = i;
        n2 = n-i;

        if(check_prime(n1) && check_prime(n2))
        {
            cout << "Goldberg's conjecture is true for the even integer: " << n << endl;
            cout << n1 << " + " << n2 << " = " << n;
            break;
        }

    }

    return 0;
}
