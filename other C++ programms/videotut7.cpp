#include<iostream>
using namespace std;

int c=45;

int main(){
   //*************************BULID IN DATA TYPES******************** 
// int a, b, c;
// cout<<"Enter the value of a"<<endl;
// cin>>a;
// cout<<"Enter the value of b"<<endl;
// cin>>b;
// c= a+b;
// cout<<"the sum is "<<c<<endl;
// cout<<"the global c is"<<::c; 
// if we want to print the value of global c in the output then we have to use '::' sign before the variable 


//******************FLOAT DOUBLE AND LONG DOUBLE LITERALS*****************
// float d=34.4F;
// long double e=34.4L;
// cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;
// cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl;
// cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl;
// cout<<"the size of 34.4l is "<<sizeof(34.4l)<<endl;
// cout<<"the size of 34.4L is "<<sizeof(34.4L)<<endl;



//*********************REFERENCE VARIABLES****************

// float X=162;
// float & Y=X;
// cout<<"the value of X is"<<X<<endl;
// cout<<"the value of Y is"<<Y<<endl;


//***********typecasting**************
int a= 45;
float b=45.46;
cout<<"the value of a is "<<int(a)<<endl;
cout<<"the value of a is "<<(int)a<<endl;
cout<<"the value of b is "<<float(b)<<endl;
cout<<"the value of b is "<<(float)b<<endl;
cout<<"the value of b is"<<int(b)<<endl;
cout<<"the value of b is "<<(int)b<<endl;

int c=int(b);

cout<<"the expression is"<<a+b<<endl; 
cout<<"the expression is"<<a+(int)b<<endl; 
cout<<"the expression is"<<a+int(b)<<endl; 
cout<<"the expression is"<<a+float(b)<<endl; 
cout<<"the expression is"<<a+(float)b<<endl; 

return 0;



}