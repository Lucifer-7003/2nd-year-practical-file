// Q11. WAP to find the alphabet is Vowel or consonant by switch case without using class in C++.

#include <iostream>
using namespace std;

bool ifVowel(char character)
{
    bool result = false;
    switch (character)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        result = true;
    default:
        break;
    }
    return result;
}

int main()
{
    char input;
    cout << "Enter a character : ";
    cin >> input;
    if (ifVowel(input))
        cout << input << " is a Vowel" << endl;

    else
        cout << input << " is a Consonant" << endl;

    return 0;
}