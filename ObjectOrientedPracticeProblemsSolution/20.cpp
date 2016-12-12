//Problem number 20
/*
Create a class called Volume which contains a method called "find_vol".Write down appropriate code to create objects named as sphere and cylinder of the above class and implement function overloading to calculate volume of a sphere and cylinder based upon user input.
 */
#include <iostream>
using namespace std;
class Volume
{
public:
  float find_vol(int a)
  {
    return ((4/3.0)*3.14*a*a*a);
  }
  float find_vol(int r,int h)
  {
    return (3.14*r*r*h);
  }
};
int main()
{
  int r,h;
  cout << "Enter the value of radius& height: ";
  cin >> r>>h;
  Volume sphere,cylinder;
  cout << "volume of sphere is " << sphere.find_vol(r) << endl;
  cout << "volume of cylinder is " << cylinder.find_vol(r,h) << endl;
}
