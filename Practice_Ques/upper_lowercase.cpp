#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "enter the character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << " this is lowercase";
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "this is Uppercase";
    }
    else
    {
        cout << "this is not a alphabet";
    }
}