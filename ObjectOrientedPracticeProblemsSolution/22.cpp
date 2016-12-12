//Problem number 22
/*
Create an abstract class called Shape which contains a pure function called find_vol() and a protected attribute named as volume.Create two new derived classes from the above class named as Cube and Sphere having double type attribute named as side and radius respectively.
Implement dynamic polymorphism to find out volume of a cube and a Sphere.Also display the result.
*/
#include <iostream>
using namespace std;
class Shape{
public:
 virtual void find_vol() = 0;
  Shape(int c) : volume(c) {}
protected:
  double volume;
};
class Cube : public Shape{
  double side;
public:
  Cube(int a) : Shape(a) {side = a;}
  void find_vol() { cout << "Volume of Cube is  "<< side*side*side << endl;}
};
class Sphere : public Shape{
  double radius;
public:
  Sphere(int b) : Shape(b){radius = b;}
  void find_vol() { cout << "Volume of Sphere is " << (4/3.0)*3.14*radius*radius*radius << endl;}
};
int main()
{
  Shape *bptr = new Cube(2);
  bptr->find_vol();
  Shape *s = new Sphere(3);
  s->find_vol();
}
