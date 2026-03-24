#include <iostream>
#include <vector>
using namespace std;


//to calculate the x^n value:
double myPow(double x, int n)
{
    long binForm = n;
    if (n < 0)                      //if the power is negative
    {
        x = 1 / x;                   //reverse the x
        binForm = -binForm;          //make the negative power positive
    }

    double ans = 1;

    while (binForm > 0)
    {
        if (binForm % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }

    return ans;
}

int main()
{
    cout << "x^n= " << myPow(3, 5);
}