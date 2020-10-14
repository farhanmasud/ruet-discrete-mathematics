#include <iostream>
using namespace std;

int linear_search(int nums[], int num, int nums_size, int n=0)
{
    if( nums_size == n )
    {
        return -1;
    }

    else if(nums[n] == num)
    {
        return n;
    }

    else
    {
        n++;
        return linear_search(nums, num, nums_size, n);
    }
}

int main()
{
    int numbers[] = {1, 34, 45, 56, 78, 123, 343, 412, 643, 734, 774};
    int numbers_size = sizeof(numbers) / sizeof(numbers[0]);
    int number = 45;
    int ret_val = linear_search(numbers, number, numbers_size);

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
