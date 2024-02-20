#include <iostream>
using namespace std;
 int main()
 {
    int rows, coloumns, i , j;
    cout <<"enetr the number of rows";
    cin >>rows;
    cout <<"Eneter the number of coloumns";
    cin >>coloumns;
    for (i =0 ;i<rows ;i++)
    {
        for (j =coloumns ;j >0  ;j --)
        {
            if (j >i)
            {
                cout <<"*"<<" ";
            }
            else{
                cout<<" "<<" ";
            }

        }
        cout<<endl;
    }
 }