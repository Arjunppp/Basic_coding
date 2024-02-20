#include <iostream>
using namespace std;
int main()
{
    int n,i ,a =0;
    cout <<"Enter the limit" <<endl;
    cin>>n;
    for (i =0;i<=n ;i++)
    {
        if (i%2 != 0)
        {
            a += i;
        }
        else{
            continue;
        }
    }

    cout <<"The sum of odd natural numbers is : "<< a <<endl;
}