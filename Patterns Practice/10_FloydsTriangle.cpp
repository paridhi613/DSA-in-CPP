#include <iostream>
using namespace std;

/*
      OUTPUT:
      1
      2 3
      4 5 6
      7 8 9 10

      for n=4
*/

int main()
{
    int n;
    cout << "enter the value: ";
    cin >> n;

    int num = 1;   //we will print this num  //outside the outer loop becoz we dont wanna reset it evrytime

    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < i + 1; j++)
        {
            cout << num << " ";
            num++;      //its value will increase every time
        }

        cout << endl;
    }
}