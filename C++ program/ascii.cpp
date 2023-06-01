/* 
    0 - 9  --->  48 - 57
    A - Z  --->  65 - 90
    a - z  --->  97 - 122
    other character ---> 0 - 255 excluding the above mention codes.
*/

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    if(ch>=48 && ch<=57)
    cout<<"You entered a digit "<<endl;
    else if(ch>=65 && ch<=90)
    cout<<"You entered a uppercase character "<<endl;
    else if(ch>=97 && ch<=122)
    cout<<"You entered a lowercase character "<<endl;
    else
    cout<<"You entered a special character";
    return 0;
}
