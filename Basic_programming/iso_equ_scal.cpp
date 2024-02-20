#include <iostream>
using namespace std;
int main ()
{
    float side1 ,side2 ,side3;
    cout <<"Eneter the sides of the traingle";
    cin >>side1 >>side2 >>side3;
    if (side1 == side2 && side2 == side3)
    {
        cout <<"The Traingle is equilateral";
    }
    else if (side1 == side2 || side2 ==side3 || side1 ==side3)
    {
     cout <<"The Traingle is isoceles";
    }
    else{
        cout <<"the Traingle is scalane";
    }
    }
