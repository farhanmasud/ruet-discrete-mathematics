#include <iostream>
using namespace std;


void to_cantor(int x)
{
    int n = 1;
    int y = x;
    int an;

    cout << x << " = ";

    while(y != 0)
    {
        if(n != 1)
        {
            cout << " + ";
        }

        an = y % (n+1);
        y = (y - an) / (n+1);

        cout << an << "*" << n << "!";
        n++;
    }

    return;
}

int main()
{

    to_cantor(56);


    return 0;
}
