#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)    //if i=0; j=0+1;
        {
            char ch = 'A';
            for (int j = 0; j < i; j++)    //for printing the triangle pattern
            {
                ch++;                         //har step m ek ch add hoga 
            }
            cout << ch << " ";
        }
        cout << endl;
    }
}