/*Constructors in C++

A constructor is a special member function with the same name as the class. The constructor doesn’t have a return type. Constructors are used to initialize the objects of its class. Constructors are automatically invoked whenever an object is created.

Important Characteristics of Constructors in C++

A constructor should be declared in the public section of the class
They are automatically invoked whenever the object is created
They cannot return values and do not have return types
It can have default arguments
We cannot refer to their address

An example program to demonstrate the concept of the constructor is shown below.

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created

    Complex(void); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void) // ----> This is a default constructor as it takes no parameters
{
    a = 10;
    b = 0;
    // cout<<"Hello world";
}


Code Snippet 1: Constructor Example Program

As shown in a code snippet 1,

1st “complex” class is defined which consists of private data members “a” and “b”.
2nd default constructor of the “complex” class is declared.
3rd function “printNumber” is defined which will print the values of the data members “a” and “b”.
4th default constructor is defined which will assign the values to the data members “a” and “b”. The main things to note here are that whenever a new object will be created this constructor will run and if the parameters are not passed to the constructor it is called a default constructor.
The main program is shown in code snippet 2.

int main()
{
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}
Code Snippet 2: Main Program

As shown in Code Snippet 2,

1st objects “c1”, “c2”, and “c3” of the complex data type are created. The main thing to note here is that when we are creating objects the constructor will run for each object and will assign the values.
2nd function “printNumber” is called by the objects “c1”, “c2”, and “c3”.
The output for the following program is shown in figure 1.



Figure 1: Program Output

As shown in figure 1, whenever a “printNumber” function is called it prints the values which are being assigned through the constructor.


*/