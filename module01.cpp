/* Introduction:

Hello, and welcome to my C++ basics tutorial. 
Here, I will explain how various programming aspects work in the C++ language,
including variables, expressions, and conditionals, alongside the use of loops,
functions, classes, and lists. */

#include <iostream>
//the two imports below will contain built-in functions that I will use for
//demonstrating lists near the end
#include <list>
#include <iterator>

//allows me to more freely input code without having to also input "std::" everywhere.
using namespace std;

/* Variables:

In most programming languages, a variable is a container that stores a data value.
In C++, "int" is a variable that can store any integer or whole number, "float" is 
a variable that can store any float value or decimal number, and "char" is a variable 
that can store alphabetical characters or strings. Below, I will create each of the 
three aforementioned variables, store values in them, and then recall them. */

//my function for demonstrating variables
void variable_tutorial()
{
    cout << "VARIABLES:" << endl;

    //declares the variable and stores a number inside of it
    int whole_number = 5;

    //notice how I can call the variable itself in this print statement
    cout << "Integer variable: " << whole_number << endl;

    //similar to declaring int, but a float can store either an integer, or a decimal
    float decimal_number = 6.4;
    cout << "Floating variable: " << decimal_number << endl;

    //char variables are tricky because they're meant to usually only hold one
    //character. So I'm assigning it a size in square brackets, and using a loop
    //to output all characters saved in the variable.
    char word[5] = "bruh";
    cout << "Character variable: ";
    //here's where it loops
    for (int i = 0; i < 5; i++)
    {
        cout << word[i];
    }
    cout << endl;
}

/* Expressions:

In C++, an Expression is a sequence of operands and operators that can be used for a variety
of reasons. A very simple one that I will demonstrate is the use of Conditional Expressions
through mathematics. */

//my function for demonstrating expressions
void expressions_tutorial()
{
    cout << endl << "EXPRESSIONS:" << endl;

    //declares a variable and saves a sum to it
    int addition = (6 + 4);
    //outputs the sum when the variable is called
    cout << "Addition: 6 + 4 = " << addition << endl;

    //declares a variable and saves a difference to it
    int subtraction = (17 - 8);
    //outputs the difference when the variable is called
    cout << "Subtraction: 17 - 8 = " << subtraction << endl;

    //declares a variable and saves a product to it
    int multiplication = (8 * 8);
    //outputs the product when the variable is called
    cout << "Multiplication: 8 * 8 = " << multiplication << endl;

    //declares a variable and saves a quotient to it
    int division = (10 / 2);
    //outputs the quotient when the variable is called
    cout << "Division: 10 / 2 = " << division << endl;
}

/* Conditionals:
Just like many other languages, C++ utilizes conditionals to produce varying outcomes.
Below, I will use a few if statements to showcase this. */

//my function for demonstrating conditionals
void conditionals_tutorial()
{
    cout << endl << "CONDITIONALS" << endl;

    //these three variables will be used throughout this function
    int value1 = 8;
    int value2 = 6;
    int value3 = 4;

    cout << "Conditional 1:" << endl;
    //the output of the following if statement is based on the value of the variables
    //passed into it.
    if (value1 == value2)
    {
        cout << "The first and second variables are equal." << endl;
    }
    //the final else statement does not need conditions; it just means "do this if all
    //previous if statements failed".
    else
    {
        cout << "The first and second variables are not equal." << endl;
    }

    cout << "Conditional 2:" << endl;
    //should the first if turn out to be false, the next else if will run
    if (value1 <= value2)
    {
        cout << "The first variable is smaller than, or equal to the second." << endl;
    }
    //else ifs can be used to present any number of possibilities between the first if,
    //and the final else
    else if (value1 <= value1)
    {
        cout << "A variable is less than or equal to itself" << endl;
    }
    else
    {
        cout << "Bruh" << endl;
    }
}

/* Lists:
A list is a container that can store non-contiguous memory. When compared to other
data structures like vectors, lists take a longer time for the computer to read through,
but can easily and efficiently insert and delete entries. */

//the function for lists will simply declare how it works instead. The actual output will
//come through the main() function.
void list_tutorial(list<int> g)
{
    list<int>::iterator i;
    for (i = g.begin(); i != g.end(); ++i)
        cout << " " << *i;
    cout << endl;
}

/* Classes:
The last thing I will showcase here will be classes. A class, on the surface, seems similar
to a function, but more meant specifically to allow main() to create multiple objects from
the attributes and methods laid out within the class. */

//This class will define attributes that can be used by main(). We will be building laptops
//using this groundwork.
class class_tutorial
{
    //in C++, its necessary to declare what type of access a class is allowed to have
    public:
    string model;
    string developer;
    string color;
    string operating_system;
};

//main() is meant to bring it all together, and call all functions within the program.
int main()
{
    //notice how I can call a previously created funciton within main()
    variable_tutorial();
    expressions_tutorial();
    conditionals_tutorial();

    //the main() function will have to do some things with the list_tutorial in order
    //to demonstrate a functioning list.
    cout << endl << "LISTS:";
    list<int> list1;
    for (int i = 0; i <= 9; i++)
    {
        list1.push_back(i);
    }
    //outputs the list, and does a number of things to it
    cout << endl << "Full list: ";
    list_tutorial(list1);
    cout << "First item of list: " << list1.front() << endl;
    cout << "Last item of list: " << list1.back() << endl;
    cout << "Full list with first item removed: ";
    list1.pop_front();
    list_tutorial(list1);
    cout << "Now with last item removed: ";
    list1.pop_back();
    list_tutorial(list1);
    cout << "Now backwards: ";
    list1.reverse();
    list_tutorial(list1);


    cout << endl << "CLASSES:" << endl;

    //build first pc
    class_tutorial pc1;
    pc1.model = "HP";
    pc1.developer = "Microsoft";
    pc1.color = "black";
    pc1.operating_system = "Windows";

    //build second pc
    class_tutorial pc2;
    pc2.model = "Macbook";
    pc2.developer = "Apple";
    pc2.color = "white";
    pc2.operating_system = "MacOS";

    //now let's print it
    cout << "Our first laptop is a " << pc1.color << " " << pc1.model << " made by " << pc1.developer << " that runs on " << pc1.operating_system << endl;
    cout << "Our second laptop is a " << pc2.color << " " << pc2.model << " made by " << pc2.developer << " that runs on " << pc2.operating_system << endl;
}