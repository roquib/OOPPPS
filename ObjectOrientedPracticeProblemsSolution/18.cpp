//Problem number 18
/*Create an abstract class called Figure which contains a pure virtual function called fnd_area() and a protected attribute named as area. Create two derived classes from the above class named as Circle and Square having double type attribute named as radius and side respectively. Implemented dynamic polymorphism to find out area of a circle and a square and show result. */

#include <iostream>
using namespace std;
class Figure{
public:
 virtual void find_area() = 0;
  Figure(int c) : area(c) {}
protected:
  double area;
};
class Circle : public Figure{
  double radius;
public:
  Circle(int a) : Figure(a) {radius = a;}
  void find_area() { cout << "Area of Circle is  "<< 3.14*radius*radius << endl;}
};
class Square : public Figure{
  double side;
public:
  Square(int b) : Figure(b){side = b;}
  void find_area() { cout << "Area of Square is " << side*side << endl;}
};
int main()
{
  Figure *bptr = new Circle(2);
  bptr->find_area();
  Figure *s = new Square(3);
  s->find_area();
}
