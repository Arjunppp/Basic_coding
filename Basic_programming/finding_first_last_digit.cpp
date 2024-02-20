#include <iostream>
using namespace std;
int main()
{
    int n ,a ,first , last ,count =0;
    cout <<"Eneter the number";
    cin>>n;
    int initial_num = n;
    while( n >0)
    {
        count +=1;
        a = n%10;
        n =n/10;
        if(count ==1)
        {
            last =a;
        }

    }
    first = a;

    cout << "The first number of "<<initial_num<< " is "<< first <<'\n' <<"The last number of "<<initial_num<<" is " << last;
9
}