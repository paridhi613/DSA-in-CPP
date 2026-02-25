#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value: ";
    cin >> n;

    int start = 0;

    for (int i = 1; i <= n; i++)
    {
        start = start + i;
    }
    
    cout << start;
}