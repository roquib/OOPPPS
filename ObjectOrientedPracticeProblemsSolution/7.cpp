//Problem number 7
/*Write the definition for a class called Rectangle that has floating point data members length and width. The class has the following member functions:
void setlength(float) to set the length data member
void setwidth(float) to set the width data member
float perimeter() to calculate and return the perimeter of the rectangle
float area() to calculate and return the area of the rectangle
void show() to display the length and width of the rectangle
int sameArea(Rectangle) that has one parameter of type Rectangle. sameArea returns 1 if the two Rectangles have the same area, and returns 0 if they don't.
1. Write the definitions for each of the above member functions.
2. Write main function to create two rectangle objects. Set the length and width of the first rectangle to 5 and 2.5. Set the length     and width of the second rectangle to 5 and 18.9. Display each rectangle and its area and perimeter.
3. Check whether the two Rectangles have the same area and print a message indicating the result. Set the length and width of the     first rectangle to 15 and 6.3. Display each Rectangle and its area and perimeter again. Again, check whether the two     Rectangles have the same area and print a message indicating the result. */
#include<iostream>
using namespace std;
class Rectangle
{
 private:
  float length;
  float width;
 public:
  void setlength(float);
  void setwidth(float);
  float perimeter();
  float area();
  void show();
  int sameArea(Rectangle);
};


void Rectangle::setlength(float len)
{
  length = len;
}

void Rectangle::setwidth(float wid)
{
  width = wid;
}

float Rectangle::perimeter()
{
  return (2 * length + 2 * width);
}

float Rectangle::area()
{
  return length * width;
}

void Rectangle::show()
{
  cout << "Length: " << length << " Width: " << width;
}

int Rectangle::sameArea(Rectangle other)
{
  float areaf = length * width;
  float areas = other.length * other.width;
  if (areaf == areas)
    return 1;
  return 0;
}

int main()
{
  Rectangle first;
  Rectangle second;
  first.setlength(5);
  first.setwidth(2.5);
  second.setlength(5);
  second.setwidth(18.9);
  cout << "First rectangle: ";
  first.show();
  cout << endl << "Area: " << first.area() << "Perimeter: " << first.perimeter() << endl << endl;
  cout << "Second rectangle: ";
  second.show();
  cout << endl << "Area: " << second.area() << "Perimeter: " << second.perimeter() << endl << endl;
  if (first.sameArea(second))
    cout << "Rectangles have the same area\n";
  else
    cout << "Rectangles do not have the same area\n";
  first.setlength(15);
  first.setwidth(6.3);
  cout << "First rectangle: ";
  first.show();
  cout << endl << "Area: " << first.area() << "Perimeter: "<< first.perimeter() << endl << endl;
  cout << "Second rectangle: ";
  second.show();
  cout << endl << "Area: " << second.area() << "Perimeter: "<< second.perimeter() << endl << endl;
  if (first.sameArea(second))
    cout << "Rectangles have the same area\n";
  else
    cout << "Rectangles do not have the same area\n";
  return 0;
}
