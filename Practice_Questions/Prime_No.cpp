#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value: ";
    cin >> n;
    int i;
    for (int i = 2; i < n; i++)
    { // i=2,3,4,.....n-1 // if remainder become zero n is not prime
        if (n % i == 0)
        {
            cout << " not a prime";
            break;
        }
    }
    if (n == i)
    {
        cout << "prime";
    }
}