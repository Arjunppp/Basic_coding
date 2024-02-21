#include <iostream>
using namespace std;
int main()
{
    int r1,c1,r2,c2 ,i,j,option,k,sum;
    cout <<"ENeter the number of rows of the first matrix";
    cin >>r1;
    cout<<"Eneter the number of coloumns of the first matrix";
    cin >>c1;
    cout <<"Enter the number of rows of second matrix";
    cin>>r2;
    cout <<"ENeter the number of coloumsn of the second matrix";
    cin>>c2;
    int arr1[r1][c1] , arr2[r2][c2] ,resul1 [r1][c2] , resul2[r2][c1] ,n;
    cout<< "Select the option below :"<<endl;
    cout <<"1. A*B"<<endl;
    cout <<"2. B*A"<<endl;
    cin>>option;
    if (option == 1)
    {
        if (c1 == r2)
        {
           for (i =0 ;i <r1;i++)
           {
            for (j =0 ;j <c1;j ++)
            {
                cout <<"Enter the elemenets of first matrix";
                cin>>arr1[i][j];
            }
           }
           for (i =0 ;i <r2;i++)
           {
            for (j =0 ;j <c2;j ++)
            {
                cout <<"Enter the elemenets of second matrix";
                cin>>arr2[i][j];
            }
           }

            
           for (i =0 ;i <r1 ;i++)
           {
            for (j =0 ;j< c2 ;j++)
            {
                resul1[i][j] = 0;
                for(k = 0; k <c1 ;k++)
                {
                    resul1[i][j] = resul1[i][j] + (arr1[i][k]*arr2[k][j]);
                }
            }

           }
           for ( auto &row : resul1)
           {
            for (auto &col : row)
            {
                cout <<col <<" ";
            }
            cout <<endl;
           }
           
            
           

           
            

           
                
                
            

        }
        else{
            cout <<"The number of coloumns of First matrix and number of rows of second matricx is not same ....so multiplication is not possible";
        }
    }
    else if (option ==2)
    {
        if (c2 ==r1)
        {
            cout <<"PLease wait processing B*A";
        }
        else{
            cout <<"The number of coloumns of second matrix and number of rows of first matricx is not same ....so multiplication is not possible";

        }

    }
    else
    {
        cout <<"Please give an valid option";
    }
}