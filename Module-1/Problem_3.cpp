#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main()
{
    int n, a, b, and_bit, or_bit, xor_bit;

    string str_1, str_2, str_and, str_or, str_xor;


    cout << "Enter the length of the string: \n";
    cin >> n;

    cout << "Enter string 1 of length " << n << ":\n";
    cin >> str_1;

    while(n != str_1.length())
    {
        cout << "The length of the string doesn't match with the value of n\n";
        cout << "Please enter string 1 of length " << n << ":\n";
        cin >> str_1;
    }


    cout << "Enter string 2 of length " << n << ":\n";
    cin >> str_2;

    while(n != str_2.length())
    {
        cout << "The length of the string doesn't match with the value of n\n";
        cout << "Please enter string 1 of length " << n << ":\n";
        cin >> str_2;
    }

    cout << "\n\n";


    for(int i = 0; i < n; i++)
    {
        if(str_1[i] == '0')
        {
            a = 0;
        }

        else if(str_1[i] == '1')
        {
            a = 1;
        }

        if (str_2[i] == '0')
        {
            b = 0;
        }

        else if(str_2[i] == '1')
        {
            b = 1;
        }

        and_bit = a && b;
        or_bit = a || b;
        xor_bit = or_bit && (!and_bit);

        if(and_bit == 0)
        {
            str_and.push_back('0');
        }
        else if(and_bit == 1)
        {
            str_and.push_back('1');
        }


        if(or_bit == 0)
        {
            str_or.push_back('0');
        }
        else if(or_bit == 1)
        {
            str_or.push_back('1');
        }


        if(xor_bit == 0)
        {
            str_xor.push_back('0');
        }

        else if(xor_bit == 1)
        {
            str_xor.push_back('1');
        }
    }

    cout << "String 1:\t" << str_1 << "\n";
    cout << "String 2:\t" << str_2<< "\n";
    cout << "Bitwise AND:\t" << str_and << "\n";
    cout << "Bitwise OR:\t"<< str_or << "\n";
    cout << "Bitwise XOR:\t"<< str_xor << "\n";

    return 0;
}
