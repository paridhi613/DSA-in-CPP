#include <iostream>
using namespace std;

int main()
{
    char a;
    cout << "enter the letter: ";
    cin >> a;

    int lowercaseVowel, uppercaseVowel;

    lowercaseVowel = (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u');
    uppercaseVowel = (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U');

    if (lowercaseVowel || uppercaseVowel)
    {
        cout << a << " is a vowel ";
    }
    else
    {
        cout << a << " is a consonent ";
    }
}