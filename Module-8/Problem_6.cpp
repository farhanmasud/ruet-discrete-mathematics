#include <iostream>
using namespace std;

int main()
{
    int edges[][2] = { {1, 2}, {1, 4}, {1, 4}, {2, 3}, {2, 4}, {3, 3}, {3, 4}, {4, 3}};
    int edges_count = sizeof(edges) / sizeof(edges[0]);

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

    int incidence_matrix[vertices][edges_count] = {};

    for(int i = 0; i < vertices; i++)
    {
        for(int j = 0; j < edges_count; j++)
        {
            incidence_matrix[i][j] = 0;
        }
    }

    for(int i = 0; i < edges_count; i++)
    {
        if( edges[i][0] == edges[i][1] )
        {
            incidence_matrix[ edges[i][0] - 1][i] = 1;
        }
        else
        {
            incidence_matrix[ edges[i][0] - 1 ][i] = 1;
            incidence_matrix[ edges[i][1] - 1][i] = 1;
        }
    }

    cout << "Corresponding Incidence Matrix: " << endl;

    for(int i = 0; i < vertices; i++)
    {
        for(int j = 0; j < edges_count; j++)
        {
            cout << incidence_matrix[i][j] << "\t";
        }
        cout << endl;
    }


    return 0;
}
