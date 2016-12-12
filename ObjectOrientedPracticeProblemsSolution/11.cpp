//Problem number 11
/*Answer the questions (i) and (iii) after going through the following class:

class Seminar
{
    int time;
public:
    Seminar()        //Function 1
    {
        time = 30;
        cout << "Seminar starts now" << endl;
    }

    void lecture()        //Function 2
    {
        cout << "Lectures in the seminar on" << endl;
    }

    Seminar(int duration)        //Function 3
    {
        time = duration;
        cout << "Seminar starts now" << endl;
    }

    ~Seminar()        //Function 4
    {
        cout << "Thanks" << endl;
    }
};
i. Write statements in C++ that would execute Function 1 and Function 3 of class Seminar.

ii. In Object Oriented Programming, what is Function 4 referred as and when does it get invoked/called?

iii. In Object Oriented Programming, which concept is illustrated by Function 1 and Function 3 together?*/
/*
ANSWER:
IN MAIN() function:
i.
Seminar s1;    // Execute funtion 1
Seminar s2(20);  //Execute function 3

ii.
Destructor, it is invoked as soon as the scope of the object
gets over.

iii.
Constructor Overloading (Polymorphism)
*/

