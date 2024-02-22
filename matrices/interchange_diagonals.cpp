#include <iostream>
using namespace std;
int main ()
{
    int i,j,rows,coloumns;
    cout <<"enter the number of rows";
    cin>>rows;
    cout <<"Enter the number of coloums";
    cin>>coloumns;
    int temp , count = coloumns -1;
    int arr[rows][coloumns];
    if (rows != coloumns)
    {
        cout <<"The matrix is not square : Hence no diagonal";
    }
    else
    {
        for (i =0;i<rows;i++)
        {
            for (j =0;j<coloumns ;j++)
            {
                cout <<"Enter thr arr["<<i+1<<"]["<<j+1<<"]";
                cin>>arr[i][j];
            }
        }
        cout <<"The matrix you entered is "<<endl;
        for (i =0;i<rows ;i++)
        {
            for (j =0;j<coloumns ;j++)
            {
                cout <<arr[i][j]<<" ";
            }
            cout <<endl;
        }
        for (i =0 ;i <rows;i++)
        {
            for (j =0;j<coloumns ;j++)
            {
                if ( i ==j)
                {
                    temp = arr[i][j];
                    arr[i][j]= arr[i][count];
                    arr[i][count] = temp;
                }
            }
            count --;
        }
        cout <<"The matricx after intrechage of diagonals is :"<<endl;
        for (i =0;i<rows;i++)
        {
            for (j =0;j<coloumns ;j++)
            {
                cout <<arr[i][j] <<" ";
            }
            cout <<endl;
        }

        
            }
}