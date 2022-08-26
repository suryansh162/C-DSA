// #include<iostream>;
// using namespace std;

// int product(int x,int y){
//     return x*y;
// }

// int main(){
// int a, b;
// cout<<"enter the value of a and b"<< endl;
// cin>>a>>b;
// cout<<"the product of a and b is "<<product(a,b)<<endl;

// return 0;
// }

// // now if here we will call the product function again and again in the main function then it will go the product function and copy value of actual
// // parameters to formal parameters and then run that product function and suppose if we have done it for 20 time then this process will repeat itself 20
// // times again and again and the time taken to execute the program will add up and increase in a long run and to do this for a product function is
// // is slight overhead so instead we will introduce "inline function" here which will execute the product function when it is called then and there
// // in the same line and will not repect the whole process to go and copy vales of arguments and to return value it again and again will start returning
// // the value in the same line the function is being called inside the main function which will  save the execution time if in a long run the
// // function is called again and again as the compiler will replace the call of the function with the code of that function in the run time of the compiler itself

// // only those type of function are made inline which are very small like of just 2 or 3 line
// // if we make big(lenthy) functions inline then it will increase the cache memory as it will increase the program size in memory as it will copy that big(lenthy)
// // function in the program again and again
// // in recursion and in static variables inline functions are not used
// function may or may not make the function inline its upto the compiler its a request we make to the compiler
// // static variable means--->A VARIABLE IN WHICH IT INITIALIZE THE VALUE OF THE VARIABLE ONLY ONCE AND THEN IT WILL RETAIN THAT VALUE AND WILL NOT SHOW ANY CHANGE IN IT

// #include <iostream>;
// using namespace std;

// inline int product(int x, int y)
// {
//     return x * y;
// }

// int main()
// {
//     int a, b;
//     cout << "enter the value of a and b" << endl;
//     cin >> a >> b;
//     cout << "the product of a and b is " << product(a, b) << endl;
//     cout << "the product of a and b is " << product(a, b) << endl;
//     cout << "the product of a and b is " << product(a, b) << endl;
//     cout << "the product of a and b is " << product(a, b) << endl;
//     cout << "the product of a and b is " << product(a, b) << endl;
//     cout << "the product of a and b is " << product(a, b) << endl;
//     cout << "the product of a and b is " << product(a, b) << endl;
//     cout << "the product of a and b is " << product(a, b) << endl;
//     cout << "the product of a and b is " << product(a, b) << endl;
//     cout << "the product of a and b is " << product(a, b) << endl;
//     cout << "the product of a and b is " << product(a, b) << endl;
//     cout << "the product of a and b is " << product(a, b) << endl;
//     cout << "the product of a and b is " << product(a, b) << endl;
//     cout << "the product of a and b is " << product(a, b) << endl;
//     cout << "the product of a and b is " << product(a, b) << endl;

//     return 0;
// }

//**************default and constant arguments*****************
#include <iostream>;
using namespace std;

float moneyrecieved(int currentmoney, float factor = 1.04)//----> the default arguments should be in the extreme right 
{
    return currentmoney * factor;
}

int main()
{
    int money = 100000;
    cout << "the money recieved after one year will be " << moneyrecieved(money) << endl;//----> HERE WE HAVEN'T GIVEN ANY VALUE FOR ARGUMENT(FACTOR) SO IT WILL USE DEFAULT VALUE DECALARED IN ABOVE "moneyrecieved" function
    cout << "FOR VIP:the money recieved after one year will be " << moneyrecieved(money, 1.10) << endl;//--->  HERE WE GIVEN ANY VALUE FOR ARGUMENT(FACTOR) SO IT WILL USE VALUE GIVEN HERE

    return 0;
}

// WHEN WE DONT WANT MODIFICATION OF ARGUMENT INSIDE THE FUNCTION THEN WE USE CONSTANT ARGUMENTS 
// int stren(const char *P)----> here we want to calculate the length of the string but without any change in the string so we use const for that.


// static variable means--->A VARIABLE IN WHICH IT INITIALIZE THE VALUE OF THE VARIABLE ONLY ONCE AND THEN IT WILL RETAIN THAT VALUE AND WILL NOT SHOW ANY CHANGE IN IT

// #include<iostream>;
// using namespace std;

// int product(int x,int y){
//     static int c=0;// this line will execute only once
//     c=c+1;// next time this function is runned the value of c is retained
//     return x*y+c;
// }

// int main(){
// int a, b;
// cout<<"enter the value of a and b"<< endl;
// cin>>a>>b;
// cout<<"the product of a and b is "<<product(a,b)<<endl;
// cout<<"the product of a and b is "<<product(a,b)<<endl;
// cout<<"the product of a and b is "<<product(a,b)<<endl;
// cout<<"the product of a and b is "<<product(a,b)<<endl;
// cout<<"the product of a and b is "<<product(a,b)<<endl;
// cout<<"the product of a and b is "<<product(a,b)<<endl;
// cout<<"the product of a and b is "<<product(a,b)<<endl;
// cout<<"the product of a and b is "<<product(a,b)<<endl;
// cout<<"the product of a and b is "<<product(a,b)<<endl;
// cout<<"the product of a and b is "<<product(a,b)<<endl;
// cout<<"the product of a and b is "<<product(a,b)<<endl;

// return 0;
// }