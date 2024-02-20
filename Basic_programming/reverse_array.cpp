#include <iostream>
using namespace std;
int main() {
    
    int N,i ;
    cout <<"Eneter the number of elemenets in array";
    cin >>N;
    int arr[N];
    for (i =0 ;i<N ;i++)
    {
        cout<<"Eneter the "<<i+1<<" th array element" <<endl;
        cin >> arr[i];
    } 
    cout <<"The Actual array is "<<endl;
    for (i =0 ;i<N ;i++)
    {
        
        cout << arr[i] << endl;
    } 
    cout <<"The array in the reversed order is " <<endl;
    for (i =N-1 ; i >=0 ;i--)
    {
        cout << arr[i] <<endl;
    }
       
    return 0;
}