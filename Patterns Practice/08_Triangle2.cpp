#include <iostream>
using namespace std;

/*
      TO PRINT:

      1
      1 2
      1 2 3
      1 2 3 4

      for n=4
*/

int main()
{
    int n;
    cout << "enter value: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i+1; j++)
        {
            cout << j<<" ";
        }
        cout << endl;
    }
}