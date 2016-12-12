//Problem number 14
/*
Create a class called Area which contains method called “find_area”. Write down appropriate code to creat objects named as Circle and Rectangle of the above class and implement function overloading to calculate area of a rectangle and area of a circle based upon user input. */

#include <iostream>
using namespace std;
class Area
{
public:
  float find_area(int a)
  {
    return (3.14*a*a);
  }
  int find_area(int a,int b)
  {
    return (a*b);
  }
};
int main()
{
  int r,i,b;
  cout << "Enter the value of r, i & b: ";
  cin >> r>> i>>b;
  Area rectangle,circle;
  cout << "Area of circle is " << circle.find_area(r) << endl;
  cout << "Area of rectangle is " << rectangle.find_area(i,b) << endl;
}
