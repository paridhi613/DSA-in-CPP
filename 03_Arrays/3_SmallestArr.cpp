#include <iostream>
using namespace std;

int main()
{
    int nums[] = {3, 45, 67, -12, 56, -2};
    int size = 6;

    int smallest = INT16_MAX;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];       // smallest =  min(nums[i],smallest);  //shortcut to find min
        }
    }

    cout << "smallest = " << smallest << endl;
}