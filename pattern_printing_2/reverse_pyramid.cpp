#include <iostream>
using namespace std;
int main()
{
    int i,j ,rows, coloumns;
    cout <<"enter the number of rows";
    cin >>rows;
    cout <<"Enter the number of coloumns";
    cin>>coloumns;
    int count = (coloumns -1)/2;
    int count2 = count;
    for ( i= 0;i< rows ;i++)
    {
        for (j = -count  ; j <=count ;j++)
        {
            if (j>=-count2 && j<= count2)
            {
                cout <<"*";
            }
            else
            {
                cout <<" ";
            }
        }
        count2 --;
        cout <<endl;
    }
}