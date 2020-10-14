#include <iostream>
using namespace std;

int main()
{
    int vertices = 4;
    int adjacency_matrix[vertices][vertices] = { {0, 1, 1, 0}, {1, 0, 0, 1}, {1, 0, 0, 1}, {0, 1, 1, 0} };
    int from_vertex = 2;
    int to_vertex = 3;

    int n = 4;

    int aa[vertices][vertices] = {};
    int result[vertices][vertices] = {};

    for(int i = 0; i < vertices; i++)
    {
        for(int j = 0; j < vertices; j++)
        {
            result[i][j] = adjacency_matrix[i][j];
        }
    }


    for(int p = 0; p < n; p++)
    {

        for(int i = 0; i < vertices; i++)
        {
            for(int j = 0; j < vertices; j++)
            {
                aa[i][j] = result[i][j];
                result[i][j] = 0;
            }
        }


        for(int i = 0; i < vertices; i++)
        {
            for(int j = 0; j < vertices; j++)
            {
                for(int k = 0; k < vertices; k++)
                {
                    result[i][j] = result[i][j] + aa[i][k]*adjacency_matrix[k][j];
                }
            }
        }
    }

    cout << "n: " << n << endl << endl;
    cout << "Adjacency Matrix: " << endl;
    for(int i = 0; i < vertices; i++)
    {
        for(int j = 0; j < vertices; j++)
        {
            cout << adjacency_matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;


    cout << "(Adjacency Matrix)^" << n << ":" << endl;

    for(int i = 0; i < vertices; i++)
    {
        for(int j = 0; j < vertices; j++)
        {
            cout << aa[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Number of paths of length " << n << " from " << from_vertex-1 << " to " << to_vertex-1 << ": " << aa[from_vertex-1][to_vertex-1];

    return 0;
}
