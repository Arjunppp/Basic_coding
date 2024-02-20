#include <iostream>
using namespace std;
int main()
{
    int x, i, n,a;
    cout << "Eneter the number to be multiplied "<< endl;
    cin >>x;
    cout <<"Eneter the limit " <<endl;
    cin >>n;
    for (i =1; i<=n;i++)
    {
        a = x * i;
        cout <<x<<" * "<<i<<" = "<<a << endl;
    }
}