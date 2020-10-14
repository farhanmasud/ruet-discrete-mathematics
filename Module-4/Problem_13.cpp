#include <iostream>
using namespace std;

int part(int m, int n)
{
    int new_p;

    if(m == 1 && n == 1)
    {
        return 1;
    }

    else if(m == 1 || n == 1)
    {
        return 1;
    }

    else if(m < n)
    {
        return part(m, m);
    }

    else if(m == n)
    {
        return 1 + part(m, m-1);
    }

    else if(m > n && n > 1)
    {
        return part(m, n-1) + part(m-n, n);
    }


}

int main()
{
    int n = 5;
    int partitions = part(n, n);

    cout << "n: " << n << endl;
    cout << "Number of partitions: " << partitions << endl;

    return 0;
}
