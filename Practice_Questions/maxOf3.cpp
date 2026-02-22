#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter a: ";
    cin >> a;

    cout << "enter b: ";
    cin >> b;

    cout << "enter c: ";
    cin >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout<<"The max number is: " << a;
        }
        else
        {
            cout << "The max number is: " << c;
        }
    }
    else
        {
            if (b > c)
            {
                cout << "The max number is: " << b;
            }
            else
            {
                cout << "The max number is: " << c;
            }
        }
}
