#include <iostream>
#include <vector>
using namespace std;

int mountainPeak(vector<int> a, int peak)
{
    int n = a.size();
    int st = 1, end = n - 2;      //the fist and last index cant be peak so st with 1 and end n-2

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (a[mid - 1] < a[mid] && a[mid] > a[mid + 1])   //mid == peak
        {
            return mid;
        }
        else if (a[mid - 1] < a[mid])    //mid lies in left, search right 
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;         //mid lies in right, search left
        }
    }
}

int main()
{
    vector<int> arr = {0, 3, 8, 9, 5, 2};
    int peak = 9;

    cout << mountainPeak(arr, peak);
}