#include <iostream>
using namespace std;
int main()
{
float unit, charge , total;
cout <<"Eneter the units of usage of electricity";
cin >>unit;
if (unit <= 50)
{
   charge = unit * 0.5;
   total = charge + (charge * 0.20);
   cout <<"The total amount payable is " << total;
}
else if (unit <= 150 && unit >50)
{
    charge = (50* 0.5) + ((unit - 50) * 0.75);
    total = charge + (charge * 0.20);
    cout <<"The total amount payable is " << total;
}
else if (unit <= 250 && unit > 150)
{
    charge = (50* 0.5) + (100*0.75) +((unit - 150) * 1.20);
    total = charge + (charge * 0.20);
    cout <<"The total amount payable is " << total;

}
else if (unit > 250)
{
    charge = unit * 1.50;
    total = charge + (charge * 0.20);
    cout <<"The total amount payable is " << total;
}
else
{
    cout <<"Eneter an Valid unit";
}

}
