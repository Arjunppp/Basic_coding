#include <iostream>
using namespace std;
int main ()
{
    int i,arr[5],arr2[5];
    for ( i =0 ;i<5;i++)
    {
        cout <<"Enter the "<<i+1<<" th number of first array";
        cin>>arr[i];
    }
    for (i =0;i<5;i++)
    {
        arr2[i] = arr[i];
    }
    for (i =0;i<5 ;i++)
    {
        cout <<"The "<<i+1<<" th element of second array is"<<arr2[i]<<endl;

    }
}