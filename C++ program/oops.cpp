
// Class type ka question hai bhi, real class ka nahi hai

// #include<iostream>
// using namespace std;
// void display(){
//   cout<<"This is the void display  "<<endl;
// }
// void sum(int a, int b){
//   cout<<a+b<<endl;
// }
// int mult(int x, int y, int z){
//   return x*y*z;
// }
// int main()
// {
//   display();
// //   sum(12, 13);  
// int a, b, c, d, e;
// cout<<"Enter the two value for sum : ";
// cin>>a>>b;
// cout<<"The sum of two values = ";
// sum(a,b);
// //   cout<<mult(2, 5, 2);
// cout<<"Enter the three value for multiplex : ";
// cin>>c>>d>>e;
// cout<<"The three value of multiplex is = "<<mult(c, d, e);
//   return 0;
// }

// Inside declaration

// #include<iostream>
// using namespace std;
// class student
// {
//     private:
//     int roll;
//     float id;
//     char name[15];
//     public:
//     void get_data()
//     {
//         cout<<"Enter the Roll no. : ";
//         cin>>roll;
//         cout<<"Enter the id no. : ";
//         cin>>id;
//         cout<<"Enter the name : ";
//         cin>>name;
//     }
//     void display_data(){
//         cout<<"The Roll number is : "<<roll<<endl;
//         cout<<"The ID number is : "<<id<<endl;
//         cout<<"The name is : "<<name<<endl;
//     }
// };
// int main()
// {
//     student abc;
//     abc.get_data();
//     abc.display_data();
//     return 0;
// }

// Outside declaration

// #include<iostream>
// using namespace std;
// class employee
// {
//     private:
//     int id;
//     char name[15];
//     float sal;
//     public:
//     void get_data();
//     void display_data();
// };
// void employee::get_data(){
//     cout<<"Enter ID number : ";
//     cin>>id;
//     cout<<"Enter employee name : ";
//     cin>>name;
//     cout<<"Enter employee salary : ";
//     cin>>sal;
// }
// void employee::display_data(){
//     cout<<"The employee ID is : "<<id<<endl;
//     cout<<"The employee name is : "<<name<<endl;
//     cout<<"The employee salary is : "<<sal<<endl;
// }
// int main()
// {
//     employee xyz;
//     xyz.get_data();
//     xyz.display_data();
//     return 0;
// }

// Problem

// #include<iostream>
// using namespace std;
// class solution
// {
//     int p, r, t;
//     float si;
//     public:
//     void input(){
//         cout<<"\n Enter the value of p, r and t : ";
//         cin>>p>>r>>t;
//     }
//     void interest(){
//         si=(p*r*t)/100;
//     }
//     void display(){
//         cout<<"\n The simple interet : "<<si;
//     }
// };
// int main()
// {
//     solution x;
//     x.input();
//     x.interest();
//     x.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class solution
// {
//     int a, b, c;
//     public:
//     void input(){
//         cout<<"Enter three no. : ";
//         cin>>a>>b>>c;
//     }
//     void check(){
//         if(a>b&&a>c){
//             cout<<"First no. is the largest no. "<<a<<endl;
//         }
//         else if(b>c){
//             cout<<"Secont no. is the larges no. "<<b<<endl;
//         }
//         else{
//             cout<<"Third no.is the largest no. "<<c<<endl;
//         }
//     }
// };
// int main()
// {
//     solution x;
//     x.input();
//     x.check();
//     return 0;
// }

// contstructor

// #include<iostream>
// using namespace std;
// class solution{
//     private:
//     float ar, pi, r;
//     public:
//     solution(){
//         cout<<"find the area of circle "<<endl;
//         pi=3.14;
//         r=6.4;
//     }
//     void cal_display(){
//         ar=pi*r*r;
//         cout<<"The area of circle is "<<ar;
//     }
// };
// int main()
// {
//     solution x;
//     x.cal_display();
//     return 0;
// }

// find the herons formula using constructor (outside)

// #include<iostream>
// #include<math.h>
// using namespace std;
// class herons{
//     private:
//     int a, b, c;
//     float s, ar;
//     public:
//     herons();
//     void calculate();
//     void display();    
// };
// herons::herons(){       //constructor declaration
//     a=5;
//     b=4;
//     c=3;
// }
// void herons::calculate(){
//     s=(a+b+c)/2;
//     ar=sqrt(s*(s-a)*(s-b)*(s-c));    
// }
// void herons::display(){
//     cout<<"The out put of herons formula is : "<<ar<<endl;
// }
// int main()
// {
//     cout<<"code start hear"<<endl;
//     herons x;
//     x.calculate();
//     x.display();
//     cout<<"code end hear";
//     return 0;
// }


// Constructor overloading

// #include<iostream>
// using namespace std;
// class abc
// {
//     public:
//     abc();
//     abc(int);
//     abc(float);
//     abc(int, float);
// };
// abc::abc(){
//     cout<<"\n Print the default constructor ";
// }
// abc::abc(int a){
//     cout<<"\n Print the parameterized contructor ";
//     cout<<a;
// }
// abc::abc(float b){
//     cout<<"\n Print the parameterized of b ";
//     cout<<b;
// }
// abc::abc(int m, float n){
//     cout<<"\n Print the value of m and n  ";
//     cout<<m<<n;
// }
// int main()
// {
//     abc obj;
//     abc(10);
//     // abc(15.9); error through
//     abc(10, 22.2);    
//     return 0;
// }

// code for class

// #include<iostream>
// using namespace std;
// class obj
// {
//     public:
//     void disp(){
//         cout<<"This is the example of class :"<<endl;
//     }
//     void display(){
//         cout<<"This is the another message for class ";
//     }
// };
// int main()
// {
//     obj x;
//     x.disp();
//     x.display();
//     return 0;
// }

