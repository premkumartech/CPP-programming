#include<iostream>
using namespace std;
class sum
{
    int s;
    public:
    // sum(){
    //     i = 12; 
    //     j = 13;
    //     s = i+j;
    // }
    void input(int i, int j){
        s = i+j;    
    }
    void display(){
        cout<<"The sum of value is : "<<s;
    }
};
int main()
{
    int a, b;
    sum x;
    cout<<"Enter the two value : ";
    cin>>a>>b;
    x.input(a, b);
    x.display();
    return 0;
}