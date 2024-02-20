#include <iostream>
using namespace std;
int main()
{
    int i,j ,rows,coloumns;
    cout <<"Enter the rows";
    cin >>rows;
    cout <<"Enter the coloumns";
    cin >>coloumns;
    int rows1 = (rows-1)/2;
    int coloumns1 = (coloumns -1)/2;
    for (i =-rows1 ;i< rows1+1; i++)
    {
        for ( j = -coloumns1 ; j <coloumns1+1;j++)
        {
            if ( i ==0)
            {
                cout <<"*";
            }
            else if(j ==0 )
            {
              cout <<"*"<<"  ";
            }
            else{
                cout <<" ";
            }
        }
        cout <<endl;
       
    }
        cout <<endl;
}
