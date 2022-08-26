//there are two type of header files:
// 1) system header files: it comes with thw complier.
// eg-
 #include<iostream>
// 2) user defined header files: is is defined by the user.
// eg-#include"here.h" but for this the path of "here.h" should be defined in the directory.
using namespace std;
int main(){
    int a=10,b=5;
    cout<<"this is hello world program"<<endl;
    cout<<"operators in c++"<<endl;
    cout<<"following are the type of operators in c++"<<endl;
    //1) Arithmatic operators:-
    cout<<"the value of a+b is = "<<a+b<<endl;
    cout<<"the value of a-b is = "<<a-b<<endl;
    cout<<"the value of a*b is = "<<a*b<<endl;
    cout<<"the value of a%b is = "<<a%b<<endl;
    cout<<"the value of a++ is = "<<a++<<endl;
    cout<<"the value of a-- is = "<<a--<<endl;
    cout<<"the value of ++a is = "<<++a<<endl;
    cout<<"the value of --a is = "<<--a<<endl;
    cout<<"the value of a/b is = "<<a/b<<endl;
    cout<<endl;

    //2)Assignment operator: used to assign values to variables
    // eg- int a=3,b=9;
    //char d= 'd'; 
     
     //3) cpmparison operators: hepls to compare values
     cout<<"FOLLOWING ARE THE COMPARISON OPERATORS IN C++"<<endl;
     cout<<"the value of a == b is"<<(a == b)<<endl;
cout<<"the value of a>b is "<<(a>b)<<endl;
cout<<"the value of a<b is "<<(a<b)<<endl;
cout<<"the value of a>=b is "<<(a>=b)<<endl;
cout<<"the value of a<=b is "<<(a<=b)<<endl;
cout<<"the value of a!=b is "<<(a!=b)<<endl;
cout<<endl;

//logical operators: subpart of comparison operators
 cout<<"FOLLOWING ARE THE LOGICAL OPERATORS IN C++"<<endl;
     cout<<"the value of ((a == b) &&  (a<b)) logical 'and' operator  is"<<((a == b) &&  (a<b)) <<endl;
     cout<<"the value of ((a == b) || (a<b)) logical 'or' operator  is"<<((a == b) ||  (a<b)) <<endl;
cout<<"the value of (!(a == b)) logical 'not' operator  is"<<(!(a == b)) <<endl;









    //\n or endL is used in programme to jump in n
    
    return 0;
}