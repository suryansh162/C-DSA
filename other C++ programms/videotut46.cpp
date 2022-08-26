// #include<iostream>;
// using namespace std;
// int main(){

// return 0;
// }




/*
Constructors in Derived Class in C++
We can use constructors in derived classes in C++
If the base class constructor does not have any arguments, there is no need for any constructor in the derived class
But if there are one or more arguments in the base class constructor, derived class need to pass argument to the base class constructor
If both base and derived classes have constructors, base class constructor is executed first
Constructors in Multiple Inheritances

In multiple inheritances, base classes are constructed in the order in which they appear in the class deceleration. For example if there are three classes “A”, “B”, and “C”, and the class “C” is inheriting classes “A” and “B”. If the class “A” is written before class “B” then the constructor of class “A” will be executed first. But if the class “B” is written before class “A” then the constructor of class “B” will be executed first.
In multilevel inheritance, the constructors are executed in the order of inheritance. For example if there are three classes “A”, “B”, and “C”, and the class “B” is inheriting classes “A” and the class “C” is inheriting classes “B”. Then the constructor will run according to the order of inheritance such as the constructor of class “A” will be called first then the constructor of class “B” will be called and at the end constructor of class “C” will be called.
Special Syntax

C++ supports a special syntax for passing arguments to multiple base classes
The constructor of the derived class receives all the arguments at once and then will pass the call to the respective base classes
The body is called after the constructors is finished executing
Syntax Example:



Derived-Constructor (arg1, arg2, arg3….): Base 1-Constructor (arg1,arg2), Base 2-Constructor(arg3,arg4)
{
….
} Base 1-Constructor (arg1,arg2)


Special Case of Virtual Base Class

The constructors for virtual base classes are invoked before a non-virtual base class
If there are multiple virtual base classes, they are invoked in the order declared
Any non-virtual base class are then constructed before the derived class constructor is executed







MY NOTES-
1)IF THERE IS CONSTRUCTOR(WITH NO ARGUMENTS) IN BASE CLASS THEN IF WE MAKE OBJECT OF DERIVED CLASS THEN THE CONSTRUCTOR OF BASE CLASS WILL BE AUTOMATICALLY INVOKED(BY DEFAULT)
2)IF TEHRE IS CONSTRUCTOR (WITH ONE OR MORE ARGUMENTS) IN BASE CLASS THEN IF WE MAKE OBJECT OF DERIVED CLASS THEN WE HAVE TO PASS VALUES THROUGH IT AND IT WILL MAKE BASE CONSTRUCTOR 
3)IF BOTH BASE AND DERIVED CLASS HAS CONSTRUCTOR THEN BASE CLASS CONSTRUCTOR IS CALLED FIRST
4)IN MULTIPLE INHERITANCE THE BASE CONSTRUCTOR ARE CONTRUCTED AND EXECUTED IN THE ORDER THEY ARE WRITTEN WHILE DECLARING DERIVED CLASS
5)IN MULTILEVEL INHERITANCE CONSTRUCTOR WILL BE EXECUTED IN ORDER OF INHERITANCE LEVEL
6)CONSTRUCTOR OF VIRTUAL BASE CLASS ARE INVOKED BEFORE NON VIRTUAL BASE CLASS
7)AMONG THE VIRTUAL BASE CLASS THE PRIORITY WILL BE DECIDED IN ORDER THEY ARE DECLARED IN DERIVED CLASS
8)NON VIRTUAL BASE CLASS ARE CONSTRUCTOR BEFORE DERIVED CLASS

 */
