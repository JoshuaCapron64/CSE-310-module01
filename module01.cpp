#include <iostream>

using namespace std;

/*
Hello, and welcome to my C++ basics tutorial. 
Here, I will explain how various programming aspects work in the C++ language, including variables, expressions, conditionals, loops, functions, classes, and lists.
*/


/*
Variables:

In most programming languages, a variable is a container that stores a data value.
In C++, "int" is a variable that can store any integer or whole number, "float" is a variable that can store any float value or decimal number, and "char" is a variable that can store alphabetical characters or strings.
Below, I will create each of the three aforementioned variables, store values in them, and then recall them.
*/

//this will be my function for demonstrating variables
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
    for (int i = 0; i < 5; i++)
    {
        cout << word[i];
    }
    cout << endl;
}

/*
Expressions:

In C++, an Expression is a sequence of operands and operators that can be used for a variety
of reasons. A very simple one that I will demonstrate is the use of mathematics.
*/

//this will be my function for demonstrating expressions
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

//main() is meant to bring it all together, and call all functions within the program.
int main()
{
    //notice how I can call a previously created funciton within main()
    variable_tutorial();
    expressions_tutorial();
}