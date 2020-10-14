#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout.precision(17);
    double pi= 16*atan(1.0/5.0) - 4*atan(1.0/239.0);

    cout << "The value of pi according to Machin's formula is: " << pi;

    return 0;
}
