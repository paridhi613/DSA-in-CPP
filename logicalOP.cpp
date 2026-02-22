#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0 && n % 3 == 0)
    {
        cout << n << " is divisible by both 2 n 3";
    }
    else if (n % 2 == 0)
    {
        cout << n << " is divisble by 2";
    }
    else if (n % 3 == 0)
    {
        cout << n << " is divisble by 3";
    }
    else
    {
        cout << "it is neither divsible by 2 nor 3";
    }
}