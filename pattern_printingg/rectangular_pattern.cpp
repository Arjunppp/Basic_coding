#include <iostream>
using namespace std;
int main()
{
    int i,j, rows, coloumns;
    cout <<"Enter the rows : ";
    cin >>rows;
    cout <<"Enter the coloumns : ";
    cin >>coloumns;
    for (i =0 ;i < rows; i++)
    {
        for (j =0;j< coloumns ;j++)
        {
            cout <<"*" <<" ";
        }
        cout <<endl;
    }
}