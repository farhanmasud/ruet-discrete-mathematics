#include <iostream>
using namespace std;

int main()
{
    int k = 4;
    int c1 = 1;
    int c2 = 2;

    int a[k+1] = {};
    a[0] = 2;
    a[1] = 7;

    for(int i = 2; i <= k; i++)
    {
        a[i] = c1*a[i-1] + c2*a[i-2];
    }

    cout << "Recurrence relation: a[n] = " << c1 << "*a[n-1] + " <<  c2 << "*a[n-2]" << endl;
    cout << "Where, a0 = " << a[0] << " and a1 = " << a[1] << endl;

    cout << "For k = " << k << endl;
    cout << "a[k] = " << a[k];


    return 0;
}
