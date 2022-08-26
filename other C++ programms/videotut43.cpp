// Ambiguity Resolution in Inheritance
// WHEN WE HAVE 2 OR MORE THAN 2 BASE CLASSES AND A DERIVED CLASS IS FORMING BY IT SO IT RAISE A ISSUE THAT IF THERE ARE SAME INHERITING FUNCTIONS FROM DIFFERENT BASE WHICH CLASS
// THEN WHICH FUNCTION WILL BE USED & EXECUTED IN DERIVED CLASS BY THE COMPLIER AND THIS ISSUE CAM BE RESOLVED BY CONCEPT OF AMBIGUITY RESOLUTION  


#include<iostream>;
using namespace std;

class base1{
    public:
    void greet(){
          cout<<"hello how are you ??";
    }
};

class base2{
    public:
    void greet(){
          cout<<"good morning!!!";
    }
};

// here in the above two classes the "void greet()" sunction is same in both of them so this creates confusion for the compiler when we
// create a derived class inherited from the the two base classes that wich function will run when we make a object of the derived class
// and call the "void greet()" function inside main function so this issue can be resolved by declaring 
// it inside the "void greet()" of the derived  

class derived: public base1,public base2{
     int a;
     public:
     void greet(){
          base1::greet(); // this is declaration that we want to call greet function of class base1 when object of derived is formed and called 
         // base2::greet(); // this is declaration that we want to call greet function of class base2 when object of derived is formed and called 
     }
};

class base3{
    public:
    void say(){
        cout<<"hello world ";

    }
};

class derived2:public base3{
    int z;
    public:
    void say(){
        cout<<"holla peeps!!!";// here the ambiguity(confusion) for the compiler is that if the same function is in class and derived then which function will be printed when object will call the "void say()" so
                            // this will be resolved as when we erite the same function in base and derived class and call it to print then the function in derived class will inherit the 
                            //function in base class  so the function of derived class will beexecuted and the string of derived class will be printed
                            // but if no function is writted in derived class then the function of base class will be executed and printed
    }

};

int main(){

    // derived a;
    // a.greet(); 


// ambiguity type 2 ---> same function in base and derived class
derived2 d2;
d2.say();


return 0;
}