#include <iostream>
using namespace std;

//function to calculate factorial
int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}


//function to find the binomial coefficient
int nCr(int n, int r)
{
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n - r);

    return fact_n / (fact_r * fact_nmr);  //this function calls the factorial function
}


//calling the function
int main()
{
    cout << nCr(8, 2);
}