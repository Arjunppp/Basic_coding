#include <iostream>
using namespace std;
int main()
{
    int i,j ,rows ,coloums;
    cout <<"Enter the rows";
    cin >>rows;
    int count = (rows -1)/2;
    int count3 = (rows-1)/2;
    cout <<"Enter the coloumns";
    cin >>coloums;
    for (i =0 ;i< rows ;i++)
    {
       
        if (i < (rows-1)/2)
        {
            for (j =0 ;j < count ;j ++)
            {
                cout <<" "<<" ";
            }
            for (j =0 ;j<=i ;j++)
            {
                cout <<"*"<<" ";
            }
            count --;
           
        }
        if (i >(rows-1)/2)
            {
                int count2 = i - (rows -1)/2;
                for (j=0;j<count2;j++)
                {
                    cout <<" "<<" ";
                }
                for (j =0;j <count3 ;j++)
                {
                    cout <<"*"<<" ";
                }
                count3 --;
               
            }
        if (i == (rows-1) /2)
        {
            for (j =0 ; j< coloums; j++)
            {
                cout <<"*"<<" ";
            }

        }
        cout <<endl;

    }
        
}
