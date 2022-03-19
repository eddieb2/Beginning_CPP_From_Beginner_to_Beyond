#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>

using namespace std;

string encryptMessage(string newMessage) {
    string encryptedMessage{};
    string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
    string key{ "XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr" };

    // loop through the message
    // use find to search for that char in alphabet, add key[position] to encryptedMessage, check if npos and concat newMessage[i] into encryptedMessage

    for (char i : newMessage)
    {
        size_t index = alphabet.find(i); // find index of the current char in alphabet -- will be an index or npos;

        if (index != string::npos)
        {
            encryptedMessage += key[index]; // concat appropriate char in key to encryptedMessage
        }
        else
        {
            encryptedMessage += i; // whitespace -- npos is returned from find(), concat that whitespace to encryptedMessage
        }
    }

    return encryptedMessage;
}

string decryptMessage(string encryptedMessage) {
    string decryptedMessage{};
    string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
    string key{ "XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr" };

    for (char i : encryptedMessage)
    {
        size_t index = key.find(i);

        if (index != string::npos)
        {
            decryptedMessage += alphabet[index];
        }
        else
        {
            decryptedMessage += i;
        }
    }

    return decryptedMessage;
}

int main()
{
    string message;

    cout << "Enter your secret message: ";
    getline(cin, message);

    string encryptedMessage = encryptMessage(message);
    cout << "Encrypted Message: " << encryptedMessage << "\n\n";

    string decryptedMessage = decryptMessage(encryptedMessage);
    cout << "Decrypted Message: " << decryptedMessage << "\n\n";
    
    return 0;
}

