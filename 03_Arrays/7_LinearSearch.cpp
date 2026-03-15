#include <iostream>
using namespace std;

//function to find the target in a array
int linerSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)  // target is found 
        {
            return i;    //returns the index
        }
    }
    return -1;   //if not found returns -1
}

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;
    int target = 8;

    cout << linerSearch(arr, size, target);
}