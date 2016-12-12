#include <iostream>
using namespace std;

class Polygon {
  protected:
    int width, height;
  public:
    void set_values (int a, int b)
      { width=a; height=b;}
  virtual int calculate_area() = 0;
 };

class Rectangle: public Polygon {
  public:
    int calculate_area()
      { return width * height; }
 };

class Triangle: public Polygon {
  public:
    int calculate_area()
      { return width * height / 2; }
  };
  
int main () {
  Polygon *obj1 = new Rectangle;
  Polygon *obj2 = new Triangle;
  obj1->set_values(4,5);
  cout << "Area of Rectangle is " << obj1->calculate_area() << endl;
  obj2->set_values(4,5);
  cout << "Area of Triangle is " << obj2->calculate_area() << endl;
  return 0;
}
