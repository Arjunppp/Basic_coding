#include <iostream>
using namespace std;
int main()
{
    int rows, coloums,i,j ,sum =0;
    cout <<"Enter the number of rows of matrix";
    cin >>rows;
    cout <<"Enter the number of coloumns of the  matrix";
    cin >>coloums;
    if (rows != coloums )
    {
        cout <<"The Matrix is not square : Only square matrix have major and minor diagonal";
    }
    else
    {  int arr[rows][coloums];
        for (i =0 ;i <rows ;i++)
        {
            for (j =0 ;j<coloums ;j++)
            {
                cout <<"Enter the arr["<<i+1<<"]"<<"["<<j+1<<"]";
                cin>>arr[i][j];
            }
        }
        cout <<"The elements of the array is "<<endl;
        for (i =0 ;i <rows ;i++)
        {
            for (j =0 ;j<coloums ;j++)
            {
                
                cout << arr[i][j]<<" ";
            }
            cout <<endl;
        }
        for (i =0 ;i <rows ;i++)
        {
            for (j =0 ;j<coloums ;j++)
            {
                
                if (i ==j)
                {
                    sum = sum + arr[i][j];
                }
            }
            
        }
      cout <<"The sum of the main diagonal of the matrix is "<<sum ;  
        
            
    }
}