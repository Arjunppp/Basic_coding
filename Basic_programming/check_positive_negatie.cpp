#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<< "Enter the number" <<endl;
    cin>>num;
    if(num == 0)
    {
        cout << "The number You enetered is zero "<< endl;
    }
    else if ( num >0)
    {
        cout <<"The number you enetered is Positive" <<endl;
    }
    else{
        cout <<"The number you entered is negative "<<endl;
    }
}