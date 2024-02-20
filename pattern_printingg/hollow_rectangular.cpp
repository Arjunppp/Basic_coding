#include <iostream>
using namespace std;
int main()
{
    int i,j ,coloumns,rows;
    cout <<"Enter the rows : ";
    cin>>rows;
    cout <<"Enter the coloumns : ";
    cin>>coloumns;
    for(i =0;i<rows ;i++)
    {
        for(j=0;j<coloumns;j++)
        { if ( i== 0 || i== rows -1 || j ==0 || j == coloumns -1)
        {
             cout <<"*" <<" ";
        }
        else
        {
            cout <<" "<<" ";
        }
        
           
        }
        cout <<endl;
    }
}