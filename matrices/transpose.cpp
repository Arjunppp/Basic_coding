#include <iostream>
using namespace std;
int main()
{
    int i,j,rows, coloums,temp=0;
    cout <<"Enter the number of rows";
    cin>>rows;
    cout <<"Enter the number of coloums";
    cin>>coloums;
    int arr[rows][coloums] ,resul[coloums][rows];
    for (i =0;i<rows;i++)
    {
        for (j =0;j<coloums;j++)
        {
            cout <<"ENter the arr["<<i+1<<"]["<<j+1<<"]";
            cin>>arr[i][j];
        }
    }
    for(i=0;i<coloums ;i++)
    {
        for (j =0;j<rows;j++)
        {
            resul[i][j] = 0;
        }
    }
    cout <<"The matrix you enetered is "<<endl;
    for (i =0;i<rows;i++)
    {
        for (j =0;j<coloums;j++)
        {
            cout <<arr[i][j]<<" ";
        }
        cout <<endl;
    }
    for(i =0;i<rows;i++)
    {
        for(j =0;j<coloums ;j++)
        {
           resul[j][i] = arr[i][j];

        }
    }
    cout <<"The transpose of the matrix is "<<endl;
    for (i =0;i<coloums;i++)
    {
        for (j =0;j<rows;j++)
        {
            cout <<resul[i][j]<<" ";
        }
        cout <<endl;
    }

}