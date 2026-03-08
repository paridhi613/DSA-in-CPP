#include <iostream>
using namespace std;

/*
        OUTPUT:
        A
        B C
        D E F
        G H I J

        for n=4
*/

int main()
{
    int n;
    cout << "enter the value: ";
    cin >> n;

    char ch = 'A';       //for printing charcters //outside loop coz dont wanna reset it everytime

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
            ch++;                 //char inc by 1 evrytime
        }
        cout << endl;
    }
}