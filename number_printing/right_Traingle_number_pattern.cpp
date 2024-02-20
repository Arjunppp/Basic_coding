#include <iostream>
using namespace std;
int main ()
{
    int rows,coloumns,i,j;
    cout <<"Enter the number of rows";
    cin>>rows;
    cout <<"Enter the number of coloumns";
    cin>>coloumns;
    int count =1;
    for (i =0;i<rows;i++)
    {
        for (j =0;j<=i;j++)
        {
         cout <<count <<" ";
         count ++;
        }
        cout <<endl;
    }
}