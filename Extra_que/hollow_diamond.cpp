#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value: ";
    cin >> n;

    // Upper half
    for (int i = 1; i <= n; i++)
    {
        // leading spaces
        for (int s = 1; s <= n - i; s++)
            cout << " ";

        // first star
        cout << "*";

        // hollow spaces inside
        if (i > 1)
        {
            for (int s = 1; s <= 2 * i - 3; s++)
                cout << " ";
            cout << "*"; // second star
        }

        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--)
    {
        // leading spaces
        for (int s = 1; s <= n - i; s++)
            cout << " ";

        // first star
        cout << "*";

        // hollow spaces inside
        if (i > 1)
        {
            for (int s = 1; s <= 2 * i - 3; s++)
                cout << " ";
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}