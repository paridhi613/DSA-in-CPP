#include <iostream>
using namespace std;

//function for sum of 1 to N
int sumN(int n)
{
    int sum = 0;

    for (int i = 1; i <= n; i++)  //1 to n numbers
    {
        sum += i;
    }

    return sum;
}


//function calling
int main()
{
    cout << sumN(5);
}