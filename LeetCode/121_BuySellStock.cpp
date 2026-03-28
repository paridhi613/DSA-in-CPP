#include <iostream>
#include <vector>
using namespace std;


//to find the maxprofit earned after selling the stock 
int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int n = prices.size();
    int maxProfit = 0, bestBuy = prices[0];                    //1st element will the bestbuy at the start

    for (int i = 1; i < n; i++)                                //will check from the 1st index till the last
    {
        if (prices[i] > bestBuy)                   
        {
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(prices[i], bestBuy);
    }

    cout << maxProfit;                                     //the ans that is the max profit will be printed
}