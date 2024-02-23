#include <iostream>
using namespace std;
int main()
{
    int i,j,rows,coloumns,temp =0;
    cout<<"Enter the rows and coloums";
    cin>>rows>>coloumns;
    int count = coloumns-1;
    int count2 =coloumns-1;
    cout<<"ENter the matrix";
    int arr[rows][coloumns];
    for(i=0;i<rows;i++)
    {
        for(j=0;j<coloumns;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The matrix you eneterd is"<<endl;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<coloumns;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<"The main diagonal of the matrix is"<<endl;;
for(i =0;i<rows;i++)
{
    for(j=0;j<coloumns;j++)
    {
        if(i ==j)
        {
            cout<<arr[i][j]<<" ";
        }
        else
        {
            cout<<" "<<" ";
        }

    }
    cout<<endl;
}
cout<<"The minor diagonal of the matrix is"<<endl;
for(i=0;i<rows;i++)
{
    for(j=0;j<coloumns;j++)
    {
        if (j ==count)
        {
            cout<<arr[i][count]<<" ";
        }
        else
        {
            cout<<" "<<" ";
        }
      
    }
    cout<<endl;
    count --;
}
for(i=0;i<rows;i++)
{
    for(j=0;j<coloumns;j++)
    {
        if(i ==j )
        {
            temp = arr[i][j];
            arr[i][j] = arr[i][count2];
            arr[i][count2] =temp;
        }
    }
    count2--;
}
cout<<"The matrix after exchange of diagonal is "<<endl;
for(i =0;i<rows;i++)
{
    for(j=0;j<coloumns;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}