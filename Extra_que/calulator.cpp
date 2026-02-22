#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    char op;
    cout << "Enter the operator: ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a + b;
        break;

    case '-':
        cout << a - b;
        break;

    case '*':
        cout << a * b;
        break;

    case '/':
        cout << a / b;
        break;

    case '%':
        cout << a % b;
        break;

    default:
        cout << "Invalid syntax..";
        break;
    }
}