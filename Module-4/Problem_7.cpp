#include <iostream>
#include <string>
#include <cmath>
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

int main()
{
    int n = 11;
    int a = 3;
    int an = 1;
    int power;

    string bin = dec_to_bin(n);

    for(int i = 0; i < bin.length(); i++)
    {
        if(bin[i] == '1')
        {
            power = pow(2, bin.length() - 1- i);
            an = an*pow(a, power);
        }
    }

    cout << a << "^" << n << " = " << an;

    return 0;
}
