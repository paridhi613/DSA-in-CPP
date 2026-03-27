#include <iostream>
#include <vector>
using namespace std;


//brute force approach
int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = height.size();
    int maxWater = 0;

    for (int i = 0; i < n; i++)                       //left boundary
    {
        for (int j = i + 1; j < n; j++)               //right boundary
        {
            int w = j - i;                            //to find the base
            int ht = min(height[i], height[j]);       //the height will the min of left and right 

            int currWater = w * ht;                        //water available will be
            maxWater = max(maxWater, currWater);           //the max of all the areas will be calculated
        }
    }

    cout << maxWater;                                  //ans will be returned
}