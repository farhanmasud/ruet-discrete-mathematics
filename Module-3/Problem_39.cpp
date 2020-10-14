#include <iostream>
using namespace std;

int main()
{

    int a[3][3] = { {0, 0, 1}, {1, 0, 0}, {1, 1, 0}};
    int n = 4;

    int ar = sizeof(a) / sizeof(a[0]);
    int ac = sizeof(a[0]) / sizeof(a[0][0]);

    if(ac != ar)
    {
        cout << "Not a square matrix!" << endl;
        cout << "Multiplication not possible." << endl;
    }

    else
    {

        int aa[ar][ac] = {};
        int result[ar][ac] = {};

        for(int i = 0; i < ar; i++)
        {
            for(int j = 0; j < ac; j++)
            {
                result[i][j] = a[i][j];
            }
        }


        for(int p = 0; p < n-1; p++)
        {

            for(int i = 0; i < ar; i++)
            {
                for(int j = 0; j < ac; j++)
                {
                    aa[i][j] = result[i][j];
                    result[i][j] = 0;
                }
            }


            for(int i = 0; i < ar; i++)
            {
                for(int j = 0; j < ac; j++)
                {
                    for(int k = 0; k < ac; k++)
                    {
                        result[i][j] = result[i][j] || (aa[i][k] && a[k][j]);
                    }
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
        cout << "Matrix a^" << n <<  " : " << endl;


        for(int i = 0; i < ar; i++)
        {
            for(int j = 0; j < ac; j++)
            {
                cout << result[i][j] << "\t";
            }
            cout << endl;
        }

        return 0;

    }
}
