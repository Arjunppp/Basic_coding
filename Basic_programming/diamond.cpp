#include <iostream>
using namespace std;
int main()
{
    int rows, coloumns , i , j ;
    cout <<"Enter the rows";
    cin>> rows;
    cout <<" Enter the coloumns";
    cin >> coloumns;
    int col_count = (coloumns -1)/2;
    int count = (rows -1)/2;
    int p =1;
    for (i =0 ;i<rows ;i++)
    {

        if (i < (rows -1)/2)
        {
           for (j =-col_count ;j< col_count+1 ;j++)
            {
                if (j >= -i && j<= i)
                {
                    cout <<"*";
                }
                else
                {
                    cout <<" ";
                }
            }

        }
        if (i == (rows -1)/2)
        {
           for (j =0 ;j< coloumns ;j++)
            {
                cout <<"*";
            } 
        }
        if(i > (rows -1)/2)
        { 
           for (j =0;j<coloumns ;j++)
            {
               if (j >= p && j <= (coloumns-1)-p)
                {
                    cout<< "*";
                }
                else
                {
                    cout <<" ";
                }
            }
            p++;  
        }

        
        
        cout <<endl;
    }
}