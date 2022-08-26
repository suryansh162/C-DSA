#include<iostream>;
using namespace std;

class complex{
    int a, b;
    public:
    void setcomplex(int x, int y){
        a=x;
        b=y;

    }
    friend complex sumcomplex(complex,complex); // ---> this is called declaration for a friend function
    void display(){
        cout<<"your complex number is "<<a<<" + "<<b<<" i "<<endl;

    }

};
complex sumcomplex(complex c1, complex c2){  // ---> this is how a friend function made
    complex c3;
    c3.setcomplex((c1.a+c2.a),(c1.b+c2.b));
    return c3;
}

int main(){
    complex c1,c2,sum;
    c1.setcomplex(5,3);
    c1.display();

    c2.setcomplex(5,5);
    c2.display();

    sum=sumcomplex(c1,c2);
    sum.display();

return 0;
}
  

  /* properties of a friend function:-

  1)it is not in the scope of class it just can have allowance to access the private members .
  2)it cant call them in main function from the object of the class.
  3) can be invoke(call) without help of any object.
  4) usually contains objects as arguments.
  5) it will always return a value (in form of the data type it was built in).
  6)can be declared inside public or private section of the parts
  7) it cant access members directly by their name and need object_name.member_name 
  to access any member(function).   */ 