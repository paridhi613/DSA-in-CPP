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
            int distance = abs(i - center) + abs(j - center);

            if (distance < n - 1)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }

    return 0;
}