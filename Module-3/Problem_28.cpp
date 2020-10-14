#include <iostream>
#include <cmath>
using namespace std;

int ipow(int b, int e)
{
    int output = 1;
    for(int i = 0; i < e; i++)
    {
        output = output * b;
    }

    return output;
}

bool is_prime(int x)
{
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

    return prime;
}

int main()
{
    int b = 2;
    int n = 1;

    int x;

    cout << ipow(2, 7) << endl;

    while(n <= 10000)
    {
        bool n_prime = is_prime(n);
        // now
            for(int i = 4; i < n; i++)
            {
                bool i_prime = is_prime(i);
                if(i_prime && (n%i) == 0)
                {


                    int remainder = (n-1) % (i-1);

                    int j = n/i;

                    if(i < 32 && j < 32)
                    {

                    }

                    // less than 32 to keep it inside the range of <int> type variable
                    if(remainder < 32 && remainder > 0)
                    {
                        x = ipow(b, remainder);
                        int remainder_2 = x % n;
                        /*
                        if( n == 341)
                        {
                            cout << "x = " << x << endl;
                            cout << "i prime: " << i << endl;
                            cout << "x%n = " << remainder_2 << endl;
                            cout << "n = " << n << endl;

                            cout << "remainder: " << remainder << endl;
                        }

                        */

                        if( (remainder_2) == 1  )
                        {
                            cout << "Hola: \t\t\t\t\t\t\t" << n << endl;
                            cout << remainder << " " << i << endl;
                            //break;


                        }
                    }
            }

            /*
            x = pow(2, n-1);
            if( (x % n ) == 1  )
            {
                cout << n << endl;
            }
            */

        }

        /*

        n+=2;

        */

        n++;

    }




    return 0;
}
