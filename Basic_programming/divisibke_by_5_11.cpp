#include <iostream>
using namespace std;
int main()
{
    int num;
    cout <<"Enter the number";
    cin >>num;
    if (num%5 ==0 && num%11 ==0)
    {
        cout <<"The number is divisible by both 5 and 11";
    }
    else{
        cout<<"The number is either divisible by 5 or 11 , or not divisible by 5 and 11";
    }
}