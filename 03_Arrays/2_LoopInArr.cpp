#include <iostream>
using namespace std;

int main()
{
    //     int marks[] = {12, 13, 14, 15, 16};
    //     int size = 5;

    //     for (int i = 0; i < size; i++)   //i ranges from 0 to size-1;
    //     {
    //         cout << marks[i] << endl;   //prints all the values from index 0 to 4 in new line
    //     }



    // taking input and output manually
    int size = 5;
    int marks[size];

    for (int i = 0; i < size; i++)
    {
        cin >> marks[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << marks[i] << endl;
    }
}