//Problem number 12
/*Answer the questions (i) and (ii) after going through the following class:

class Test
{
    char paper[20];
    int marks;
public:
    Test ()    // Function 1
    {
        strcpy (paper, "Computer");
        marks = 0;
    }
	
    Test (char p[])    // Function 2
    {
        strcpy(paper, p);
        marks = 0;
    }
	
    Test (int m)    // Function 3
    {
        strcpy(paper,"Computer");
        marks = m;
    }
	
    Test (char p[], int m)    // Function 4
    {
        strcpy (paper, p);
        marks = m;
    }
};

i. Write statements in C++ that would execute Function 1, Function 2, Function 3 and Function 4 of class Test.

ii. Which feature of Object Oriented Programming is demonstrated using Function 1, Function 2, Function 3 and Function 4 together in the above class Test?*/





Answer:
/*
i.
Test t1;  // Execute funtion 1
Test t2("English"); // Execute funtion 2
Test t3(50); // Execute funtion 3
Test t4("Maths",49); // Execute funtion 4

ii.
Constructor Overloading (Polymorphism)*/
