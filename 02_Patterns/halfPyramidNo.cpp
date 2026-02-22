#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter value: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";    //printing hte row numbers  //j can be used to print col numbers
        }
        cout << endl;
    }
}