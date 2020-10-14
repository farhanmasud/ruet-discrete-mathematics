#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int edges[][2] = { {1, 2}, {1, 3}, {1, 4}, {1, 7}, {2, 3}, {2, 4}, {2, 5}, {2, 7}, {3, 4}, {3, 6}, {3, 7}, {4, 5}, {4, 6}, {5, 6}, {5, 7}, {6, 7}  };

    int edges_count = sizeof(edges) / sizeof(edges[0]);

    string colors[5] = {"Red", "Green",  "Blue" ,  "Yellow" , "Black" };

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

    int temp_degrees[vertices] = {};
    int colored[vertices] = {};

    for(int i = 0; i < vertices; i++)
    {
        temp_degrees[i] = degrees[i];
        colored[i] = -1;
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

    int temp_vertices = vertices;
    int color_value = 0;

    for(int i = 0; i < vertices; i++)
    {
        // vertex loc is the node number that has the max degree
        int vertex_loc = max_element(temp_degrees, temp_degrees+temp_vertices) - temp_degrees;

        // zeroing out that particular degree
        // so that it doesn't come up in max again

        temp_degrees[vertex_loc] = 0;

        // assigning the color of this vertex to the color_value

        if(colored[vertex_loc] == -1)
        {
            colored[vertex_loc] = color_value;

            // now finding the adjacent nodes and skipping them
            // assigning other nodes other than adjacent node to color 1

            for(int k = 0; k < vertices; k++)
            {
                if(k == vertex_loc)
                {
                    continue;
                }

                else
                {
                    bool adjacent = false;
                    for(int l = 0; l < edges_count; l++)
                    {
                        if(adjacent)
                        {
                            break;
                        }

                        if( edges[l][0] == vertex_loc+1)
                        {
                             if(edges[l][1] == k+1)
                             {
                                 adjacent = true;
                             }
                        }

                        else if( edges[l][1] == vertex_loc+1)
                        {
                            if( edges[l][0] == k+1 )
                            {
                                adjacent = true;
                            }
                        }
                    }

                    if(!adjacent)
                    {
                        if(colored[k] == -1)
                        {
                            colored[k] = color_value;
                        }
                    }
                }
            }

            color_value++;

        }

        else
        {
            continue;
        }
    }

    cout << "Node\tColor" << endl;
    for(int i = 0; i < vertices; i++)
    {
        cout << i+1 << "\t" << colors[ colored[i] ] << endl;
    }

    return 0;
}
