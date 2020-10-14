#include <iostream>
using namespace std;

/* Note: This code doesn't have the solution for checking same neighborhood  */

int main()
{
    int edges_1[][2] = { {1, 2}, {1, 3}, {1, 4}, {2, 4}, {3, 4}, {3, 5}, {4, 5} };
    int edges_2[][2] = { {1, 2}, {1, 3}, {1, 4}, {1, 5}, {2, 4}, {2, 5}, {3, 4} };

    int edge_size_1 = sizeof(edges_1) / sizeof(edges_1[0]);
    int edge_size_2 = sizeof(edges_2) / sizeof(edges_2[0]);

    if(edge_size_1 != edge_size_2)
    {
        cout << "1 ";
        cout << "Graph 1 and Graph 2 are not isomorphic" << endl;
    }

    else
    {
        int vertices_1 = 0;

        for(int i = 0; i < edge_size_1; i++)
        {
            vertices_1 = max( vertices_1,  max(edges_1[i][0], edges_1[i][1] ) );
        }

        int vertices_2 = 0;

        for(int i = 0; i < edge_size_2; i++)
        {
            vertices_2 = max( vertices_2,  max(edges_2[i][0], edges_2[i][1] ) );
        }

        if(vertices_1 != vertices_2)
        {
            cout << "2 ";
            cout << "Graph 1 and Graph 2 are not isomorphic" << endl;
        }
        else
        {
            int degrees_1[vertices_1] = {};

            // assigning the degree of all vertices to 0
            for(int i = 0; i < vertices_1; i++)
            {
                degrees_1[i] = 0;
            }

            // counting the degrees
            for(int i = 0; i < edge_size_1; i++)
            {
                degrees_1[ edges_1[i][0]-1 ]++;
                degrees_1[ edges_1[i][1]-1 ]++;
            }

            int degrees_2[vertices_2] = {};

            // assigning the degree of all vertices to 0
            for(int i = 0; i < vertices_2; i++)
            {
                degrees_2[i] = 0;
            }

            // counting the degrees
            for(int i = 0; i < edge_size_2; i++)
            {
                degrees_2[ edges_2[i][0]-1 ]++;
                degrees_2[ edges_2[i][1]-1 ]++;
            }

            int temp_degrees_2[vertices_2] = {};
            for(int i = 0; i < edge_size_2; i++)
            {
                temp_degrees_2[i] = degrees_2[i];
            }

            bool equal_degree[vertices_1] = {};

            for(int i = 0; i < vertices_1; i++)
            {
                equal_degree[i] = false;
            }

            int temp_degree_count = vertices_2;
            for(int i = 0; i < vertices_1; i++)
            {
                for(int j = 0; j < temp_degree_count; j++)
                {
                    if(degrees_1[i] == temp_degrees_2[j])
                    {
                        equal_degree[i] = true;
                        for(int k = j; k < temp_degree_count-1; k++)
                        {
                            temp_degrees_2[k] = temp_degrees_2[k+1];
                        }
                        temp_degree_count--;
                        break;
                    }
                }
            }

            for(int i = 0; i < vertices_1; i++)
            {
                cout << degrees_1[i] << " " << degrees_2[i] << " " <<  temp_degrees_2[i] << " " << equal_degree[i] << endl;
            }

            cout << endl;

            bool all_degree_equal = true;
            for(int i = 0; i < vertices_1; i++)
            {
                if(equal_degree[i] == false)
                {
                    all_degree_equal = false;
                    break;
                }
            }

            if(!all_degree_equal)
            {
                cout << "3 ";
                cout << "Graph 1 and Graph 2 are not isomorphic" << endl;
            }

            else
            {
                // Now checking if the neighboring degrees are same
                cout << "Hmm.." << endl;


                for(int i = 0; i < vertices_1; i++)
                {
                    int temp_degree_1_loc = i;
                    int temp_degree_2_loc[] = {};
                    int temp_degree_2_count = 0;
                    for(int j = 0; j < vertices_2; j++)
                    {
                        if(degrees_1[i] == degrees_2[])
                        {
                            temp_degree_2_loc[temp_degree_2_count] = j+1;
                            temp_degree_2_count++;
                        }

                        for(int k = 0; k < temp_degree_2_count; k++)
                        {
                            for(int l = 0; l < edge_size_1; l++)
                            {
                                int neighboring_degrees_1[] = {};
                                int neighboring_degrees_1_count = 0;

                                if(edges_1[l][0] == i)
                                {
                                    neighboring_degrees_1[neighboring_degrees_1_count] = edges[l][1];
                                    neighboring_degrees_1_count++;
                                }

                                for(int m = 0; i < neighboring_degrees_1_count; i++)
                                {

                                }
                            }
                        }

                    }
                }
            }
        }
    }


    return 0;
}
