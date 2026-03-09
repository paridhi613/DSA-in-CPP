#include <iostream>
using namespace std;

/*
        OUTPUT:
                   1
                  121
                 12321
                1234321
                
                for n=4;

*/

int main()
{
    int n;
    cout << "enter the value: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i - 1; j++)     //for printing spaces first
        {
            cout << " ";
        }

        for (int j = 1; j <= i + 1; j++)      //then printing the numbers from right
        {
            cout << j;
        }

        for (int j = i; j >= 1; j--)         //printing numbers in reverse order
        {
            cout << j;
        }

        cout << endl;
    }
}