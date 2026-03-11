#include <iostream>
using namespace std;

int sum(int a, int b)
{
    a = a + 10;  //15
    b = b + 10;   //14
    return a + b;
}

int main()
{
    int a = 5, b = 4;
    cout << sum(a, b);  //29

    cout<<endl;

    cout<<a<<endl;  //5
    cout<<b<<endl;  //4
    
}