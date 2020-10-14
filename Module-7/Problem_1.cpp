#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int mat_rel[n][n] = {  {1, 1, 0, 0}, {1, 1, 0, 0}, {0, 0, 1, 1}, {1, 0, 0, 1} };

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

    bool reflexive = true;

    for(int i = 0; i < n; i++)
    {
        if( mat_rel[i][i] != 1)
        {
            reflexive = false;
            break;
        }
    }

    if(reflexive)
    {
        cout << "The given relation is reflexive" << endl;
    }
    else
    {
        cout << "The given relation is not reflexive" << endl;
    }


    return 0;
}
