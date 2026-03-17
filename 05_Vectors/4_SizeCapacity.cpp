#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(20);
    vec.push_back(21);
    vec.push_back(22);

    cout <<"size= "<< vec.size() << endl;            //size will be 3
    cout <<"capacity= "<< vec.capacity() << endl;    //capacity will be 4
}

//double sized array is formed everytime if there is no space left for pushing new element.