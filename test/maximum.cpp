#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout <<"Enter the three numbers";
    cin>>a>>b>>c;
    if (a>b && a>c)
    {
        cout <<"a is the Greatest number";
    }
    else if( b>a && b>c)
    {
        cout <<"B is the greatest number";
    }
    else{
        cout <<"c is the greatest";
    }
}