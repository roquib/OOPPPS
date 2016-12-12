//Problem number 26
/*Write a program to overload unary operator ++ using member function*/
#include<iostream>
using namespace std;
class A
{
  int n;
public:
  void getdata( );
  void operator ++( );
  void display( );
};
void A::getdata( )
{
  cout<<"Enter a number: ";
 cin>>n;
}
void A::operator ++( )
{
  n=n+1;
}
void A::display( )
{
  cout<<n;
}
int main()
{
  A a;
 a.getdata();
 ++a;
 a.display();
}
