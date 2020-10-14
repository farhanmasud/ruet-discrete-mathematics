#include <iostream>
#include <string>
using namespace std;

string encrypt_caesar(string message, int key)
{
    string encrypted = "";
    for(int i = 0 ; i < message.length(); i++)
    {
        int int_val = message[i];
        char char_val;

        if(int_val >= 65 && int_val <= 90)
        {
            int_val = (int_val - 65 + key) % 26;
            char_val = int_val + 65;
        }
        else if(int_val >= 97 && int_val <= 122)
        {
            int_val = (int_val - 97 + key) % 26;
            char_val = int_val + 97;
        }

        encrypted.push_back(char_val);
    }

    return encrypted;
}

string decrypt_caesar(string message, int key)
{
    string decrypted = "";
    for(int i = 0 ; i < message.length(); i++)
    {
        int int_val = message[i];
        char char_val;

        if(int_val >= 65 && int_val <= 90)
        {
            int_val = (int_val - 65 - key) % 26;
            char_val = int_val + 65;
        }
        else if(int_val >= 97 && int_val <= 122)
        {
            int_val = (int_val - 97 - key) % 26;
            char_val = int_val + 97;
        }

        decrypted.push_back(char_val);
    }

    return decrypted;
}

int main()
{
    string message = "Hello";
    int key = 1;

    string encrypted = encrypt_caesar(message, key);
    string decrypted = decrypt_caesar(encrypted, key);

    cout << "Original message: " << message << endl;
    cout << "Encrypted message: "  << encrypted << endl;
    cout << "Decrypted message: "  << decrypted << endl;

    return 0;
}
