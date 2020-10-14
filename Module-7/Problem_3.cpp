#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int mat_rel[n][n] = {  {1, 1, 0, 0}, {1, 1, 0, 0}, {1, 0, 0, 1}, {1, 0, 0, 1} };

    cout << "Given relation = {";
    bool transitive = true;

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
        for(int j = 0; j < n; j++)
        {
            if( mat_rel[i][j] == 1  )
            {
                transitive = false;
                for(int k = 0; k < n; k++)
                {
                    if( mat_rel[j][k] == 1   )
                    {
                        if( mat_rel[i][k] == 1  )
                        {
                            transitive = true;
                        }
                    }
                }
            }

            if(!transitive)
            {
                break;
            }

        }
        if(!transitive)
        {
            break;
        }

    }

    if(transitive)
    {
        cout << "The given relation is Transitive" << endl;
    }
    else
    {
        cout << "The given relation is not transitive" << endl;
    }


    return 0;
}
