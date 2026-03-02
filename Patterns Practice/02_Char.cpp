#include <iostream>
using namespace std;

int main()
{
    // char ch;
    // cout << "enter the value: ";
    // cin >> ch;

    // for (char i = 'A'; i <= ch; i++)
    // {
    //     for (char j = 'A'; j <= ch; j++)      //BASIC LOGIC
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }







    // extra af logic
    int n;
    cout << "enter the value: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        char ch = 'A';        /// starting value is fixed'A' for every inner loop
        for (int j = 0; j < n; j++)        
        {
            cout << ch << " ";     
            ch++;             //1 value get added every time loop runs
        }

        cout << endl;
    }
}