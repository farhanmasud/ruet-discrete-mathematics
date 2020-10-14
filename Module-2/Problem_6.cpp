#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int lower_limit, upper_limit;
    int lhs, rhs;
    bool flag = true;

    lower_limit = -100;
    upper_limit = 100;

    //cout << "x\tLHS\tRHS" << endl;
    for(int i = lower_limit; i <= upper_limit; i++)
    {
        lhs = floor(2*i);
        rhs = floor(i) + floor(i + 0.5);

        //cout << i << "\t" << lhs << "\t" << rhs << endl;

        if(lhs != rhs)
        {
            flag = false;
            break;
        }
    }

    cout << "floor(2*x) = floor(x) + floor(x+1/2) ";
    if(flag == true)
    {
        cout << "is true for the range " << lower_limit << " to " << upper_limit;
    }

    else
    {
        cout << "is false for the range " << lower_limit << " to " << upper_limit;
    }


    return 0;
}
