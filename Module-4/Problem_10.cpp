#include <iostream>
#include <cmath>
using namespace std;
int bin_search(int nums[], int num, int low, int high)
{
    int mid = (low + high) / 2;

    if(nums[mid] == num)
    {
        return mid;
    }

    else if(low == mid || high == mid)
    {
        return -1;
    }

    else if(nums[mid] < num)
    {
        return bin_search(nums, num, mid, high);
    }

    else
    {
        return bin_search(nums, num, low, mid);
    }
}

int main()
{
    int numbers[] = {1, 34, 45, 56, 78, 123, 343, 412, 643, 734, 774};
    int numbers_size = sizeof(numbers) / sizeof(numbers[0]);

    int number = 123;
    int ret_val = bin_search(numbers, number, 0, numbers_size);

    if(ret_val > -1)
    {
        cout << "The number: " << number << " found on the list." << endl;
        cout << "The position [zero based] in the list is: " << ret_val << endl;
    }

    else
    {
        cout << "The number: " << number << " was not found on the list." << endl;
    }

    return 0;
}
