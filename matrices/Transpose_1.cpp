#include <iostream>
using namespace std;
int main()
{
    int i,j,rows,coloumns;
    cout<<"Enter the rows ";
    cin>>rows;
    cout<<"ENter the coloums";
    cin>>coloumns;
    
    int arr[rows][coloumns] ,arr_t[coloumns][rows];
    cout<<"Enter the matrix";
    for(i=0;i<rows;i++)
    {
        for(j =0;j<coloumns;j++)
        {
            cin>>arr[i][j];

        }
    }
    cout<<"The matrix you eneterd is "<<endl;
    for (i =0;i<rows;i++)
    {
        for(j=0;j<coloumns;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<coloumns;j++)
        {
            arr_t[j][i] = arr[i][j];
        }
    }
    for(i =0;i<coloumns;i++)
    {
        for(j=0;j<rows;j++)
        {
            cout<<arr_t[i][j]<<" ";
        }
        cout<<endl;
    }
}