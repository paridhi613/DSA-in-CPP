#include <iostream>
using namespace std;

int nCr(int n, int r)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    int fact2 = 1;
    for (int i = 1; i <= r; i++)
    {
        fact2 *= i;
    }

    int fact3 = 1;
    for (int i = 1; i <= (n - r); i++)
    {
        fact3 *= i;
    }

    return fact / (fact2 * fact3);
}

int main()
{
    cout << nCr(6, 3) << endl;
    cout << nCr(8, 2);
}