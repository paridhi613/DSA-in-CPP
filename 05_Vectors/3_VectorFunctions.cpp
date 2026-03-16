#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // size function
    vector<char> vec = {'a', 'b', 'c', 'd'};
    cout << "size = " << vec.size() << endl;
    

    // push_back function
    vector<int> vec2;
    vec2.push_back(22);
    cout << vec2[0] << endl;
}
