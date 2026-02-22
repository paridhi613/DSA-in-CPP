#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter value: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        // value start from i; goes in reverse order;
        for (int k = i; k >= 1; k--)
        {
            cout << k << " ";
        }
        for (int j = 2; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}