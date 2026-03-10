#include <iostream>
using namespace std;


//function for factorial of n terms
int Nfactorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)   //values from 1 to n
    {
        fact *= i;
    }

    return fact;
}


//calling the function
int main()
{
    cout << "the factorial is: " << Nfactorial(5);
}