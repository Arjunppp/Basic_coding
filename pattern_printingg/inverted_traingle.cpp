#include <iostream>
using namespace std;
int main()
{
    int rows, coloumns ,i ,j ,count;
    cout <<"Enter the number of rows";
    cin >> rows;
    cout<<"Enter the number of coloums";
    cin >>coloumns;
    count = (coloumns-1)/2;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<coloumns;j++)
        {
            if(i == 0 )
            {
                cout <<"*"<<" ";
            }
            else
            {
                if (j >= i && j <= (coloumns-1)-i)
                {
                    cout<< "*"<<" ";
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