#include <iostream>
using namespace std;

int main()
{
    int side1, side2, side3;
    cout << "Enter the 3 sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    if (side1 == side2)
    {
        if (side2 == side3)
        {
            cout << "It is a equilateral traiangle.";
        }
        else
        {
            cout << "Its an isoceleos traingle.";
        }
    }
    else
    {
        if (side1 == side2 || side2 == side3 || side3 == side1)
        {
            cout << "Its an isoceleos traingle.";
        }
        else
        {
            cout << "it is a scalen traingle.";
        }
    }
}

/*if(side1==side2 && side2==side3){
  cout<<"equilateral";
 } else if (side1==side2 || side2==side3 ||side3==side1){
cout<<"isoceleous"
 }
else{
cout<<"scalen"
}*/