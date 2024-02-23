#include <iostream>
using namespace std;
int main()
{
    int rows, i, j, row2;
    cout <<"Enter the rows ";
    cin>>rows;
  row2 =(rows-1)/2;
  
  for (i = -row2 ;i< row2+1;i++)
  {
    for (j=-row2;j<row2+1;j++)
    {
        if (i==0||j ==0)
        {
            cout <<"*"<<" ";

        }
        else
        {
            cout <<" "<<" ";
        }
    }
    cout<<endl;
  }
}