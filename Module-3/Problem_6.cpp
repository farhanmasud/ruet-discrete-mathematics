#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {3, 234, 2342, 21, 2341, 4654, 6756, 56, 567, 52};
    int size_numbers = sizeof(numbers)/sizeof(numbers[0]);
    int temp;

    cout << "The unsorted array: " << endl;
    for(int i = 0; i < size_numbers; i++)
    {
        cout << numbers[i] << endl;
    }

    cout << "\n\n" ;


    for(int i = 1; i < size_numbers; i++)
    {
        for(int j = i; j > 0; j--)
        {
            if(numbers[j] < numbers[j-1])
            {
                swap(numbers[j], numbers[j-1]);
            }
        }
    }

    cout << "The sorted array after insertion sort: " << endl;


    for(int i = 0; i < size_numbers; i++)
    {
        cout << numbers[i] << endl;
    }


    return 0;
}
