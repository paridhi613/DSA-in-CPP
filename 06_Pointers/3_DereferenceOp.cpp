#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    //&a means address of a

    int *ptr = &a;                    // pointer that stores the address of a

    int **parPtr = &ptr;              // poingter that stores the address of ptr pointer

    cout << *(&a) << endl;            // shows the value at the address defined  //10
    cout << *(ptr) << endl;           // 10
    cout << *(parPtr) << endl;         //address of ptr
}