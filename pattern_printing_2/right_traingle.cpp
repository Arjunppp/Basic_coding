#include <iostream>
using namespace std;
int main()
{
    int i ,j ,rows, coloums;
    cout <<"Enter the number of rows";
    cin>>rows;
    cout <<"Enter the number of coloumns";
    cin >>coloums;
    for (i = 0;i<rows ;i++)
    {
        for(j =coloums ;j>0 ;j--)
        {
            if (j <= i+1)
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