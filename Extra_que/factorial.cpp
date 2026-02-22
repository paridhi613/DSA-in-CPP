#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int fact=1;
    for (int i = 1; i <= n; i++)
    {
        fact=fact*i;   //saari values multiply hongi 1*2*3*4...
    }
    cout << "the factorial of " << n << " is:" << fact;
}