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
       
       if (i == 0 || i == rows -1)
       {
        for (j = coloumns-1 ;j >=(0 -i);j--)
        {   
            if(j <= i )
            {
                cout <<"*";
            }
            else
            {
                cout <<" ";
            }
        }
       

       }
       else{
        for (j = coloumns-1 ;j >=(0 -i);j--)
        {   
            if(j == i  || j == -i)
            {
                cout <<"*";
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