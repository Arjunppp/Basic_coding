#include <iostream>
using namespace std;
int main()
{
    int num , first , last , count =0 , i, a;
    cout <<"Eneter the number" <<endl;
    cin >>num;
    i = num;
    while (num >0)
    {
        count ++;
        a =num %10;
        if (count == 1)
        {
            last = a;
        }
        num =num/10;

    }
    first = a;

cout <<"FOr the number "<<i<<" The sum of first and last figits are "<<first+last;
}