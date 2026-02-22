#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    for (int num = a; num <= b; num++)      //number a se b tak.
    {
        int i;
        for (i = 2; i < num; i++)        //2 se b-1
        {
            if (num % i == 0)         //a se b tak sabko 2 se b-1 tak divide krenge
            {
                break;            //agr remiander zero to loop se bahr jaenge 
            }
        }
        if (i == num)
        {
            cout << num << " ";
        }
    }
}