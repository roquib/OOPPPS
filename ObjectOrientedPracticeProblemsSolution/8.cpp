//Problem number 8
/*Write the definition for a class called complex that has floating point data members for storing real and imaginary parts. The class has the following member functions:
void set(float, float) to set the specified value in object
void disp() to display complex number object
complex sum(complex) to sum two complex numbers & return complex number
1. Write the definitions for each of the above member functions.
2. Write main function to create three complex number objects. Set the value in two objects and call sum() to calculate sum and assign it in third object. Display all complex numbers.*/
#include<iostream>
using namespace std;
class complex
{
private:
  float x;
  float y;
public:
  void set(float real, float img)
  {
    x=real; y=img;
  }
  complex sum(complex);
  void disp();
};

complex complex::sum(complex C)
{
  complex t;
  t.x = x + C.x;
  t.y = y + C.y;
  return t;
}

void complex::disp()
{
  cout<<x<<" + i"<<y<<endl;
}
int main()
{
  complex C1,C2,C3;
  C1.set(2.5,7.1);
  C2.set(4.2,5.5);
  C3=C1.sum(C2);
  cout<<"\n complex Number 1 = ";C1.disp();
  cout<<"\n complex Number 2 = ";C2.disp();
  cout<<"\n complex Number 3 = ";C3.disp();
 return 0;
}
