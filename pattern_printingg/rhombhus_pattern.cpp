#include <iostream>
using namespace std;
int main()
{
    int i,j, count =0, l;
    cout <<"Enter the limit";
    cin>>l;
    for (i =0 ; i< l;i++)
    {
        for(j =0 ;j<(l+count);j++)
        {
            if (j < i)
            {
                cout <<" "<<" ";
            }
            else{

            
            cout <<"*"<<" ";
            }
        }
        count ++;
        cout <<endl;
    }


}