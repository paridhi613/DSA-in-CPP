#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value: ";
    cin >> n;

    bool isPrime = true;

    for (int i = 2; i < n; i++) // we will leave 1 and n  //kyuki ussse to divisible to hoga hi
    {
        if (n % i == 0) // non-prime
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true)
    {
        cout << "prime no.";
    }
    else
    {
        cout << "not Prime";
    }
}