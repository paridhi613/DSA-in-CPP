#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> vec = {'a', 'b', 'c', 'd'};

    for (char val : vec)  //for each loop
    {
        cout << val << " ";
    }
}

//the datatype of vector and for each loop should be same