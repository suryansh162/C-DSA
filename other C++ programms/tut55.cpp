#include<iostream>;
using namespace std;

class base{
    public:
    int var_base;
    void display(){
        cout<<"the value of var_base is :"<<var_base<<endl;

    }
};
class derived:public base{
           public:
           int var_derived;
           void display(){
               cout<<"the value of var_base is : "<<var_base<<endl;
               cout<<"the value of var_derived is : "<<var_derived<<endl;

           }
};

int main(){
    //syntax
    //class_name(here base)*pointer_name;
    //class base object_name;
    //class derived object_name;
    //pointer_name(of class base)=&object_name(of class derived)
    //pointer name->public variable of base class;
    //poinetr name->calling display functiom of base class();
    base*base_pointer;//here we had made a pointer of base class and this pointer will run functions of only base class and not derived class 
    base objbase;// making an object of base class
    derived objderived;// making an object of derived class
    base_pointer=&objderived;//->this is how we can point on object of derived class with the help of pointer of base class 

    base_pointer->var_base=34;//initializing value of base class variable with base class pointer
    // base_pointer->var_derived;--> a base pointer cant access members of derived class and only have access of base class member function
    base_pointer->display();// invoking function of base class 

    //syntax
    //class_name(here derived)*pointer_name;
    //pointer_name(of class derived)=&object_name(of class derived)
    //pointer_name->base class public_variable;
    //pointer_name->derived class public_variable;
    //pointer_name->invoking display function of derived class;
    // if we want to invoke the varibales of derived class then we have to separately make a pointer of derived class because the pointer of base class which is pointing
    //the object of derived class won't invoke the members of derived class as it is just allowed to access the members of base class and outside it whatever is there its none of its business

    derived*derived_pointer;//making pointer of derived class
    derived_pointer=&objderived;//pointing it to object of derived class
    derived_pointer->var_base=45;////initializing value of base class variable with derived class pointer
    derived_pointer->var_derived=145;//initializing value of derived class variable with derived class pointer
    derived_pointer->display();// invoking function of derived class 



return 0;
}