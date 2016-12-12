//Problem 23
/*Suppose there is a class called X with two double type attributes. Write a C++
program to create two objects named ob 1 and ob 2 of the above class and overload the binary ==
operator to perform the following operation within main():
if(ob 1== ob 2)
cout<<”Objects are same”<<endl;
else
cout<<”Objects are different”<<endl;*/
#include<iostream>
using namespace std;
class X
{
  double d1, d2;
public:
  X(double, double);
  bool operator==(X);
  void display( );
};
X::X(double x, double y )
{
  d1=x;
  d2=y;
}
bool X:: operator==(X p)
{
  if(d1==p.d1 &&d2==p.d2)
    return 1;
  else
    return 0;
}
int main()
{
  X ob1(2.5, 3.4), ob2(2.5, 3.0);
  if(ob1== ob2)
    cout<<"Objects are same"<<endl;
  else
    cout<<"Objects are different"<<endl;
}
