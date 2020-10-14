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
    long number = 25;

    int check_p = log2(number+1);

    bool prime = check_prime(check_p);

    if(prime)
    {
        cout << number << " is a Mersenne prime number";
    }

    else
    {
        cout << number << " is not a Mersenne prime number";
    }


    return 0;
}
