#include <iostream>
using namespace std;

void base_expansion(int n, int b, int a[])
{
    int q = n;
    int k = 0;
    while(q != 0)
    {
        a[k] = q % b;
        cout << a[k] << " ";
        q = q / b;
    }
}

int main()
{
    int a[] = {};
    int b = 17;

    cout << "Base expansion of " << b << ": ";
    base_expansion(b, 2, a);

    return 0;
}
