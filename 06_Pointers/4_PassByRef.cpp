#include <iostream>
using namespace std;

void changeA(int *ptr)   //pass by reference using pointer
{
    *ptr = 20;      //main function m jake a ki value 10 se 20 ho jaegi
}

int main()
{
    int a = 10;
    changeA(&a);        //changeA fxn mai a ka address stored hai 

    cout << "inside main fxn: " << a << endl;    //a ki value 10 se 20 ho jaegi 
}