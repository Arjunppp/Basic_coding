#include <iostream>
using namespace std;
int main()
{
    int rows, coloumns,i,j;
    cout <<"Enter the rows";
    cin >>rows;
    cout <<"Enter the coloumns";
    cin>>coloumns;
    int count = (coloumns -1)/2;
    int count1 =0;
    for (i =0 ;i< rows ;i++)
    {
   if (i < (rows-1)/2)
   {
    for (j = -count ;j < count+1; j++)
    {
        if (j ==i || j== -i)
        {
            cout <<"*"<<" ";
        }
        else
        {
            cout <<" "<<" ";
        }
    }
   }
   if (i >= (rows-1)/2)
   {
    for (j =-count;j<count+1;j++)
    {
        if ( j == -i+count1 || j == i-count1)
        {
            cout <<"*"<<" ";
        }
        else
        {
            cout <<" "<<" ";
        }
        
    
    }
    count1 = count1 +2;
    
   }
   cout <<endl;
    }
}