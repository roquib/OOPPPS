//Problem number 17
/* Write a program to overload binary operator + to find sum of two number using friend function*/
#include <iostream>
using namespace std;
class A{
  int a;
public:
  void getdata(int x) { a= x;}
  friend void operator + (A obj1,A obj2);
};
void operator +(A obj1,A obj2)
{
  A temp;
  temp.a = obj1.a + obj2.a;
  cout << "Addition of " << obj1.a << " and " << obj2.a << " is " << temp.a << endl;
}
int main()
{
  A x1;
  A x2;
  x1.getdata(20);
  x2.getdata(30);
  x1+x2;
}
