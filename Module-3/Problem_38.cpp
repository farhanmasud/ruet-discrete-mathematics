#include <iostream>
using namespace std;

int main()
{
    int a[3][2] = { {1,0}, {0, 1}, {1, 0} };
    int b[2][3] = { {1, 1, 0}, {0, 1, 1} };

    int ar = sizeof(a) / sizeof(a[0]);
    int ac = sizeof(a[0]) / sizeof(a[0][0]);

    int br = sizeof(b) / sizeof(b[0]);
    int bc = sizeof(b[0]) / sizeof(b[0][0]);

    if(ac != br)
    {
        cout << "Dimension mismatch!" << endl;
        cout << "Multiplication not possible." << endl;
    }

    else
    {

        int ab[ar][bc] = {};

        for(int i = 0; i < ar; i++)
        {
            for(int j = 0; j < bc; j++)
            {
                ab[i][j] = 0;
            }
        }

        for(int i = 0; i < ar; i++)
        {
            for(int j = 0; j < bc; j++)
            {
                for(int k = 0; k < ac; k++)
                {
                    ab[i][j] = ab[i][j] || (a[i][k]  &&  b[k][j]);
                }
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

        for(int i = 0; i < br; i++)
        {
            for(int j = 0; j < bc; j++)
            {
                cout << b[i][j] << "\t";
            }
            cout << endl;
        }

        cout << endl;
        cout << "Boolean product of a and b: " << endl;

        for(int i = 0; i < ar; i++)
        {
            for(int j = 0; j < bc; j++)
            {
                cout << ab[i][j] << "\t";
            }
            cout << endl;
        }

        return 0;

    }


}
