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
    cout<<endl;



    //pop_back function
    vector<int>vec3;
    vec3.push_back(56);
    vec3.push_back(57);
    vec3.push_back(58);
    cout<<"push: "<<endl;

    for(int a:vec3){
        cout<<a<<" ";
    }
    cout<<endl;

    cout<<"pop: "<<endl;
    vec3.pop_back();

    for (int a : vec3)
    {
        cout << a << " ";
    }
    cout<<endl;
    cout << endl;



    //front function
    cout<<"front= "<<vec2.front()<<endl;
    cout<<endl;


    //back function
    cout<<"back= "<<vec2.back()<<endl;
    cout<<endl;


    //at function
    cout<<"value at index 1= "<<vec2.at(1);
}
