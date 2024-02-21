#include <iostream>
using namespace std;
int main ()
{
    int rows, coloumns ,i ,j;
    cout <<"ENter the number of rows";
    cin >>rows;
    cout <<"ENter the number of coloumns";
    cin>>coloumns;
    int count = (coloumns -1)/2;
    int rows1 = (rows-1)/2;
    for (i =-rows1 ;i <rows1+1;i++)
    {
        if ( i <= 0)
        {
            for (j =-count ;j < count+1 ;j ++)
            {
                if (j >= i && j <= -i)
                {
                    cout <<"*"<<" ";
                }
                else{
                    cout <<" "<<" ";
                }
            }
            cout <<endl;
        }
        if (i >0 )
        {
            for (j = -count ;j < count +1 ;j++)
            {
                if (j >= -i && j<= i)
                {
                    cout <<"*"<<" ";
                }
                else{
                    cout <<" "<<" ";
                }
            }
            cout <<endl;
        }
        

    }
}