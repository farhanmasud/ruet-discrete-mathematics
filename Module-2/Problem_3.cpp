#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4};
    int a_size = sizeof(a)/sizeof(a[0]);

    cout << "Set A: {";

    for(int i = 0; i < a_size; i++)
    {
        cout << a[i];
        if(i == a_size -1)
        {
            continue;
        }
        else
        {
            cout << ", ";
        }
    }

    cout << "}\n";

    cout << "The elements of the power set of A:\n";

    for(int i = 0; i < a_size; i++)
    {
        cout << "{" << a[i] << "}" << "\n";
    }

    for(int i = 0; i < a_size; i++)
    {
        for(int j = i+1; j < a_size; j++)
        {
            cout <<  "{" << a[i] << ", " << a[j] << "}" << "\n";
        }
    }

    for(int i = 0; i < a_size; i++)
    {
        for(int j = i+1; j < a_size; j++)
        {
            for(int k = j+1; k < a_size; k++)
            {
                cout << "{" << a[i] << ", " << a[j] << ", " << a[k] << "}" <<  "\n";
            }
        }
    }


    return 0;
}
