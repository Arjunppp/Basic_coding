#include <iostream>
using namespace std;
int main()
{
    int i, j , sclar , rows, coloumn;
    cout <<"ENter the number of rows";
    cin>>rows;
    cout <<"Enter the number of coloumns";
    cin >>coloumn;
    int arr[rows][coloumn];
    for (i =0 ;i <rows;i++)
    {
        for (j =0 ;j<coloumn ;j++)
        {
            cout <<"Enter the elemenets of the matrix arr["<<i+1<<"]"<<"["<<j+1<<"]";
            cin>>arr[i][j];
        }
    }
    cout <<"The first matrix is :"<<endl;
    for (i =0 ;i <rows;i++)
    {
        for (j =0 ;j<coloumn ;j++)
        {
            
            cout << arr[i][j] <<" ";
        }
        cout <<endl;
    }
    cout <<"ENter the scalar to multiplication "<<endl;
    cin >>sclar;
    for (i =0 ;i <rows;i++)
    {
        for (j =0 ;j<coloumn ;j++)
        {
            
            arr[i][j] = sclar * arr[i][j];
        }
        
    }
    cout <<"The resultant matrix after multiplication is : "<<endl;
    for (i =0 ;i <rows;i++)
    {
        for (j =0 ;j<coloumn ;j++)
        {
            
            cout <<arr[i][j]<<" ";
        }
        cout <<endl;
        
    }

}