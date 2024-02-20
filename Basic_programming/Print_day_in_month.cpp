#include <iostream>
using namespace std;
int main()
{
    int num ,year;
    cout <<"Eneter a number ";
    cin >> num;
    if ( num == 1 || num ==3 || num == 5|| num ==7 || num ==8 ||num ==10 || num== 12)
    {
        if (num ==1)
        {
          cout <<"This month "<<num <<" corresponds to January"<<" and this month have 31 days";
        }
        if (num ==3)
        {
          cout <<"This month "<<num <<" corresponds to March"<<" and this month have 31 days";
        }
         if (num ==5)
        {
          cout <<"This month "<<num <<" corresponds to May"<<" and this month have 31 days";
        }
         if (num ==7)
        {
          cout <<"This month "<<num <<" corresponds to July"<<" and this month have 31 days";
        }
         if (num ==8)
        {
          cout <<"This month "<<num <<" corresponds to August"<<" and this month have 31 days";
        }
         if (num ==10)
        {
          cout <<"This month "<<num <<" corresponds to October"<<" and this month have 31 days";
        }
         if (num ==12)
        {
          cout <<"This month "<<num <<" corresponds to December"<<" and this month have 31 days";
        }

        
    }
    else if ( num == 2)
    {
         cout <<"This month "<<num <<" corresponds to February"<<" and this month have either 28 or 29 days depending on leap Year" <<endl;
         cout <<"Please enter the year";
         cin >>year;

         if((year % 4 ==0))
         {
            if (year % 100 ==0)
            {
                if (year % 400 ==0)
                {
                    cout <<"The Year is Leap Year Thus february have  29 days";
                }
                else{
                     cout <<"its an non leap year so February have 28 days";
                }
            
            }
            else{
                cout <<"The Year is Leap Year Thus february have  29 days";

            }
            
         }
         else
         {
            cout <<"its an non leap year so February have 28 days";
         }
    }
    else if ( num ==4 || num ==6 || num==9 || num ==11)
    {
        if (num ==4)
        {
          cout <<"This month "<<num <<" corresponds to April"<<" and this month have 30 days";
        }
        if (num ==6)
        {
          cout <<"This month "<<num <<" corresponds to June"<<" and this month have 30 days";
        }
        if (num ==9)
        {
          cout <<"This month "<<num <<" corresponds to Sepetember"<<" and this month have 30 days";
        }
        if (num ==11)
        {
          cout <<"This month "<<num <<" corresponds to November"<<" and this month have 30 days";
        }
    }
    else{
        cout <<"Enter a valid number";
    }
}