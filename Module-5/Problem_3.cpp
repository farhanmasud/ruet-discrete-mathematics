#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {23, 4, 64, 45, 2, 79, 5, 678, 987,  7, 12, 23, 34, 56, 67, 9};
    int size_numbers = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Given sequence: " << endl;
    cout << "{";
    for(int i = 0; i < size_numbers; i++)
    {
        cout << numbers[i];
        if(i == size_numbers-1)
        {
            cout << "}" << endl;
        }
        else
        {
            cout << ", ";
        }
    }

    int global_max = 0;
    int local_max = 0;
    int temp;

    for(int i = size_numbers-1; i > 0; i--)
    {
        local_max = 1;
        temp = numbers[i];
        for(int j = i; j >= 0; j--)
        {
            if(numbers[j] < temp)
            {
                temp = numbers[j];
                local_max++;
            }
        }
        if(local_max > global_max)
        {
            global_max = local_max;
        }
    }

    int global_min = 0;
    int local_min = 0;

    for(int i = size_numbers-1; i > 0; i--)
    {
        local_min = 1;
        temp = numbers[i];
        for(int j = i; j >= 0; j--)
        {
            if(numbers[j] > temp)
            {
                temp = numbers[j];
                local_min++;
            }
        }
        if(local_min > global_min)
        {
            global_min = local_min;
        }
    }

    cout << "Highest length of increasing subsequence: "  << global_max << endl;
    cout << "Highest length of decreasing subsequence: "  << global_min << endl;


    return 0;
}
