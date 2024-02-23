#include <iostream>
using namespace std;
int main()
{
    int i,j,rows, count, col2;
    cout <<"enter thr rows";
    cin>>rows;
    col2 =(rows-1)/2;
    count = col2;
    for (i =0;i<rows;i++)
    {
        if (i <= (rows-1)/2)
        {
            for (j =-col2 ;j <col2+1;j++)
            {
                if ( j>= -i && j<=i)
                {
                    cout <<"*"<<" ";
                }
                else{
                    cout <<" "<<" ";
                }
            }
            cout<<endl;
        }
        if (i >(rows-1)/2)
        {
            count --;
            for (j =-col2 ;j <col2+1;j++)
            {
                if ( j>= -count && j<=count)
                {
                    cout <<"*"<<" ";
                }
                else{
                    cout <<" "<<" ";
                }
            }
            cout <<endl;

        }
    }
    
    }