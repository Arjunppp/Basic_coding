#include <iostream>
using namespace std;
int main()
{
    float Basic_sal , final_sal;
    cout <<"Eneter the basic slalary of the employee";
    cin >>Basic_sal;
    if (Basic_sal <=10000)
    {
        final_sal = Basic_sal + (Basic_sal * 0.2) + (Basic_sal * 0.8);
        cout <<"The final salary is : " << final_sal;
    }
    else if (Basic_sal <= 20000 && Basic_sal > 10000)
    {
        final_sal = Basic_sal + (Basic_sal * 0.25) + (Basic_sal * 0.9);
        cout <<"The final salary is : " << final_sal;
    }
    else if (Basic_sal > 20000)
    {
        final_sal = Basic_sal + (Basic_sal * 0.30) + (Basic_sal * 0.90);
        cout <<"The final salary is : " << final_sal;
    }
    else{
        cout <<"Enter an Valid salary";
    }
}