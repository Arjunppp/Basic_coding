#include <iostream>
using namespace std;
int main()
{
    float cp,sp, diff;
    cout << "Eneter the cost price and the selling price  in rupees";
    cin >>cp>>sp;
    if (sp>cp)
    {
      diff = sp -cp ;
      cout <<"The profit is " << diff;
    }
    else{
        diff = cp -sp;
        cout <<"The loss is " <<diff;
    }
}