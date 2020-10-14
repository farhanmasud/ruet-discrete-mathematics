#include <iostream>
#include <string>
using namespace std;

string dec_to_bin(int dec, string bin = "")
{
    if(dec == 0)
    {
        if(bin == "")
        {
            string temp = "0";
            temp.append(bin);
            bin = temp;
            return bin;
        }

        else
        {
            return bin;
        }
    }

    else
    {
        if(dec % 2 == 0)
        {
            string temp = "0";
            temp.append(bin);
            bin = temp;
        }

        else
        {
            string temp = "1";
            temp.append(bin);
            bin = temp;
        }

        return dec_to_bin(dec / 2, bin);
    }
}

int modular_exponentiation(int b, int n, int m)
{
    string str_n = dec_to_bin(n);

    int x = 1;
    int power = b % m;
    for(int i = 0; i < str_n.length(); i++)
    {
        int ai = int(str_n[i] - 48);
        if(ai == 1)
        {
            x = (x*power) % m;
            power = (power*power) % m;
        }
    }

    return x;
}

int main()
{

    int n = 11;
    int b = 3;
    int m = 2;
    int x = modular_exponentiation(b, n, m);

    cout << "For b = " << b << ", n = " << n << ", m = " << m << endl;
    cout << "b^n mod m = " << x << endl;

    return 0;
}
