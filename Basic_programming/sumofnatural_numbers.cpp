#include <iostream>
using namespace std;
int main()
{
    int i,n, a=0;
    cout <<"Enter the limit" <<endl;
    cin >>n;
    for (i =0 ;i <= n ;i++)
    {
        a +=i;
    }
    cout << a;
}