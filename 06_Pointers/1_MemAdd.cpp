#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    cout << &a; //& shows the memory address

    cout << endl;

    int *ptr = &a; // pointer defined which stores the address of a
    cout << ptr;

    cout << endl;

    cout << &ptr;  //address of pointer is different from a
}