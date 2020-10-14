#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str = "Hello!";
    int str_len = str.length();

    string str_reverse = "";

    for(int i = str_len-1; i >= 0; i--)
    {
        str_reverse.push_back(str[i]);
    }

    cout << "Original string: " << str << endl;
    cout << "Reverse string: " << str_reverse << endl;

    return 0;
}
