#include <iostream>
using namespace std;
int main()
{
    int r1, c1, i , j ;
    cout <<"Enter the number of rows";
    cin>>r1;
    cout <<"ENter the number of coloumns";
    cin>>c1;
    int arr[r1][c1],resul_rows[r1][1],resul_col[1][c1];
    for(i =0;i <r1 ;i++)
    {
        for (j =0 ;j <c1 ;j++)
        {
            cout <<"Enter the arr["<<i+1<<"]["<<j+1<<"]";
            cin>>arr[i][j];
        }
    }
    cout <<"The array you eneterd is :"<<endl;
    for(i =0;i <r1 ;i++)
    {
        for (j =0 ;j <c1 ;j++)
        {
            cout <<arr[i][j]<<" ";
        }
        cout <<endl;
    }
    for (i =0 ;i<r1 ;i++)
    {
        resul_rows[i][0] = 0;
    }
     for (i =0;i <r1 ;i++)
         {  
          for (j =0;j <c1;j++)
             {
                  resul_rows[i][0] =  resul_rows[i][0] + arr[i][j];
             }

         }

  cout <<"The sum of the rows of the matrix is "<<endl;
  for (i =0;i<r1;i++)
  {
    cout <<resul_rows[i][0]<<endl;
  }
  
    
}