#include <iostream>
using namespace std;
int main()
{
    int i,j,rows,coloumns, count;
    cout <<"Enter the rows : "<<endl;
    cin >>rows;
    cout <<"ENter the coloumns : "<<endl;
    cin >> coloumns;
     count =-(rows -1);
    
    for (i =0;i< rows ;i++)
    {
        for (j = count; j<coloumns ;j++)
        {
            if (j < 0 )
            {
                cout <<" "<<" ";
            }
            else
            {
                cout <<"?"<<" ";
            }

        }
        count += 1;
        cout <<endl;
    }
}