#include<iostream>;
using namespace std;
int main(){
// what is a pointer --> data types which holds the address of other data types
int a=3;
int* b=&a;
b=&a;
// &-->(address of) operator 
cout<<"the address of a is "<<&a<<endl;
cout<<"the address of a is "<<b<<endl;
// *--> (value at) operator
cout<<"the value stored at address b is"<<*b<<endl;


// POINTER TO POINTER--> pointer which stores address of other pointers
int** c=&b;
c=&b;
cout<<"the address of b is"<<&b<<endl;
cout<<"the address of b is"<<c<<endl;
cout<<"the value stored at address of c is "<<*c<<endl;
cout<<"the value stored at value_at(value_at(c))is "<<**c<<endl;
return 0;
}