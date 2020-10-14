#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int k = 4;

    float a[k+1] = {};
    a[0] = 2.0;
    a[1] = 7.0;

    float a_init = 1.0;
    float c1 = -1.0;
    float c2 = -2.0;

    float root_part = sqrt(pow(c1, 2.0) - 4.0*a_init*c2);
    float x1 = ( -c1 + root_part  ) / 2*a_init;
    float x2 = ( -c1 - root_part  ) / 2*a_init;

    float d = x2 - x1;
    float d1 = a[0]*x2 - a[1];
    float d2 = a[1] - a[0]*x1;

    float alpha1 = d1/d;
    float alpha2 = d2/d;

    cout << "Recurrence relation: a[n] = " << c1 << "*a[n-1] + " <<  c2 << "*a[n-2]" << endl;

    cout << "Given, a0 = " << a[0] << " and a1 = " << a[1] << endl;

    cout << "Unique solution: " <<  "(" << alpha1 << ")" << "*" <<  "(" << x1 <<  ")" << "^n" << "+";
    cout << "(" << alpha2 << ")" << "*" << "(" << x2 << ")" << "^n" << endl;

    return 0;
}

