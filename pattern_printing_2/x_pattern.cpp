#include<iostream>
using namespace std;
int main()
{
    int i, j, rows, coloumns;
    cout <<"Enter the rows";
    cin>>rows;
    
    int col2 = (rows -1)/2;
    int row2 = col2;
    for (i =-row2 ;i<row2+1;i++)
    {
        for (j =-col2 ;j<col2+1;j++)
        {
            if (i <= 0)
            {
                if (j>=i && j<=-i)
                {
                    cout <<"*"<<" "; 
                }
                else
                {
                    cout <<" "<<" ";
                }
            }
            if (i >0)
            {
                if (j>= -i && j<=i)
                {
                    cout <<"*"<<" ";
                }
                else
                {
                    cout <<" "<<" ";
                }
            }
        }
        cout <<endl;
    }
}