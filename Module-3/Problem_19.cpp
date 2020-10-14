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
    int n = 19;

    bool first_prime = check_prime(n);

    if(first_prime)
    {
        bool second_prime = check_prime(n+2);

        if(second_prime)
        {
            cout << n << " and " << n+2 << " are twin primes" << endl;
        }

        else
        {
            cout << n << " and " << n+2 << " are not twin primes" << endl;
        }
    }

    else
    {
        cout << n << " is not a prime number" << endl;
    }


    return 0;
}

