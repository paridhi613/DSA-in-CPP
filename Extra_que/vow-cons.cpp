#include <iostream>
using namespace std;

int main()
{
    char a;
    cout << "enter the alphabet: ";
    cin >> a;

    switch (a)
    {
    case 'a':
        cout << "vowel";
        break;

    case 'e':
        cout << "vowel";
        break;

    case 'i':
        cout << "vowel";
        break;

    case 'o':
        cout << "vowel";
        break;

    case 'u':
        cout << "vowel";
        break;

    default:
        cout << "consonent";
        break;
    }
}