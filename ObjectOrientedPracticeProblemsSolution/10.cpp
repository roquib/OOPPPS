//Problem number 10
/*Write the definition for a class called time that has hours and minutes as integer. The class has the following member functions:
void settime(int, int) to set the specified value in object
void showtime() to display time object
time sum(time) to sum two time object & return time
1. Write the definitions for each of the above member functions.
2. Write main function to create three time objects. Set the value in two objects and call sum() to calculate sum and assign it in third object. Display all time objects. */
#include<iostream>
using namespace std;
class TIME
{
private:
  int hours;
  int minutes;
public:
  void settime(int h, int m)
  {
    hours=h; minutes=m;
  }
  TIME sum(TIME);
  void showtime();
};
TIME TIME::sum(TIME TM)
{
  TIME t;
  t.minutes = minutes + TM.minutes;
  t.hours=t.minutes/60;
  t.minutes=t.minutes%60;
  t.hours += hours + TM.hours;
  return t;
}
void TIME::showtime()
{
  cout<<hours<<" hours and "<<minutes<<" minutes"<<endl;
}
int main()
{
  TIME T1,T2,T3;
  T1.settime(2,45);
  T2.settime(3,30);
  T3=T1.sum(T2);
  cout<<"\n Time 1 : ";T1.showtime();
  cout<<"\n Time 2 : ";T2.showtime();
  cout<<"\n Time 3 : ";T3.showtime();
  return 0;
}
