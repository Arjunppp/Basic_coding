#include <iostream>
using namespace std;
int main()
{
    int n, i,a=0;
    cout <<"Enter the limit";
    cin>>n;
    for (i =1;i <=n;i++)
    {
        if (i%2 == 0)
        {
            a += i;

        }
    }
    cout <<"The sum of even numbers is "<<a;
}