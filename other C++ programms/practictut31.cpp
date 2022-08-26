#include<iostream>;
using namespace std;
// a class can have multiple(more then one ) constructors 
//and the constructor whose argument set which match that constructor will run 
// the program will automatically detect which constructor will match and will run 
class complex{
    int a,b;
    public:
    complex(){
        a=0;
        b=0;
    }
  complex(int x,int y){
      a=x;
      b=y;

    }

    complex(int x){
      a=x;
      b=0;

    }

    void display(){
        cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;

    }

};
int main(){
    complex a1(2,4);// this is called constructor overloading and when we had made by value of a=2,b=4 so the arguments set of the second constructor get matched so it will run 
     a1.display();

     complex a2(5);// this is called constructor overloading and when we had made by default value of b=0 so the arguments set of the third constructor get matched so it will run 
     a2.display();

    complex a3; // this is called constructor overloading and when we had made by default value of a=0,b=0 so the arguments set of the first constructor get matched so it will run 
    a3.display();

return 0;
}