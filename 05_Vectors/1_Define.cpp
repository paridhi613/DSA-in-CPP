#include <iostream>
#include <vector> //header file to use the vectors in our file
using namespace std;

int main()
{
    //type 1
    vector<int> vec = {1, 2, 3};
    cout << vec[2] << endl;


    //type 2
    vector<int> vec2(3, 7);   //defines the size and value of vector

    for (int val : vec2)
    {
        cout << val << " ";   //prints all the values of vector
    }
}