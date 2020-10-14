#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int n = 5;
    string a = "";

    for(int i = 1; i <= n; i++)
    {
        a = a + to_string(i);
    }

    int occurance_of_one_char = pow(2, n-1);
    int total_combinations = pow(2, n) - 1;

    int chunk, starting;

    cout << "n = " << n << endl;

    string output[total_combinations] = {};

    for(int i = 0; i < n; i++)
    {
        chunk = pow(2, (n - i - 1));
        starting = 0;

        while(starting < total_combinations)
        {
            for(int j = starting; j < starting+chunk && j < total_combinations; j++)
            {
                output[j].push_back(a[i]);
            }

            starting = starting + chunk + chunk;
        }
    }

    cout << "All Combinations: " << endl;

    for(int i = 0; i < total_combinations; i++)
    {
        cout << output[i] << endl;
    }

    return 0;
}

