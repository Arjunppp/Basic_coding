#include <iostream>
using namespace std;
int main()
{
    int i ,j ,rows, coloumns;
    cout <<"Enter the number of rows";
    cin>>rows;
    cout <<"Enter the number of coloumns";
    cin >>coloumns;
    for (i =0 ;i <rows ;i++)
    {
        for (j =0 ;j< coloumns ;j++)
        {
            if (j >i)
            {
                cout <<"*"<<" ";
            }
            else
            {
                cout <<" "<<" ";
            }
        }
        cout <<endl;
    }
}