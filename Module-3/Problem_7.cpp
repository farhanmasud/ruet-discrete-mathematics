#include <iostream>
using namespace std;

int main()
{
    int quarter = 0;
    int dime = 0;
    int nickel = 0;
    int penny = 0;

    int n = 97;

    int sum = 0;
    int remaining_n;

    int n_quarter = n/25;
    sum = sum + 25*n_quarter;
    remaining_n = n - sum;

    int n_dime = remaining_n/10;
    sum = sum + 10*n_dime;
    remaining_n = n - sum;

    int n_nickel = remaining_n/5;
    sum = sum + 5*n_nickel;
    remaining_n = n - sum;

    int n_penny = remaining_n;

    cout << "n: " << n << endl;
    cout << "Quarter: " << n_quarter << endl;
    cout << "Dime: " << n_dime << endl;
    cout << "Nickel: " << n_nickel << endl;
    cout << "Penny: " << n_penny << endl;


    return 0;
}
