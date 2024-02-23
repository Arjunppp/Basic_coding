#include <iostream>
using namespace std;
int main()
{
    int i ,j,rows,coloums;
    cout <<"enter the rows";
    cin>>rows;
    cout <<"enter the coloumns";
    cin>>coloums;
    int col2 =(coloums -1)/2;
    int count = col2;
    for (i =0 ;i<rows;i++)
    {
        if (i <= (rows-1)/2)
        {
        for (j =-col2;j<col2+1;j++)
        {
            if ( j== -i|| j==i)
            {
                cout <<"*"<<" "; 
            }
            else{
                cout <<" "<<" ";
            }

        }
        cout <<endl;
        }
        else if (i >(rows-1)/2)
        { count --;
         for (j =-col2;j<col2+1 ;j++)
         {
            if (j == -count || j==count )
            {
                cout<<"*"<<" ";
            }
            else{
                cout <<" "<<" ";
            }

         }
         
         cout <<endl;

        }
    }
}