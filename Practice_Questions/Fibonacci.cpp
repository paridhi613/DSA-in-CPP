#include <iostream>
using namespace std;

/*
      OUTPUT:
      for n=10

      0 1 1 2 3 5 8 13 21 34
*/

int main()
{

    int n;
    cout << "enter the value : ";
    cin >> n;

    int a = 0, b = 1, next;         //first values is 0 ,second is 1 ,and the next value will be the sum to a and b.

    for (int i = 0; i < n; i++)
    {
        cout << a << " ";            //start from 0
        next = a + b;                //next term will be 0+1
        a = b;                       //now a=1
        b = next;                    //and b=0+1 i.e 1.
                                     // it will move like this till the n 
    }
}