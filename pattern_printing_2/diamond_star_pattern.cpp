#include <iostream>
using namespace std;
int main()
{
    int i ,j, rows,coloumns;
    cout <<"enter the number of rows";
    cin >>rows;
    cout <<"Enter the number of coloumns";
    cin >>coloumns;
    int count = rows /2;
    for (i =0 ;i <=rows ;i++)
    {
        if (i <= rows /2)
        {
            for (j = coloumns ;j > (0-i) ;j--)
        {
            if (i %2 ==0)
            {
                if (j %2 ==0)
                {
                    if (j <= i)
                    {
                        cout <<"*";
                    }
                    else{
                        cout <<" ";
                    }
                    
                }
                else{
                    cout <<" ";
                }
                
            }
            else{
                if (j %2 != 0)
                {
                    if (j <= i)
                    {
                        cout <<"*";
                    }
                    else
                    {
                        cout <<" ";
                    }
                    
                }
                else 
                {
                    cout <<" ";
                }
          }
        }
        
    }
    if ( i > rows /2)
    {
        for ( j = coloumns ;j > 0-count ;j --)
        {
            if (i %2 ==0 )
            {
                if ( j%2 !=0)
                {
                    if (j <=count)
                    {
                        cout <<"*";
                    }
                    else
                    {
                        cout <<" ";
                    }
                }
                else
                {
                    cout <<" ";
                }
            }
            else
            {
                if (j%2 ==0)
                {
                    if (j <= count)
                    {
                        cout <<"*";
                    }
                    else
                    {
                        cout <<" ";
                    }
                }
                else{
                    cout <<" ";
                }
            }

        }
       
        count --;

    }
    
    cout <<endl;
    }
    }