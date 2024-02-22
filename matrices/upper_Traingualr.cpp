#include <iostream>
using namespace std;
int main()
{
    int i ,j ,rows, coloumns, sum_lower =0 ,sum_upper =0;
    cout <<"Enter the number of rows";
    cin>>rows;
    cout <<"ENter the number of coloumns";
    cin>>coloumns;
    int arr[rows][coloumns];
    for (i =0 ;i<rows;i++)
    {
        for (j =0;j<coloumns ;j++)
        {
            cout <<"ENter the elements arr["<<i+1<<"]["<<j+1<<"]";
            cin>>arr[i][j];
        }
    }
    cout <<"The array you eneterd is :"<<endl;
    for (i =0;i<rows ;i++)
    {
        for (j =0;j<coloumns ;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for (i =0;i <rows ;i++)
    {
        for (j =0;j<coloumns ;j++)
        {
            if (j<=i)
            {
                cout <<arr[i][j] <<" ";
            }
            
        }
        cout <<endl;
    }
    for (i =0;i <rows ;i++)
    {
        for (j =0;j<coloumns ;j++)
        {
            if (j>=i)
            {
                cout <<arr[i][j] <<" ";
            }
            else{
                cout <<" "<<" ";
            }
            
        }
        cout <<endl;
    }
    for (i =0;i <rows ;i++)
    {
        for (j =0;j<coloumns ;j++)
        {
            if (j<=i)
            {
                sum_lower = sum_lower + arr[i][j];
            }
            
        }
        cout <<endl;
    }
    for (i =0;i <rows ;i++)
    {
        for (j =0;j<coloumns ;j++)
        {
            if (j>=i)
            {
              sum_upper =sum_upper +arr[i][j];
            }
            
            
        }
       
    }
    cout <<"The sum of lower traingle is "<<sum_lower <<endl;
    cout <<"The sum of upper traingle is "<<sum_upper<<endl;
}