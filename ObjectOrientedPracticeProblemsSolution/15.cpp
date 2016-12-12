//Problem number 15
/*
  Create a class called point with two integer attributes such as x and y to  represent its x coordintate and y coordintate.Provide constructor to initialize the attributes.Provide another method named as move() which will move the coordintates only in the direction of x-axis for 10 unit at a time.Also display the new and old values of the coordintates.*/
#include <iostream>
using namespace std;
class point
{
  int x,y;
public:
  point(int a,int b) : x(a),y(b){}
  void move(int c)
  {
    x = c;
  }
  void display()
  {
    cout << "X and Y coordintates are (" << x << "," << y << ")" <<endl;
  }
};
int main()
{
  point a(5,5);
  a.display();
  a.move(10);
  a.display();
}
