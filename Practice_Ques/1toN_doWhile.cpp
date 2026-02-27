#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value: ";
    cin >> n;

    int i = 1;
    do
    {
        cout << i << " ";
        i++;
    } while (i <= n);
}