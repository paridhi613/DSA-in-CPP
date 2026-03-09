#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value: ";
    cin >> n;

    // upper part
    for (int i = 0; i < n; i++)
    {
        // first star
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        if (i != n - 1)
        {
            // middle spaces
            for (int j = 0; j < 2 * (n - (i + 1)); j++)
            {
                cout << " ";
            }
        }

        // second star
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // lower part
    for (int i = 0; i < n; i++)
    {
        // first star
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        if (i != 0)
        {
            // middle spaces
            for (int j = 0; j < 2 * i; j++)
            {
                cout << " ";
            }
        }

        // second star
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}