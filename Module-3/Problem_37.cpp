#include <iostream>
using namespace std;

int main()
{
    int a[2][3] = { {1,0, 1}, {0, 1, 0}};
    int b[2][3] = { {0, 1, 0}, {1, 1, 0}};

    int ar = sizeof(a) / sizeof(a[0]);
    int ac = sizeof(a[0]) / sizeof(a[0][0]);

    int br = sizeof(b) / sizeof(b[0]);
    int bc = sizeof(b[0]) / sizeof(b[0][0]);

    if(  (ar != br)   ||  (ac != bc)  )
    {
        cout << "Dimension of a and b doesn't match." << endl;
        cout << "Not possible to do meet and join with a and b" << endl;
        return 0;
    }


    else
    {
        int a_meet_b[ar][ac] = {};
        int a_join_b[ar][ac] = {};


        for(int i = 0; i < ar; i++)
        {
            for(int j = 0; j < ac; j++)
            {
                a_meet_b[i][j] = a[i][j] && b[i][j];
                a_join_b[i][j] = a[i][j] || b[i][j];
            }
        }


        cout << "Matrix a: " << endl;

        for(int i = 0; i < ar; i++)
        {
            for(int j = 0; j < ac; j++)
            {
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }

        cout << endl;
        cout << "Matrix b: " << endl;

        for(int i = 0; i < ar; i++)
        {
            for(int j = 0; j < ac; j++)
            {
                cout << b[i][j] << "\t";
            }
            cout << endl;
        }

        cout << endl;
        cout << "a meet b: " << endl;

        for(int i = 0; i < ar; i++)
        {
            for(int j = 0; j < ac; j++)
            {
                cout << a_meet_b[i][j] << "\t";
            }
            cout << endl;
        }

        cout << endl;
        cout << "a join b: " << endl;

        for(int i = 0; i < ar; i++)
        {
            for(int j = 0; j < ac; j++)
            {
                cout << a_join_b[i][j] << "\t";
            }
            cout << endl;
        }


        return 0;
    }

}
