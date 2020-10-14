#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x = 25;
    int upper = ceil(sqrt(x));

    bool prime = true;

    if(x < 2)
    {
        prime = false;
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

    }



    if(prime)
    {
        cout << x << " is a prime number";
    }

    else
    {
        cout << x << " is not a prime number";
    }

    return 0;
}

