#include <iostream>
using namespace std;

int main()
{

    // for (int i = 0; i < 30; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         continue; // skip the satisfied condn and move on next step.
    //     }
    //     cout << i << " ";
    // }

    for (int i = 1; i <= 20; i++)
    {
        if (i == 11)
        {
            break;        //breaks the loop and dont execute ahead.
        }
        cout << i << " ";
    }
}