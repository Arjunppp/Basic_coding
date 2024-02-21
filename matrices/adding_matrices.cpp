#include <iostream>
using namespace std;
int main()
{
    int r1,r2 ,c1,c2 ,i ,j;
    cout <<"Eneter the rows of first matrix" ;
    cin>>r1;
    cout <<"Enter the rows of second matrix";
    cin>>r2;
    cout <<"Enter the coloumns of first matrix";
    cin >>c1;
    cout <<"Enter the coloumns of second matrix";
    cin>>c2;
    int arr1[r1][c1] , arr2[r2][c2];
    int arr3[r1][c1];
    for (i =0 ;i <r1 ;i++)
    {
        for (j =0 ;j <c1 ;j++)
        {
            cout << "Eneter the elements of the first array -  arr1["<<i+1<<"]["<<j+1<<"] "<<endl;
            cin>>arr1[i][j];
        }
    }
    for (i =0 ;i<r2 ;i++)
    {
        for (j =0 ;j<c2 ;j++)
        {
            cout << "Eneter the elements of the second array -  arr2["<<i+1<<"]["<<j+1<<"] " <<endl;
            cin>>arr2[i][j];

        }
    }
    cout <<"The first matrix is :" <<endl;
    for (i =0 ;i <r1 ;i++)
    {
        for (j =0 ;j <c1 ;j++)
        {
           
            cout << arr1[i][j] <<" ";
        }
        cout <<endl;
    }
    cout <<"The second matrix is : "<<endl;
    for (i =0 ;i<r2 ;i++)
    {
        for (j =0 ;j<c2 ;j++)
        {
            
            cout<< arr2[i][j] <<" ";

        }
        cout <<endl;
    }


    if (r1 == r2 && c1 ==c2)
    {
        
        for ( i=0 ;i<r1 ;i++)
        {
            for (j =0;j<c1;j++)
            {
                arr3[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
    }
    else{
        cout <<"The length of rows and coloumns are different hence addition of these two matrices are not possible";
    }

    cout <<"The resultant Matrix is :"<<endl;

    for(i =0;i<r1 ;i++)
    {
        for (j =0;j<c1 ;j++)
        {
           cout <<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
}