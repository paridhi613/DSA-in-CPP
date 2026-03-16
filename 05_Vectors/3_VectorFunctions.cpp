#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // size function
    vector<char> vec = {'a', 'b', 'c', 'd'};
    cout << "size = " << vec.size() << endl;
    cout << endl;

    // push_back function
    vector<int> vec2;
    cout << "size= " << vec2.size() << endl;
    vec2.push_back(22);
    vec2.push_back(23);
    vec2.push_back(24);

    for (int a : vec2)
    {
        cout << a << " ";
    }
    cout << endl;
    cout << "size after pushing= " << vec2.size() << endl;
}
