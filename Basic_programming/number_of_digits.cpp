#include <iostream>
using namespace std;
int main()
{
    int n, count =0;
    cout <<"Eneter the number";
    cin>>n;
    if (n == 0)
    {
        cout <<"The number is zero and it has one digit";
    }
    else if(n >0)
    {
        
        while(n > 0)
        {  
            count +=1;
            n = n/10;

        }

        cout << "The Number has "<<count <<" digits" <<endl;


    }
}