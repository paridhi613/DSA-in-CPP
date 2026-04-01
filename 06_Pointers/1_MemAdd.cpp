#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    cout << &a; //& shows the memory address

    
    cout << endl;


    int *ptr = &a;
    cout << ptr;
}