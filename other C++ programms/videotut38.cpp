// // EXAMPLE OF SINGLE INHERITANCE
// #include<iostream>;
// using namespace std;

// class base{
//     int x; // by default is private and this is not inheritable
//      public:
//      int y;
//      void setdata(void);
//      int getdata1(void);// here this function is helpful to us as it can be used to access the int x which is a private member of class base and is inaccessaeble but by calling this function we can use to print it and call it 
//      int getdata2(void);

// };

// void base ::setdata(void){
//     x=10;
//     y=20;
// }
// int base ::getdata1(void){
//     return x;
// }

// int base ::getdata2(void){
//     return y;
// }

// class derived : public base{
//     int z;
//     public:
//     void process(void){
//       z=y*getdata1();
//     }
//     void display(void){
//         cout<<"the value of x is "<<getdata1()<<endl;
//         cout<<"the value of y is "<<y<<endl;
//         cout<<"the value of z is "<<z<<endl;

//     }

// };

// int main(){
//     derived der;
//     der.setdata();
//     der.process();
//     der.display();



// return 0;
// }


////*******NOW AGAIN DOING THE SAME THING BUT WITH PRIVATE VISIBILITY MODE

#include<iostream>;
using namespace std;

class base{
    int x; // by default is private and this is not inheritable
     public:
     int y;
     void setdata(void);
     int getdata1(void);// here this function is helpful to us as it can be used to access the int x which is a private member of class base and is inaccessaeble but by calling this function we can use to print it and call it 
     int getdata2(void);

};

void base ::setdata(void){
    x=10;
    y=20;
}
int base ::getdata1(void){
    return x;
}

int base ::getdata2(void){
    return y;
}

class derived : private base{
    int z;
    public:
    void process(void){
        setdata();//calling setdata inside process as it is aslo a private member of derived class (single inheritance) so it will be executed when we will call process()in main function as we cant call stedata() directly in main (private member of derived)
        // as by doing this we will get same output as when it was public visibility mode
      z=y*getdata1();
    }
    void display(void){
        cout<<"the value of x is "<<getdata1()<<endl;
        cout<<"the value of y is "<<y<<endl;
        cout<<"the value of z is "<<z<<endl;

    }

};

int main(){
    derived der;
    // der.setdata();--->now here we cant call setdata() as it is now private member of the derived class so we will call it under the process function which is public in derived class so then we can call setdata() indirectly
    der.process();
    der.display();



return 0;
}
