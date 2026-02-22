#include <iostream>
using namespace std;

int main()
{

    int savings;
    cout << "enter your savings: ";
    cin >> savings;

    if (savings > 5000)
    {
        if (savings > 10000)
        {
            cout << "go shopping with Neha";
        }
        else
        {
            cout << "go salon with Neha";
        }
    }
    else if (savings > 2000)
    {
        cout << "go with Pooja";
    }
    else
    {
        cout << "go with freinds";
    }
}