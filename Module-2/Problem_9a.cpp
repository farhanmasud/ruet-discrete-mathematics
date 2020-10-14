#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout.precision(17);
    double sum = 0.0;
    double step;

    for(int i = 0; i < 30000; i++)
    {
        step = pow(-1, i) / (2*i + 1);
        sum = sum + step;
    }

    double pi = 4*sum;

    cout << "The value of pi according to Gregory-Leibniz formula is: " << pi;

    return 0;
}
