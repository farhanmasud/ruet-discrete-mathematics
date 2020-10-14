#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    long n = 1000; // size of the array

    int *numbers = new int[n];

    for(long i = 0; i < n; i++)
    {
        numbers[i] = rand();
    }

    int tmax = 0;

    for(long i = 0; i < n; i++)
    {
        if(numbers[i] > tmax)
        {
            tmax = numbers[i];
        }
    }

    cout << "The largest integer is: " << tmax << endl;

    return 0;
}
