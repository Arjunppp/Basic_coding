#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<< "enter the two numbers";
    scanf("%d %d", &num1, &num2);
    if( num1 > num2)
    {
        cout << num1 << " is the Greatest number" << endl;

    }
    else{
        cout << num2 << " is the greatest number" <<endl;
    }
    return 0;
}