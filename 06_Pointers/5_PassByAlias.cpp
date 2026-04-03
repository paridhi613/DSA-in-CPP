#include <iostream>
using namespace std;

void changeA(int &b)    //pass by reference using alias   // b is the alias here
{
    b = 20;           //it will change the value in the main fxn 
}

int main()
{
    int a = 10;
    changeA(a);

    cout << a;         //20 will be the result
}
