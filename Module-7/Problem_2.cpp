#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int mat_rel[n][n] = {  {1, 1, 0, 0}, {1, 1, 0, 0}, {0, 0, 1, 1}, {1, 0, 1, 1} };
    bool symmetry = true;

    cout << "Given relation = {";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if( mat_rel[i][j] == 1  )
            {
                cout << "(" << i+1 << ", " << j+1 << ")";


                if( i == n-1 && j ==  n-1  )
                {
                    continue;
                }
                else
                {
                    cout << ", ";
                }
            }
        }
    }


    cout << "}" << endl;

    for(int i = 0; i < n; i++)
    {
        if(!symmetry)
        {
            break;
        }
        for(int j = 0; j < n; j++)
        {

            if(!symmetry)
            {
                break;
            }

            if( mat_rel[i][j] == 1 )
            {
                if( mat_rel[j][i] == 1 )
                {
                    symmetry =  symmetry && true;
                }

                else
                {
                    symmetry = symmetry && false;
                }
            }
        }
    }

    if(symmetry)
    {
        cout << "The given relation is Symmetric" << endl;
    }
    else
    {
        cout << "The given relation is Asymmetric" << endl;
    }


    return 0;
}
