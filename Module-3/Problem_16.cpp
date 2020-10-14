#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x = 37;
    int x_new = pow(x, 2) - x + 41;
    int upper = ceil(sqrt(x_new));

    bool prime = true;

    if(x_new < 2)
    {
        prime = false;
    }

    else if(x_new == 2)
    {
        prime = true;
    }

    else
    {
        for(int i = 2; i <= upper; i++)
        {
            if(x_new % i == 0)
            {
                prime = false;
                break;
            }
        }

    }


    if(prime)
    {
        cout << x_new << " [(n^2 - n + 41) of: " << x << "] is a prime number";
    }

    else
    {
        cout << x_new << " [(n^2 - n + 41) of: " << x << "] is not a prime number";
    }

    return 0;
}


