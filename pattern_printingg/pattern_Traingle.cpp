#include <iostream>
using namespace std;
int main()
{
    int i,j,k, rows, coloums ;
    cout <<"Enter the rows ";
    cin >> rows;
    cout <<"Enter the coloumns";
    cin >>coloums;
    int count =(coloums-1)/2;
    for (i =0 ;i< rows ;i++)
    {
        for (j = -count ; j <(count+1) ;j++)
        {
           
            if ( j >=-i && j <= i)
            {
                cout <<"*"<<" ";
            }
            
                 
            else
            {
                cout <<" "<<" ";
            }
        }
        cout <<endl;
       
    
    }

    
    
}