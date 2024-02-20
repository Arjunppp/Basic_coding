#include<iostream>
using namespace std;
int main()
{
    int rows, coloumns,i, j;
    cout <<"Enter the rows";
    cin>>rows;
    cout <<"Enter the number of coloumns";
    cin>>coloumns;
    for (i =0;i<rows;i++)
    {
        for(j =0;j<coloumns;j++)
        {
            cout <<i+1<<" ";
        }
        cout <<endl;
    }
}