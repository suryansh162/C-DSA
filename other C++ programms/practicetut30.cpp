//**************EXAMPLE 1*****************

// #include<iostream>;
// using namespace std;
//  class complex{
//      int a,b;
//      public:
//      complex(int x,int y);//declaring a parametrized contstructor with 2 variables
//      void printnumber(){
//           cout<<"the value of number is :"<<a<<" + "<<b<<" i "<<endl;
//      }
//  };
//  complex::complex(int x, int y){   // this is parametrized contstructor with 2 variables
//      a=x;
//      b=y;

//  }

// int main(){
//     // a parameterized constructor can be called by 2 types:-
//     //this is an implicit call
//     complex c1(4,8);
//     c1.printnumber();

//     //this is an explicit call
//     complex c2=complex(5,9);
//     c2.printnumber();

// return 0;
// }

//******************EXAMPLE 2*********************
#include<iostream>;
using namespace std;
class point{
      int a,b;
      public:
      point(int x, int y){
          a=x;
          b=y;

      }
      void displaypoint(){
          cout<<"your point is :("<<a<<","<<b<<")"<<endl;
      }

};

int main(){
    point p1(1,3);// implicit call
    p1.displaypoint();
    point p2=point (5,8);// explicit call
    p2.displaypoint();

return 0;
}