#include <iostream>
using namespace std;

int count_bubble(int numbers[], int size_numbers)
{

    int new_numbers[size_numbers] = {};
    for(int i = 0; i < size_numbers; i++)
    {
        new_numbers[i] = numbers[i];
    }

    int bubble_count = 0;

    for(int i = 0; i < size_numbers - 1; i++)
    {
        for(int j = 0; j < size_numbers - i - 1; j++)
        {

            if(new_numbers[j] > new_numbers[j+1])
            {
                swap(new_numbers[j], new_numbers[j+1]);
                bubble_count++;
            }
        }
    }

    return bubble_count;
}

int count_insertion(int numbers[], int size_numbers)
{

    int new_numbers[size_numbers] = {};
    for(int i = 0; i < size_numbers; i++)
    {
        new_numbers[i] = numbers[i];
    }


    int insertion_count = 0;


    for(int i = 1; i < size_numbers; i++)
    {
        for(int j = i; j > 0; j--)
        {
            if(new_numbers[j] < new_numbers[j-1])
            {
                swap(new_numbers[j], new_numbers[j-1]);
                insertion_count++;
            }
        }
    }

    return insertion_count;
}

int main()
{
    int numbers[] = {3, 234, 2342, 21, 2341, 4654, 6756, 56, 567, 52, 234, 46, 756, 654, 432, 89, 65};
    int size_numbers = sizeof(numbers)/sizeof(numbers[0]);

    cout << "The unsorted array: " << endl;
    for(int i = 0; i < size_numbers; i++)
    {
        cout << numbers[i] << endl;
    }

    cout << "\n\n" ;

    int bubble_count = count_bubble(numbers, size_numbers);
    int insertion_count = count_insertion(numbers, size_numbers);

    cout << "Number of Comparisons to sort the list by: " << endl;
    cout << "Bubble sort: " << bubble_count << endl;
    cout << "Insertion sort: " << insertion_count << endl;


    int temp;


    return 0;
}

