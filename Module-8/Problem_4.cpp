#include <iostream>
using namespace std;

int main()
{
    bool directed = true;

    int edges[][2] = { {1, 2}, {1, 2}, {2, 1}, {1, 4}, {1, 4}, {2, 3}, {2, 4}, {3, 3}, {3, 4}, {4, 3}};
    int edges_count = sizeof(edges) / sizeof(edges[0]);

    if(directed)
    {
        cout << "The graph is DIRECTED." << endl;
    }
    else
    {
        cout << "The graph is NOT directed." << endl;
    }

    cout << "Given edges: {";
    for(int i = 0; i < edges_count; i++)
    {
        cout << "(" << edges[i][0] << ", " << edges[i][1] << ")";
        if(i == edges_count-1)
        {
            cout << "}" << endl << endl;
        }
        else
        {
            cout << ", ";
        }
    }


    int vertices = 0;

    // find max number of the vertex
    for(int i = 0; i < edges_count; i++)
    {
        vertices = max( vertices,  max(edges[i][0], edges[i][1] ) );
    }

    int adjacency_matrix[vertices+1][vertices+1] = {};
    for(int i = 0; i <= vertices; i++)
    {
        for(int j = 0; j <= vertices; j++)
        {
            adjacency_matrix[i][j] = 0;
        }
    }

    if(directed)
    {
        //continue;

        for(int i = 0; i < edges_count; i++)
        {
            adjacency_matrix[ edges[i][0] ][ edges[i][1] ]++;
        }
    }

    else
    {
        //continue;
        for(int i = 0; i < edges_count; i++)
        {
            if( edges[i][0] == edges[i][1] )
            {
                adjacency_matrix[ edges[i][0] ][ edges[i][1] ]++;
            }

            else
            {
                adjacency_matrix[ edges[i][0] ][ edges[i][1] ]++;
                adjacency_matrix[ edges[i][1] ][ edges[i][0] ]++;
            }

        }
    }

    cout << "Corresponding adjacency Matrix of the graph: " << endl;

    for(int i = 1; i <= vertices; i++)
    {
        for(int j = 1; j <= vertices; j++)
        {
            cout << adjacency_matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
