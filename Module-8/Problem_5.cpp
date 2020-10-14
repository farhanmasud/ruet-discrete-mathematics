#include <iostream>
using namespace std;

int main()
{
    int vertices = 4;
    bool directed = false;
    int adjacency_matrix[vertices][vertices] = { {0, 3, 0, 2}, {3, 0, 1, 1}, {0, 1, 1, 2}, {2, 1, 2, 0} };
    //int adjacency_matrix[vertices][vertices] = { {0, 2, 0, 2}, {1, 0, 1, 1}, {0, 0, 1, 1}, {0, 0, 1, 0} };

    if(directed)
    {
        cout << "The graph is DIRECTED." << endl;
    }
    else
    {
        cout << "The graph is NOT directed." << endl << endl;
    }

    cout << "The adjacency matrix: " << endl;

    for(int i = 0; i < vertices; i++)
    {
        for(int j = 0; j < vertices; j++)
        {
            cout << adjacency_matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    cout << "The edges and the number of the edges of the graph from the adjacency matrix:" << endl;

    cout << "Edge\t\tNo of edges" << endl;

    if(directed)
    {
        for(int i = 0; i < vertices; i++)
        {
            for(int j = 0; j < vertices; j++)
            {
                if(adjacency_matrix[i][j] == 0)
                {
                    continue;
                }
                else
                {
                    cout << "(" << i+1 << ", " << j+1 << ")\t\t" << adjacency_matrix[i][j] << endl;
                }
            }
        }
    }
    else
    {
        for(int i = 0; i < vertices; i++)
        {
            for(int j = i; j < vertices; j++)
            {
                if(adjacency_matrix[i][j] == 0)
                {
                    continue;
                    //cout << "(" << i+1 << ", " << j+1 << ")\t\t" << adjacency_matrix[i][j] << endl;
                }
                else
                {
                    cout << "(" << i+1 << ", " << j+1 << ")\t\t" << adjacency_matrix[i][j] << endl;
                }
            }
        }
    }

    return 0;
}
