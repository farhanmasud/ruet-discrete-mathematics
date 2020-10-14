#include <iostream>
using namespace std;

int main()
{
    int a = 25;
    int b = 20;
    int c = 15;
    int ab_intersection = 20;
    int bc_intersection = 15;
    int ca_intersection = 10;
    int abc_intersection = 5;
    int abc_union;

    abc_union = a + b + c - ab_intersection - bc_intersection - ca_intersection + abc_intersection;

    cout << "n(a) = " << a << endl;
    cout << "n(b) = " << b << endl;
    cout << "n(c) = " << c << endl;
    cout << "n(a intersection b) = " << ab_intersection << endl;
    cout << "n(b intersection c) = " << bc_intersection << endl;
    cout << "n(c intersection a) = " << ca_intersection << endl;
    cout << "n(a intersection b intersection c) = " << abc_intersection << endl;
    cout << "n(a union b union c) = " << abc_union<< endl;

    return 0;
}
