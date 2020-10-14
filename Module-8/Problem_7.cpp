#include <iostream>
using namespace std;

int main()
{
    int vertices = 4;
    int edges = 8;
    int incidence_matrix[vertices][edges] = {  {1, 1, 1, 0, 0, 0, 0, 0}, {1, 0, 0, 1, 1, 0, 0, 0}, {0, 0, 0, 1, 0, 1, 1, 1}, {0, 1, 1, 0, 1, 0, 1, 1}  };

    cout << "Given Incidence Matrix:" << endl;
    for(int i = 0; i < vertices; i++)
    {
        for(int j = 0; j < edges; j++)
        {
            cout << incidence_matrix[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Edge\t\tNo of edges" << endl;

    for(int i = 0; i < edges; i++)
    {
        int vertices_count = 0;
        int first_vertex = 0;
        for(int j = 0; j < vertices; j++)
        {
            if( (incidence_matrix[j][i] == 1) && (vertices_count == 0)  )
            {
                vertices_count++;
                first_vertex = j+1;
                cout << "(" << j+1;
            }
            else if((incidence_matrix[j][i] == 1) && (vertices_count == 1))
            {
                vertices_count++;
                cout << ", " << j+1 << ")\t\t1";
            }
        }
        if(vertices_count == 1)
        {
            cout << ", " << first_vertex << ")\t\t1";
        }
        cout << endl;
    }

    return 0;
}
