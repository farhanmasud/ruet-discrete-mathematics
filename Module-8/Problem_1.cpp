#include <iostream>
using namespace std;

int main()
{
    int edges[][2] = { {1, 2}, {2, 3}, {2, 4}, {3, 4}, {3, 5}, {6, 5}, {5, 7}, {5, 8}, {7, 8} };;

    int edges_count = sizeof(edges) / sizeof(edges[0]);

    //cout << edges_count << endl;

    int vertices = 0;

    // find max number of the vertex
    for(int i = 0; i < edges_count; i++)
    {
        vertices = max( vertices,  max(edges[i][0], edges[i][1] ) );
    }

    int degrees[vertices] = {};

    // assigning the degree of all vertices to 0
    for(int i = 0; i < vertices; i++)
    {
        degrees[i] = 0;
    }

    // counting the degrees
    for(int i = 0; i < edges_count; i++)
    {
        degrees[ edges[i][0]-1 ]++;
        degrees[ edges[i][1]-1 ]++;
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

    for(int i = 0; i < vertices; i++)
    {
        cout << "Vertex: " << i+1 << " Degree: " <<  degrees[i] << endl;
    }

    return 0;
}
