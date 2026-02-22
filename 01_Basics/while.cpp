#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n > 0)
    {
        cout << n; //if +ve then prints the value
        cin >> n; //positive hone par next input lega
    }
}