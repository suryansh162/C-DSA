#include<iostream>;
using namespace std;

class complex{
    int a,b;
    public:
    // creating a constructor
    // constructor is a special member function with same name as of the class it is used to initialize the objects of its class
    // it is declared inside public area(section) of a class
    // it is automatically invoked whenever an object is created
    // in construction return type is not important it just has to be have same name as of the class
    // default constructors are the ones who takes no parameter
    // they do not have return types
    //It can have default arguments
    // we cannot refer to their address  

    complex(void);// ----> declaration of the constrctors(this is a example of default constructor and it takes no parameters )
     void printnumber(){
         cout<<"the value of number is :"<<a<<" + "<<b<<" i "<<endl;

     }


};
complex::complex(){    //--->this is how we define a constructor function (here it is initializing the objects of its class)
    a= 4; //--->here we have to initialize there variables with some value otherwise it will store garbage value inside it
    b=3;//--->here we have to initialize there variables with some value otherwise it will store garbage value inside it

    // cout<<"this is a complex number "<<endl;// yaha likhne se printnumber ke pehle print hoga 
}


int main(){
    complex c1,c2;// --->here they are automatically invoked as the object is created
    c1.printnumber();
    cout<<"this is a complex number "<<endl; // yaha likhne se printnumber ke baad print hoga 
    // c2.printnumber();

return 0;
}