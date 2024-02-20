#include <iostream>
using namespace std;
int main()
{
    int rows, coloums, i , j;
    cout <<"Enter the number of rows";
    cin >>rows;
    cout <<"Enter the number of coloumns";
    cin >>coloums;
    int count =(coloums -1)/2;
    int count2 =(coloums -1)/2;
    int count3 = (count -1)/2;
    int count4 = count3+1;
    int rows1 =(rows -1)/2;
    int rows2 = (rows1 -1)/2;
   


    for (i =0;i<rows;i++)
    {
        if ( i < (rows -1)/2)
        {
            for (j =-count ;j<count +1 ;j++)
            {
                if (j < 0 )
                {
                    if ( (-count4-i) <= j &&  j<= (-count4+i))
                    {
                        cout <<"*"<<" ";
                    }
                    else
                    {
                        cout <<" "<<" ";
                    }
                }
                if (j == 0  )
                {
                    if (i >= rows2 +1)
                    {
                        cout <<"*"<<" ";
                    }
                    else{
                        cout <<" "<<" ";

                    }

                    

                }
                if (j > 0)
                {
                    if ((count4 -i) <= j && j <= (count4+i))
                    {
                        cout <<"*"<<" ";
                    }
                    else
                    {
                        cout <<" "<<" ";
                    }
                }
            }
            
            
        }
        if (i == (rows-1)/2)
        {
            for (j =0;j< coloums ;j++)
            {
                cout <<"*"<<" ";
            }
        }
        if( i >(rows-1)/2 )
        {
           
            
            for (j =-count;j <count+1 ;j++)
            {
                if ( j > -count2 && j< count2)
                {
                    cout <<"*"<<" ";
                }
                else
                {
                    cout <<" "<<" ";
                }
            }
            count2 --;

        }
        cout <<endl;
    }
}