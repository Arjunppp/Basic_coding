#include <iostream>
using namespace std;
int main()
{
 int rows, coloumns,i,j, sum=0 ,count =0;
 cout <<"Enter the number of rows";
 cin>>rows;
 cout <<"ENter the number of coloumns";
 cin >>coloumns;
 if (rows != coloumns)
 {
    cout <<"It is not an squrre matrix Hence no diagonal";
 }
 else
 {
    int arr[rows][coloumns];
    for (i=0;i<rows;i++)
    {
        for (j =0 ;j<coloumns ;j++)
        {
            cout <<"ENter the element arr["<<i+1<<"]"<<"["<<j+1<<"]" <<" ";
            cin>>arr[i][j];
        }

    }
    cout <<"The array you eneterd is : "<<endl;

for (i=0;i<rows;i++)
    {
        for (j =0 ;j<coloumns ;j++)
        {
            cout <<arr[i][j]<<" ";
        }
        cout <<endl;


    }
    for (i =0 ;i <rows ;i++)
    {
        for (j =0 ;j <coloumns ;j++)
        {
            if ( (j == (coloumns -1)-count)  && (i == 0+count))
            {
            sum = sum + arr[i][j];
            }
        }
        count ++;
    }

    cout <<"The sum of minor diaginal of the matrix is : "<<sum;
 }
}