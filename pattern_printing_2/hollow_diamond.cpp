#include <iostream>
using namespace std;
int main()
{
    int i ,j ,rows, coloums ;
    cout <<"Enter the number of rows";
    cin>>rows;
    cout <<"ENter the number of coloumns";
    cin >>coloums;
    int count = (coloums -1)/2;
    int count2 = count;
    for (i =0 ;i < rows;i++)
    { if (i <= (rows/2 -1))
    {
        for (j =-count;j < count+1 ;j++)
        {
            if (j==-i || j==i)
            {
                cout <<"*";
            }
            else
            {
                cout <<" ";
            }

        }
        cout <<endl;
    }
    else if (i == (rows -1)/2)
    {
        for ( j= -count; j< count+1 ;j++)
        {
            if (j == -i || j == i)
            {
                cout <<"*";
            }
            else
            {
                cout <<" ";
            }
        }
        cout <<endl;
    }
    else if (i > (rows-1)/2)
    {
        count2 --;
        for (j = -count ;j < count+1 ;j++ )
        {
            if (j == -count2 || j == count2)
            {
                cout<<"*";
            }
            else
            {
                cout <<" ";
            }
        }
        cout <<endl;

    }
    }
}