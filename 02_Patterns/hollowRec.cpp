#include <iostream>
using namespace std;

int main()
{
    int n, r;
    cout << "enter the row and col: ";
    cin >> n >> r;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= r; j++)
        {
            if (i == 1 || i == n || j == 1 || j == r)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }
}