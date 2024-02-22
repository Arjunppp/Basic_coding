#include <iostream>
using namespace std;
int main()
{
    int i,j,rows,coloumns, count =0, count2 =0;
    cout <<"ENter the rows";
    cin>>rows;
    cout <<"ENter the coloums";
    cin>>coloumns;
    int arr[rows][coloumns] ,arr_t[coloumns][rows];
    for (i =0;i<rows;i++)
    {
        for (j =0;j<coloumns ;j++)
        {
            cout <<"Enter the elements";
            cin>>arr[i][j];
        }
    }
    for (i =0 ;i<rows;i++)
    {
        for (j =0;j<coloumns ;j++)
        {
            arr_t[j][i] = arr[i][j];
        }
    }
    for (i =0;i<rows ;i++)
    {
        for (j =0;j<coloumns;j++)
        {
          if( arr[i][j] == arr_t[i][j])
          {
            count ++;
          }
          else{
            count2++;
            
          }
          
        }
    }
    if (count == (rows*coloumns))
    {
        cout <<"The matrix is symetric"<<endl;
    }
    if (count2 > 0)
    {
        cout <<"The matrix is not symetric "<<endl;
    }
    cout <<"The matrix is"<<endl;
    for (i =0;i<rows;i++)
    {
        for (j =0;j<coloumns;j++)
        {
            cout <<arr[i][j]<<" ";
        }
        cout <<endl;
    }
    cout <<"The Transpose matric is"<<endl;
    for (i =0;i<rows;i++)
    {
        for (j =0;j<coloumns;j++)
        {
            cout <<arr_t[i][j]<<" ";
        }
        cout <<endl;
    }
}