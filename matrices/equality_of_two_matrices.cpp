#include <iostream>
using namespace std;
int main()
{
    int i ,j , r1,c1, r2,c2;
    cout <<"Enter the rows of first matrix";
    cin>>r1;
    cout <<"Enter the coloums of first matrix";
    cin>>c1;
    cout <<"Enter the rows of second matrix";
    cin>>r2;
    cout <<"Enter the coloums of second matrix";
    cin>>c2;
    int count =0;
    if (r1 != r2 || c1 != c2)
    {
        cout <<"The matrices are not equal";
    }
    else
    {
        int arr1[r1][c1] ,arr2[r2][c2];
        cout <<"The matrices are equal rank let us check the equality "<<endl;
        for (i =0 ;i <r1 ;i++)
        {
            for (j =0;j<c1;j++)
            {
                cout <<"ENter the elements of  arr1["<<i+1<<"]["<<j+1<<"]";
                cin>>arr1[i][j];
            }
        
        }
        for (i =0 ;i <r2 ;i++)
        {
            for (j =0;j<c2;j++)
            {
                cout <<"ENter the elements of  arr2["<<i+1<<"]["<<j+1<<"]";
                cin>>arr2[i][j];
            }
        
        }
        cout <<"The first Matrix is : "<<endl;
        for (i =0 ;i <r1 ;i++)
        {
            for (j =0;j<c1;j++)
            {
                
                cout << arr1[i][j]<< " ";
            }
           cout <<endl;
        }
        cout <<"The second matrix is "<<endl;
        for (i =0 ;i <r1 ;i++)
        {
            for (j =0;j<c1;j++)
            {
                
                cout << arr2[i][j]<< " ";
            }
           cout <<endl;
        }

        for (i =0 ;i <r2 ;i++)
        {
            for (j =0;j<c2;j++)
            {
                if (arr1[i][j] == arr2[i][j])
                {  count ++ ;
                    continue;
                }
                else
                {
                   
                    cout <<"The Matrix is not eqaul";
                     break;
                }
            }
        
        }

        if (count == r1*c1)
        {
            cout <<"The matrices are equal";
        }

    }

    
}