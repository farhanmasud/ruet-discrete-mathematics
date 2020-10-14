/*
This code is for computing and displaying
all combinations for a given list
of length n, and an integer r
"WITHOUT REPETATION"
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string a = "123456";
    int n = a.length();

    int occurance_of_one_char = pow(2, n-1);
    int total_combinations = pow(2, n) - 1;

    int r = 4;

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

    cout << "All combinations: " << endl;
    for(int m = 0; m < total_combinations; m++)
    {
        if(combination_output[m].length() == r)
        {
            cout << combination_output[m] << endl;

        }

    }

    return 0;
}
