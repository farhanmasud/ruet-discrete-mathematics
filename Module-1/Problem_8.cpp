#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x, y , z;
    z = 5;

    float x2, y2, z2;
    z2 = pow(z, 2.0);

    bool flag = false;
    for(int i = 1; i < z; i++)
    {
        x = (float)i;
        x2 = pow(x, 2);
        y2 = z2 - x2;

        y = (int)sqrt(y2);
        y2 = pow(y, 2);

        if(x2 + y2 == z2)
        {
            flag = true;
            break;
        }
    }

    if(flag)
    {
        cout << x << "^2+" << y << "^2=" << z << "^2" << endl;
    }

    else
    {
        cout << "Not found for " << z << endl;
    }

    return 0;
}
