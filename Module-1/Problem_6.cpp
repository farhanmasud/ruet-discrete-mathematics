#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {-1, -2, -3, -4, -5};

    int a_size = sizeof(a) / sizeof(a[0]);
    int b_size = sizeof(b) / sizeof(b[0]);

    int x, y;

    cout << "x + y = 1" << endl;

    cout << "x belongs to {";
    for(int i = 0; i < a_size; i++)
    {
        cout << a[i];
        if(i != a_size -1)
        {
            cout << ", ";
        }
    }

    cout << "}" << endl;

    cout << "y belongs to {";
    for(int i = 0; i < b_size; i++)
    {
        cout << b[i];
        if(i != b_size -1)
        {
            cout << ", ";
        }
    }

    cout << "}" << endl;

    // x + y = 0

    // Calculating AxAy

    bool flag_aa;
    for(int i = 0; i < a_size; i++)
    {
        for(int j = 0; j < b_size; j++)
        {
            x = a[i];
            y = b[j];

            if(x + y == 0)
            {
                flag_aa = true;
            }
            else
            {
                flag_aa = false;
                break;
            }

        }
        if(!flag_aa)
        {
            break;
        }
    }

    cout << "AxAy: " << flag_aa << endl;

    // Calculating AxEy

    bool flag_ae;
    for(int i = 0; i < a_size; i++)
    {
        flag_ae = false;
        for(int j = 0; j < b_size; j++)
        {
            x = a[i];
            y = b[j];

            if(x + y == 0)
            {
                flag_ae = true;
            }
            else
            {
                flag_ae = flag_ae || false;
            }

        }
        if(!flag_aa)
        {
            break;
        }
    }

    cout << "AxEy: " << flag_ae << endl;

    // Calculating ExAy


    bool flag_ea;
    for(int i = 0; i < a_size; i++)
    {
        for(int j = 0; j < b_size; j++)
        {
            x = a[i];
            y = b[j];

            if(x + y == 0)
            {
                flag_ea = true;
            }
            else
            {
                flag_ea = false;
                break;
            }

        }
        if(flag_ea)
        {
            break;
        }
    }

    cout << "ExAy: " << flag_ea << endl;

    // Calculating ExEy

    bool flag_ee;
    for(int i = 0; i < a_size; i++)
    {
        flag_ee = false;
        for(int j = 0; j < b_size; j++)
        {
            x = a[i];
            y = b[j];

            if(x + y == 0)
            {
                flag_ee = true;
                break;
            }

        }
        if(flag_ee)
        {
            break;
        }
    }

    cout << "ExEy: " << flag_ee << endl;



    return 0;
}
