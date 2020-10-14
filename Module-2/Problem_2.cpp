#include <iostream>
using namespace std;

int main()
{
    // Two sets a and b

    int a[] = {1, 2, 3, 4, 5};
    int b[] = {12, 34};

    int a_size = sizeof(a)/sizeof(a[0]);
    int b_size = sizeof(b)/sizeof(b[0]);

    cout << "Set A: {";
    for(int i = 0; i < a_size; i++)
    {
        cout << a[i];
        if(i != (a_size - 1) )
        {
            cout << ", ";
        }
    }
    cout << "}";

    cout << "\n";

    cout << "Set B: {";
    for(int i = 0; i < b_size; i++)
    {
        cout << b[i];
        if(i != (b_size - 1) )
        {
            cout << ", ";
        }
    }
    cout << "}";

    cout << "\n\n";

    cout << "Cartesian Product of A and B:\n{";

    for(int i = 0; i < a_size; i++)
    {
        for(int j = 0; j < b_size; j++)
        {

            cout << "(" << a[i] << "," << b[j] << ")";
            if( (i == a_size-1) &&  (j == b_size-1) )
            {
                continue;
            }
            else
            {
                cout << ", ";
            }

        }
    }

    cout << "}\n\n";


    return 0;
}
