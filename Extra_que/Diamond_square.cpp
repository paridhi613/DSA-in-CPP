#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value: ";
    cin >> n;

    int size = 2 * n - 1;
    int center = n - 1;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            // Square boundary condition
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1)
            {
                cout << "*";
            }
            // Diamond boundary condition
            else if (abs(i - center) + abs(j - center) == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}