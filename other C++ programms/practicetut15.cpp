//************we will talk about function*********
// #include <iostream>;
// using namespace std;
// int sum(int a, int b)
// {
//     int c = a + b;
//     return c;
// }

// int main()
// {
//     int num1, num2;
//     cout << "enter the value of num 1 " << endl;
//     cin >> num1;
//     cout << "enter the value of num 2 " << endl;
//     cin >> num2;
//     cout << "the sum of num1 and num 2 is " << sum(num1, num2) << endl;
//     return 0;
// }

//**************now we will talk about function prototype**************
// syntax
// function_name(arguments)
#include <iostream>;
using namespace std;
// here function prototype comes in roll as here we have not written the sum function so when we try to
// run the program then it will not run as the sum program is written afterwords so we just use function prototyping here
// we will just declare function here and assure the compiler to search for the function downwards and then it will find that funcyion and run it
int sum(int a, int b);
void g(); //-----> accpetable
// so now after this declaration the program will run and compiler will find out the sum function as we
// have assured it
//****different forms of declaration we can give
// int sum(int,int)--->acceptable as these are formal parameters and declaring their data type is enough
// int sum(int a,b)--->not acceptable
int main()
{
    int num1, num2;
    cout << "enter the value of num 1 " << endl;
    cin >> num1;
    cout << "enter the value of num 2 " << endl;
    cin >> num2;
    cout << "the sum of num1 and num 2 is " << sum(num1, num2) << endl;
    g();
    return 0;
}

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// formal parameters here are a and b and will be taking value from actual parameters num 1 and num2
// actual parameters here are num 1 and num 2

// here we used this g() so to get a trick of not writing cout again and again
void g()
{
    cout << "\nhello good morning";
}
