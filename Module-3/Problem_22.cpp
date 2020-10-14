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
    int number = 120;
    int upper = number/2;

    bool not_first = false;

    cout << number << " = ";

    for(int i = 2; i <= upper; i++)
    {
        if( check_prime(i)  && (number % i == 0) )
        {
            if(not_first)
            {
                cout << " * ";
            }

            int i_count = 0;
            int check_number = number;
            while(check_number % i == 0)
            {
                check_number = check_number / i;
                i_count++;

            }
            upper = number / i;
            cout << i << "^" << i_count;

            not_first = true;
        }

    }

    return 0;
}
