#include<iostream>
using namespace std;
int main()
{
    int i,j,rows, coloumns;
    cout <<"ENter the rows";
    cin>>rows;
    cout <<"Enter the coloumns";
    int count=0;
    cin>>coloumns;
    for (i =0;i<rows;i++)
    {
        for (j =coloumns-1;j>=0;j--)
        {
            if(j<i)
            {   count++;
                cout <<count<<" ";
            }
            else{
                cout <<" "<<" ";
            }
        }
        count =0;
        cout<<endl;
    }
}