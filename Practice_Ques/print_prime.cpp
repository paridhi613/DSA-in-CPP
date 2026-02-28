#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value: ";
    cin >> n;

    for (int num = 2; num <= n; num++) // numbers from 2 to n
    {

        bool isPrime = true;

        for (int i = 2; i < num; i++)  //2 se n tak divide krenge
        {
            if (num % i == 0)   
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << num << " ";
        }
    }
}