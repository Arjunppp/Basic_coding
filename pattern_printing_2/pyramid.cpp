#include <iostream>
using namespace std;
int main ()
{
    int i ,j ,rows, coloumns ;
    cout <<"Enter the number of rows";
    cin >>rows;
    cout <<"Enter the number of coloumns";
    cin >>coloumns;
    
    for (i =0 ;i <rows ;i++)
    {
        for (j = coloumns-1 ;j >=(0 -i);j--)
        {
            if ( i%2 ==0 )
            {
                if (j %2 ==0)
                {
                    if ( j <=i)
                    {
                        cout <<"*";
                    }
                    else{
                        cout <<" ";
                    }
                }
                else
                {
                    cout <<" ";
                }
                
            }
            else{
                if (j%2 != 0)
                {
                    if ( j <=i)
                    {
                        cout << "*";
                    }
                    else{
                        cout <<" ";
                    }
                }
                else
                {
                    cout <<" ";
                }
            }
        }
        cout <<endl;
       
    }
}