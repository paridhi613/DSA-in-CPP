#include <iostream>
using namespace std;

int main()
{
    char button;
    cout << "Enter the character: ";
    cin >> button;

    switch (button)
    {
    case 'a':
        cout << "Hello";
        break;     //break hota h loop se bahar aane k liye wrna aage ki saari values print hoti jaengi

    case 'b':
        cout << "Ni Hao";
        break;

    case 'c':
        cout << "Anyeong";
        break;

    case 'd':
        cout << "Aarigato";
        break;

    case 'e':
        cout << "Wanna khaab";
        break;

    default:
        cout << "I m exploring more...";
        break;
    }
}