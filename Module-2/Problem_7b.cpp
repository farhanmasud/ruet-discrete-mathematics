#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a = 2;
    int r = 2;
    int l = 0;
    int u = 10;

    int sum = 0;

    for(int i = l; i <= u; i++)
    {
        sum = sum + a*pow(r, i);
    }

    cout << "The sum is: " << sum;

    return 0;
}
