#include <iostream>
using namespace std;

//function that checks wether the number is prime or not
int Prime(int n)
{
    bool isPrime = true;

    if (n <= 1) //for negative numbers
        isPrime = false;

    for (int i = 2; i < n; i++)  //2 se n-1 ta check krenge
    {
        if (n % i == 0)
            isPrime = false;
    }
    return isPrime;
}


//main function which prints the prime numbers
int main()
{

    int n;
    cout << "enter the value: ";
    cin >> n;

    for (int num = 2; num <= n; num++)   //2 se n tak saare numbers ko check krenge
    {
        if (Prime(num))   //prime wale function se check krenge ki prime h ya nhi
        {
            cout << num << " ";   //prime wali values print hi jaengi
        }
    }
}
