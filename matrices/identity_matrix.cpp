#include<iostream>
using namespace std;
int main()
{
    int i,j,rows, coloumns, count=0;
    cout <<"ENter the number of rows";
    cin>>rows;
    cout <<"ENeter the number of coloumns";
    cin>>coloumns;
    int arr[rows][coloumns];
    for (i =0;i<rows;i++)
    {
        for (j=0;j<coloumns ;j++)
        {
            cout <<"Enter the arr["<<i+1<<"]"<<"["<<j+1<<"]";
            cin>>arr[i][j];
        }
    }
    for(i =0;i<rows;i++)
    {
        for (j =0;j<coloumns;j++)
        {
            if (j ==i)
            {
                if (arr[i][j] !=1){
                    cout <<"The matrix is not identity";
                    count++;
                    break;
                }
            
            }else if ( j !=i)
            {
                if (arr[i][j] != 0)
                {
                     cout <<"The matrix is not identity";
                     count++;
                     break;

                }
            }
        }
    }
    if (count ==0)
    {
        cout <<"The matrix is identity mayrix "<<endl;
        for (i =0;i<rows;i++)
        {
            for (j =0;j<coloumns ;j++)
            {
                cout <<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}