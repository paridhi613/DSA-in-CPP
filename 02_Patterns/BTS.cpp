#include <iostream>
using namespace std;

int main()
{
    int n, r;
    cout << "enter value: ";
    cin >> n >> r;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        int spaces = 2 * n - 2 * i;
        for (int j = 1; j <= spaces; j++) // upper traingle n=3
        {
            cout << "   ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }



    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= r; j++)    //rectangle in the middle 
        {
            cout << " * ";
        }
        cout << endl;
    }



    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        int spaces = 2 * n - 2 * i;
        for (int j = 1; j <= spaces; j++) // lower reverse triangle n=3
        {
            cout << "   ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}