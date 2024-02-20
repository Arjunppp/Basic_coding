#include <iostream>
using namespace std;
int main()
{
    int i ,j ,rows, count =0;
    cout <<"Enter the rows";
    cin >>rows;
    
    for (i =0 ;i < rows ;i++)
    {
        if (i <= rows/2)
        {
            count +=1;
            for (j =0 ;j < count ;j++)
            {
                cout <<"*"<<" ";
            }
            
        }
        if (i >rows /2)
        {
            count -= 1;
            for (j =0 ;j < count ;j++)
            {
                cout <<"*"<<" ";
            }

        }
      cout <<endl;
    }
}