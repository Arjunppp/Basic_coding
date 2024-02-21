#include <iostream>
using namespace std;
int main()
{
    int i,j,rows,coloumns;
    cout <<"Enter the coloums";
    cin >>coloumns;
    cout <<"enter the rows ";
    cin>>rows;
    int col2 = (coloumns -1)/2;
    for (i =0 ;i<rows ;i++)
    {
        for (j =-col2 ;j < col2+1 ;j++)
        {
            if ( j == -i || j == i)
            {
                cout <<"*"<<" ";
            }
            else{
                cout <<" "<<" ";
            }
        }
        cout <<endl;


    }
}