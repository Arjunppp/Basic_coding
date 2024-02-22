#include <iostream>
using namespace std;
int main()
{
    int i,j,rows, coloums,count=0;
    int treshold = (2*rows*coloums)/2;
    cout <<"eneter rows";
    cin>>rows;
    cout<<"enter the numbe of coloums";
    cin>>coloums;
   int arr[rows][coloums];
    for (i =0;i<rows;i++)
    {
        for (j=0;j<coloums;j++)
        {
            cout <<"ENeter the elements";
            cin>>arr[i][j];
        }
    }
    for (i =0;i<rows;i++)
    {
        for (j=0;j<coloums ;j++)
        {
            if(arr[i][j] == 0)
            {
                count++;
            }
        }

    }
    if (count >= treshold)
    {
        cout <<"The matrix is sparse matrix";
    }
    else{
        cout <<"The matrix is not sparse matrix";
    }

}