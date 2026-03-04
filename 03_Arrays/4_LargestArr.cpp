#include <iostream>
using namespace std;

int main()
{
    int nums[] = {23, 67, 0, -3, 98, -78};
    int size = 6;

    int largest = INT16_MIN;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] > largest)
        {
            largest = nums[i];    //largest = max(nums[i], largest); //shortcut to find max of these two
        }
    }
    cout << "largest: " << largest << endl;
}