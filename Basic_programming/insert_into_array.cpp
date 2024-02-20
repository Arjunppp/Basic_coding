#include <iostream>
#include <array>
using namespace std;
int main()
{
    int n, i , sum=0 , count_neg =0 , count_even =0, count_odd =0;
    cout <<"Eneter the limit of the array"<<endl;
    cin >>n;
    int arr[n];
    for (i =0 ;i<n ;i++)
    {
        cout <<"Eneter the "<<i<<" st number of the array" <<endl;
        cin >>arr[i];
    }
    //To print all the negative numbers
    for (i= 0 ;i<n;i++)
    {
       if (arr[i] <0)
       {
        count_neg +=1;
        cout <<arr[i];
       }
       else{
        continue;
       }

    }
    if (count_neg ==0)
    {
        cout <<"There is no negative numbers in the array" <<endl;
    }
    else{
        cout <<"The number of negative elemenst are "<< count_neg <<endl;
    }
    //sum of array elemenets
    for(i =0 ;i< n;i++)
    {
        sum += arr[i];

    }
    cout <<"The sum of the array elemets are "  <<sum <<endl;

    //number of even and odd element in array

    for(i = 0;i <n; i++)
    {
        if (arr[i]%2 ==0)
        {
            count_even +=1;

        }
        else
        {
            count_odd += 1;
        }

    }
    cout <<"The number of even elements in the array are " << count_even <<endl;
    cout <<"The number of odd elemenst in the array are " << count_odd <<endl;
    
    int arr_2[n];
    for (i =0 ;i<n ;i++)
    {
        arr_2[i] = arr[i];
    }

    for (int p :arr_2)
    {
        cout <<p <<endl;
    }

}