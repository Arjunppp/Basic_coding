#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout <<"Eneter a charecter";
    cin >>ch;
    if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i'|| ch =='O'|| ch =='o'|| ch == 'U'|| ch =='u')
    {
        cout <<"The charecter is an vowel";
    }
    else{
        cout <<"The charecter is an consonant";
    } 

    
}