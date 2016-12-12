//Problem number 19
/*Write a program to overload the pre-increment and post increment operators in a same program using non member operator functions.*/
#include <iostream>
using namespace std;
class Box {
  int x,y,z;
public:
  void getdata(int a,int b,int c) {x = a;y = b;z = c;}
  void showdata()
  {
    cout << "x: " << x << " y: " << y << " z = " << z << endl;
  }
  void operator ++()
  {
    x = ++x;
    y = ++y;
    z = ++z;
  }
  void operator ++(int)
  {
    x = ++x;
    y = ++y;
    z = ++z;
  }
};
int main()
{
  Box b;
  b.getdata(1,2,3);
  ++b;
  b.showdata();
  b.getdata(2,3,4);
  b++;
  b.showdata();
}
