#include <iostream>
using namespace std;
int main()
{
    int i, j ,rows, coloumns;
    cout <<"eneter the numbe rof rows";
    cin >>rows;
    cout <<"Enter the number of coloums";
    cin>>coloumns;
    for (i =0 ;i< rows ;i++)
    {
        if ( i ==0 || i == rows -1)
        {
            for (j =0;j <coloumns ;j++)
            {
                cout <<"*"<<" ";
            }
        }
        else{
            for (j =0 ;j< coloumns ;j++)
            {
                if (j ==0 || j== coloumns -1)
                {
                    cout <<"*"<<" ";
                }
                else
                {
                    cout <<" "<<" ";
                }
            }
        }
        cout <<endl;
    }

} 