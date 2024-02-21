#include <iostream>
using namespace std;
int main()
{
    int rows, coloums,i, j;
    cout <<"ENter the number of rows";
    cin >>rows;
    cout <<"Enter the number of coloumns";
    cin >>coloums ;
    for (i =0 ;i <rows ;i++)
    {
        for (j =0 ;j <coloums ;j++)
        {
            if (j <=3)
            {
                if ( j == 0 || j ==3 || i==(rows -1)/2)
                {
                    cout <<"*"<<" ";
                }
                else{
                    cout <<" "<<" ";
                }
            }
            else if ( j > 4  && j <=8)
            {
                if (i ==0 || i==(rows -1)/2 || i == (rows-1) || j==5)
                {
                    cout <<"*"<<" ";
                }
                else{
                    cout <<" "<<" ";
                }
                    
            }
            else if (j > 9 && j <=13)
            {
                if (i == (rows-1) || j == 10)
                {
                    cout <<"*"<<" ";
                }
                else
                {
                    cout <<" "<<" ";
                }
            }
            else if (j > 14 && j <=18)
            {
                if (i == (rows-1) || j == 15)
                {
                    cout <<"*"<<" ";
                }
                else
                {
                    cout <<" "<<" ";
                }
            }
            else if (j > 19 && j <=23)
            {
                if (i == (rows-1) || i == 0 || j == 20 || j ==23)
                {
                    cout <<"*"<<" ";
                }
                else
                {
                    cout <<" "<<" ";
                }
            }
            
              
            else{
                if (j == 4 || j == 9 || j == 14 || j==19 || j ==24)
                {
                    cout <<" "<<" ";
                }
            }
        }
        cout <<endl;
    }

}