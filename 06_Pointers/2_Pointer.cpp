#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;        //pointer 1

    int **ptr2 = &ptr;   //pointer 2 that stores the address of 1

    cout << ptr2 << endl;
    cout << &ptr;
}