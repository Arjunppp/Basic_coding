#include <iostream>
using namespace std;
int main()
{
    int i,j,rows,col;
    cout <<"ENter the number of rows";
    cin>>rows;
    cout <<"ENetr the number of coloumns";
    cin >>col;
    int resul[1][col] ,arr[rows][col];
    int count =0;
    for (j =0 ;j<col ;j++)
    {
        resul[0][j] = 0;
    }
    for (i =0 ;i <rows ;i++)
    {
        for (j =0;j <col ;j++)
        {
            cout <<"Enter the elements arr["<<i+1<<"]"<<"["<<j+1<<"]";
            cin>>arr[i][j];
        }
    }
    cout <<"The array you enetered is :"<<endl;
    for (i =0 ;i<rows;i++)
    {
        for (j =0;j <col ;j++)
        {
            cout <<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for (i =0;i<rows ;i++)
    {
        for(j =0;j<rows;j++)
        {
            resul[0][count] = resul[0][count] + arr[j][i];
        }
        count++;
    }
   cout <<"the sum of the coloums are :"<<endl;
    for (j =0 ;j<col ;j++)
    {
        cout <<resul[0][j]<<" ";
    }
    
}