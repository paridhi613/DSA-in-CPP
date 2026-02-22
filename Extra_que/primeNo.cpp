#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i;
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)              //divide with 2,3,4....n-1  if remainder is zero not prime
        {
            cout << "it is not prime";
            break;
        }
    }

    if (i == n)
    {
        cout << "it is prime";
    }
}