#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> nums = {1, 2, 3, 4, 5};

    int currSum = 0, maxSum = INT16_MIN;

    for (int a : nums)
    {
        currSum += a;
        maxSum = max(currSum, maxSum);

        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << maxSum;
}
