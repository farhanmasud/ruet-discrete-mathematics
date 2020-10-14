/*
This code is for computing and displaying
all permutations for a given list
of length n, and an integer r
"WITHOUT REPETATION"
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int factorial(int n)
{
    if(n <= 1)
    {
        return 1;
    }

    else
    {
        return n * factorial(n - 1);
    }
}

int npr(int n, int r)
{
    return factorial(n) / factorial(n-r);
}

int main()
{
    string a = "12345";
    int n = a.length();

    int occurance_of_one_char = pow(2, n-1);
    int total_combinations = pow(2, n) - 1;

    int r = 2;

    int chunk, starting;

    cout << "Given list: " << a << endl;
    cout << "n = " << n << " r = " << r << endl;

    string combination_output[total_combinations] = {};

    for(int i = 0; i < n; i++)
    {
        chunk = pow(2, (n - i - 1));
        starting = 0;

        while(starting < total_combinations)
        {
            for(int j = starting; j < starting+chunk && j < total_combinations; j++)
            {
                combination_output[j].push_back(a[i]);
            }
            starting = starting + chunk + chunk;
        }
    }

    cout << "All permutations: " << endl;

    int permutaion_count = 0;
    for(int m = 0; m < total_combinations; m++)
    {
        if(combination_output[m].length() == r)
        {
            int output_size = npr(r, r);
            permutaion_count+=output_size;

            string output[output_size] = {};

            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < output_size; j++)
                {
                    int index = j + i;
                    if(index > output_size-1)
                    {
                        index = index % (output_size);
                    }

                    output[index].push_back(combination_output[m][j%r]);
                }
            }

            for(int i = 0; i < output_size; i++)
            {
                cout << output[i] << endl;
            }
        }
    }

    cout << "Total number of permutations: " << permutaion_count << endl;

    return 0;
}

