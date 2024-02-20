#include <iostream>
using namespace std;
int main()
{
    int rows, coloums, i , j;
    cout <<"Enter the rows";
    cin >>rows;
    cout<<"Enter the coloumns";
    cin >>coloums;
    int count = (coloums -1)/2;
    for (i =0 ;i< rows ;i++)
    {
        for (j = -count ;j <count+1 ;j++)
        {
            if(i == 0 || i == (rows -1))
           {
            if ( j >=-i && j <= i)
            {
                cout <<"*"<<" ";
            }
			 else
            {
                cout <<" "<<" ";
            }

           }
           else if (i > 0)
           {
            if ( j == -i || j == i)
            {
                cout <<"*"<<" ";
            }
			 else
            {
                cout <<" "<<" ";
            }
           }

        }
        cout<<endl;
    }


}