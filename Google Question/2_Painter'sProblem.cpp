#include<iostream>
#include<vector>
using namespace std;

int minTimeToPaint(vector<int> &arr, int n, int m){
    int sum =0, maxVal = INT16_MIN;
    for (int i = 0; i<n; i++){
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    int st = maxVal, end = sum, ans = -1;

    //binary search statrs here
    while(st<=end){
        int mid = st +(end - st)/2;

        if(isPossible(n , m , mid, arr))
        {
            ans= mid ;
            end = mid -1;
        }else{
            st = mid +1;
        }
    }

    return ans;
}

int main(){
    vector<int> arr= {40,30,10,20};
    int n = 4, m =2;

    cout<< minTimeToPaint(arr,n,m)<<endl;
}