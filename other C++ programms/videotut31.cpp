/*Constructor Overloading in C++
Constructor overloading is a concept in which one class can have multiple constructors with different parameters. The main thing to note here is that the constructors will run according to the arguments for example if a program consists of 3 constructors with 0, 1, and 2 arguments, so if we pass 1 argument to the constructor the compiler will automatically run the constructor which is taking 1 argument. An example program to demonstrate the concept of Constructor overloading in C++ is shown below.
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(){
        a = 0;
        b =0;
    }

    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex(int x){
        a = x;
        b = 0;
    }

  

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};


Code Snippet 1: Constructor Overloading Program Example
As shown in Code Snippet 1,

1st we created a “complex” class which consists of private data members “a” and “b”.
2nd default constructor of the “complex” class is declared which has no parameters and assigns “0” to the data members “a” and “b”.
3rd parameterized constructor of the “complex” class is declared which takes two parameters and assigns values to the data members “a” and “b”.
4th parameterized constructor of the “complex” class is declared which takes one parameter and assigns values to the data members “a” and “b”.
5th function “printNumber” is defined which will print the values of the data members “a” and “b”.
The main program is shown in code snippet 2.

int main()
{
    Complex c1(4, 6);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    Complex c3;
    c3.printNumber();
    return 0;
}
Code Snippet 2: Main Program

As shown in Code Snippet 2,

1st parameterized constructor is called with the object “c1” and the values “4” and “6” are passed. The main thing to note here is that this will run the constructor with two parameters.
2nd function “printNumber” is called which will print the values of data members
3rd parameterized constructor is called with the object “c2” and the value “5” is passed. The main thing to note here is that this will run the constructor with one parameter.
4th function “printNumber” is called which will print the values of data members
5th default constructor is called with the object “c3”. The main thing to note here is that this will run the constructor with no parameters.
6th function “printNumber” is called which will print the values of data members
The output for the following program is shown in figure 1.

Figure 1: Program Output

As shown in figure 1, all the values which were passed and assigned through parameterized constructors and the values which were assigned through the default constructor are printed.
*/