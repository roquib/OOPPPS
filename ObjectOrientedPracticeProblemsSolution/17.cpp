//Problem number 17
/* Write a program to overload binary operator + to find sum of two number using friend function*/
#include <iostream>
using namespace std;
class B;
class A{
  int a;
public:
  void getdata(int x) { a= x;}
  void display_a()
  {
    cout << "Value of a " << a << endl;
  }
  friend void add(A obj,B obj1);
};
class B{
  int b;
public:
  void getdata(int y){ b= y;}
  void display_b(){ cout << "Value of b = " <<  b << endl;}
  friend void add(A obj1,B obj2);
};
void add(A obj1,B obj2)
{
  cout << "Addition of a and b = " << obj1.a+obj2.b << endl;
}
int main()
{
  A x1;
  B x2;
  x1.getdata(20);
  x2.getdata(30);
  add(x1,x2);
}
