#include <iostream>
using namespace std;
int main()
{
    int rows, row2,count = -1,i,j;
    cout<<"ENter the rows";
    cin>>rows;
    row2= (rows -1)/2;
    for(i =-row2 ;i<row2+1;i++)
    {
       if (i<=0)
       { count++;
        for(j =-row2;j<row2+1;j++)
        {
            if(j ==-count || j==count)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        
        cout<<endl;
       }
       if (i>0)
       { count--;
        for(j =-row2;j<row2+1;j++)
        {
            if(j ==-count || j==count)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        
        cout<<endl;
       }

    }
}