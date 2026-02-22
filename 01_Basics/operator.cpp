#include <iostream>
using namespace std;

int main()
{
    // int a = 10;
    // int b;

    // b = ++a;                    //first increment the value then print
    // cout << a << " " << b << endl;

    // b = a++;         //first take the original value and then increment it.
    // cout << "a is: " << a << " " << "b is: " << b;

    // int i = 1;
    // i = i++ + ++i;        //i++=2    ++i=2      adding them 4
    // cout << i;

    // int i = 1;
    // int j = 2;
    // int k;

    // //  1 + 2 + 2 +   3 +   2   +  3
    // k = i + j + i++ + j++ + ++i + ++j;
    // cout << i << " " << j << " " << endl;
    // cout << k;

    // int i = 0;
    // //     0  -  -1  + 1  -  0
    // i = i++ - --i + ++i - i--;
    // cout << i << " ";

    // int i = 1, j = 2, k = 3;
    // int m = i-- - j-- - k--;
    // //      1 - 2 - 3 = -4

    // cout << i << endl;
    // cout << j << endl;
    // cout << k << endl;
    // cout << m << endl;

    int i = 10, j = 20, k;

    k = i-- - i++ + --j + --i - j-- + ++i - j++;
    //   10  -  11  +  19  + 10  - 18 + 11 - 19 = 2

    cout << i << endl;
    cout << j << endl;
    cout << k << endl;
}