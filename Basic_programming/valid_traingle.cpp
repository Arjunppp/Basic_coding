#include <iostream>
using namespace std;
int main()
{
    float num1 ,num2 ,num3;
    cout <<"Eneter the Angles of an Traingle";
    cin >> num1 >>num2 >>num3;
    if (num1 + num2 +num3 == 180)
    {
        if(num1 <0 || num2 <0 || num3 <0)
        {
            cout <<"enter valing Angles";
        }
        else{
            cout <<"The Traingle is valid";
        }
    }
    else{
        cout <<"Invalid Trainanle";
    }
}

