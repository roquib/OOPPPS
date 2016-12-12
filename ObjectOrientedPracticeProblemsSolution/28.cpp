//Program number 28
/*Write a program to read two double type numbers from keyboard and a function to calculate the division of these two numbers.A try block to throw an exception when wrong type of data is entered and another try Block to throw an exception if the condition "Division occurs".Appropriate catch block to handle the exception thrown.*/
#include <iostream>
using namespace std;
void division(double a,double b)
{
  try{
    if(b != 0)
      cout << (a/b) << endl;
    else
      throw b;
  }
  catch (double b) { cout << "Division occurs" << endl;}
}
int main()
{
  double x, y;
  try{
    if(!(cin >> x >> y))
      throw x;
  }
  catch (double i)
    {
      cout << "Wrong data type" << endl;
    }
  division(x,y);
}
