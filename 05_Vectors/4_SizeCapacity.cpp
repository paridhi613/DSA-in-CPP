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


    vec.push_back(23);
    vec.push_back(24);

    cout<<endl;

    cout << "size= " << vec.size() << endl;           // size will be 5
    cout << "capacity= " << vec.capacity() << endl;   //capacity will be 8
}

//double sized array is formed everytime if there is no space left for pushing new element.