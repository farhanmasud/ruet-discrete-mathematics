#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int a = 5;
    int b = 2;
    int c = 3;

    int k = 4;

    int fn[k] = {};
    fn[0] = 7;

    // The value of f1 is required to solve this recurrence relation
    // Here, the value of f1 is estimated as 7
    // And the recurrence relation is [with the given values]:
    // f(n) = 5f(n/2)+3

    for(int i = 1; i <= k; i++)
    {
        fn[i] = a*fn[i-1] + c;
    }

    cout << "The recurrence relation: f(n) = " << a << "*f(n/" << b << ")+" << c << endl;
    cout << "For k = " << k << endl;
    cout << "f(b^k) = " << fn[k];

    return 0;
}
