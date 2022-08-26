#include<iostream>;
using namespace std;
class simple{
 int a;
 int b;
 int c;
 public: 
 simple(int x,int y=7,int z=5){// here we are giving default value of y is 7 so if we dont give any value to it then it will automatically take value we have given (here 7)
     a=x;
     b=y;
     c=z;

 }
 void display(){
     cout<<"the value is "<<a<<","<<b<<" and "<<c<<endl;

 }

};

int main(){
    simple s1(1,3);
    s1.display();
    simple s2(4);
    s2.display();// here we have only given the value of a and not b so it will take the default value of b which we have earlier declared in the constructor 
    simple s3(1,2,3);// here we have given value of c so it will print that value otherwise it will print the default value of the constuctor
    s3.display();

return 0;
}