#include <iostream>
using namespace std;
int main()
{
    float  phy ,chem ,bio , math , comp ,sum, perc ;
    cout <<"Enter the Marks in Physics , Chemistry ,Bilogy ,Maths and Computer";
    cin >>phy>>chem>>bio>>math>>comp;
      sum = phy+chem+bio+math+comp;
      perc = (sum /500)*100;

      cout <<"The total mark is : "<<sum<<endl;
      cout <<"The percetange he/she got is"<<perc <<endl;
      if (perc >= 90 && perc <= 100)
      {
        cout << "The Student secured Grade A";
      }
      else if (perc >= 80 && perc <90)
      {
        cout << "The Student secured Grade B";
      }
       else if (perc >= 70 && perc <80)
      {
        cout << "The Student secured Grade C";
      }
       else if (perc >= 60 && perc <70)
      {
        cout << "The Student secured Grade D";
      }
       else if (perc >= 40 && perc <60)
      {
        cout << "The Student secured Grade E";
      }
      else if (perc < 40 && perc >= 0)
      {
        cout << "The Student secured Grade F";
      }
      else{
        cout <<"Kindly enter Valid marks";
      }

}