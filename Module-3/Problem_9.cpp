#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int number = 9;
    int number_pos_lin;
    int number_pos_bin;
    bool lin_flag = false;

    int size_numbers = sizeof(numbers) / sizeof(numbers[0]);

    int lin_count = 0;

    for(int i = 0; i < size_numbers; i++)
    {
        lin_count++;

        if(numbers[i] == number)
        {
            lin_flag = true;
            number_pos_lin = i;
            break;
        }
    }

    if(lin_flag)
    {
        cout << "The number " << number << " found on the list using Linear Search." << endl;
        cout << "The position of the number is: " << number_pos_lin << " [zero based index]"  << endl;
        cout << "Number of comparisons taken using Linear Search: " << lin_count << endl;
    }

    else
    {
        cout << "The number " << number << " not found on the list." << endl;
        cout << "Number of comparisons taken using Linear Search: " << lin_count << endl;
    }


    int low, high, mid;
    int bin_count = 0;

    low = 0;
    high = size_numbers - 1;

    bool bin_flag = false;


    while(low <= high)
    {
        bin_count++;
        mid = floor(((float)(low+high))/2.0);

        if(mid == low)
        {
            break;
        }

        if(numbers[mid] == number)
        {
            number_pos_bin = mid;
            bin_flag = true;
            break;
        }

        else if(number > numbers[mid])
        {
            low = mid;
        }

        else
        {
            high = mid;
        }
    }

    if(bin_flag)
    {
        cout << "The number " << number << " found on the list using Binary Search." << endl;
        cout << "Position: " << number_pos_bin << " [zero based index]";
        cout << "Number of comparisons taken using Binary Search: " << bin_count << endl;
    }

    else
    {
        cout << "The number " << number << " not found on the list using Binary Search." << endl;
        cout << "Number of comparisons taken using Binary Search: " << bin_count << endl;
    }


    return 0;
}
