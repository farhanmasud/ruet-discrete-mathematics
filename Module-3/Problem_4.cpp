#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int numbers[] = {1, 12, 13, 24, 25, 36, 47, 48, 69, 710};
    int number;
    int number_pos;
    bool flag = false;

    int size_numbers = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Enter number to find: " << endl;
    cin >> number;

    int low, high, mid;

    low = 0;
    high = size_numbers - 1;


    while(low <= high)
    {
        mid = floor(((float)(low+high))/2.0);

        if(mid == low)
        {
            break;
        }

        if(numbers[mid] == number)
        {
            number_pos = mid;
            flag = true;
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

    if(flag)
    {
        cout << "The number " << number << " found on the list." << endl;
        cout << "Position: " << number_pos;
    }

    else
    {
        cout << "The number " << number << " not found on the list." << endl;
    }

    return 0;
}
