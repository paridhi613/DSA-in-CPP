#include <iostream>
#include <vector>
using namespace std;

//Moore's Algorithm to find the majority element
int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2, 1, 1};
    int n = nums.size();
    int freq = 0, ans = 0;                               //intially freq=0 so is ans=0

    for (int i = 0; i < n; i++)
    {
        if (freq == 0)                                   //if freq=0 //ans will store the 1st ele of array
        {
            ans = nums[i];                               
        }
        if (ans == nums[i])                              //if ans=ele //move frwd
        {
            freq++;
        }
        else                                             //if the next ele is not same as previ //move back
        {
            freq--;
        }
    }
    cout << ans;                                         //finally print the majority ele
}