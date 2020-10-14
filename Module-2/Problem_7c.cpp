#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int l1 = 0;
    int u1 = 5;
    int l2 = 0;
    int u2 = 10;

    for(int i = l1; i <= u1; i++)
    {
        for(int j = l2; j <= u2; j++)
        {
            sum = sum + i + j;
        }
    }

    cout << "The sum is: " << sum;

    return 0;
}
