#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4};

    cout << *arr;                       // will return the value at 0 index 1  here




    // comparing the pointers
    int *ptr1;
    int *ptr2 = ptr1;

    cout << ptr2 << endl;
    cout << ptr1 << endl;

    cout << (ptr2 == ptr1) << endl;
}