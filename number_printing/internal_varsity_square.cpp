#include <iostream>
using namespace std;
int main()
{
    int rows, coloumns, i, j;
    cout <<"Enter the number of rows";
    cin>> rows;
    cout<<"Enter the number of coloumns";
    cin>>coloumns;
    int count=1;
    for (i =0;i <rows ;i++)
    {
        for(j =0;j<coloumns ;j++)
        {
            if (j == (coloumns -1)/2)
            {
                cout <<count<<" ";
            }
            else
            {
                cout <<'3'<<" ";
            }
        }
        count ++;
        if (count >3)
        {
            count =1;
        }
        cout<<endl;
    }
}