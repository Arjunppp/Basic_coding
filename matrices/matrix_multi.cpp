#include<iostream>
using namespace std;
int main()
{
    int i,j,r1,c1,r2,c2,k;
    cout <<"Enter thr rows and coloumn of first matrix ";
    cin>>r1>>c1;
    cout<<"Enter the rows and the coloumn of the second matrix ";
    cin>>r2>>c2;
    if ( c1 != r1)
    {
        cout <<"The matrix multiplication is not possible";
    }
    else
    {
        int arr_1[r1][c1] ,  arr_2[r2][c2], resul[r1][c2];
        cout <<"Enter the first matrix"<<endl;
        for (i =0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                cin>>arr_1[i][j];
            }
        }
        cout<<"enter the second matrix"<<endl;
        for(i =0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                cin>>arr_2[i][j];
            }
        }
        for(i =0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                resul[i][j] =0;
                for(k =0;k<c1;k++)
                {
                    resul[i][j] += arr_1[i][k] * arr_2[k][j];
                }

            }
        }

        for(i =0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                cout<<resul[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}