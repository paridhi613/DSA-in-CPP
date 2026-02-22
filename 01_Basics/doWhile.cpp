#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    do
    {
        cout << n;
        cin >> n;
    } while (n > 0); //ek bar execution hoga hi anyhow.
}