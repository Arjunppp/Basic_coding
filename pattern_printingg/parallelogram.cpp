#include <iostream>
using namespace std;
int main()
{
    int i ,j , rows , coloumns ,count =0;
    cout <<"ENter the rows : "<<endl;
    cin >>rows;
    cout <<"Enter the coloumns : "<<endl;
    cin >>coloumns;
    for (i=0 ;i<rows ;i++)
    {
        for (j =0;j<coloumns+count ;j++)
        {
           if (j < i)
           {
            cout <<" "<<" ";
           }
           else
           {
            cout <<"*"<<" ";
           }

        }
        count ++;
        cout <<endl;
    }
}