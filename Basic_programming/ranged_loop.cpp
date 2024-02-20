#include <iostream>
using namespace std;
int main()
{
    int arr1[5];
    for (int i =0;i<5;i++)
    {
        cout <<"Enter the"<<i+1<<" th element" <<endl;
        cin>>arr1[i];

    }
    cout <<"The elements of the array are "<<endl;

    for (int n : arr1)
    {
        cout <<n <<endl;
    }

}