#include<iostream>;
using namespace std;

class complex{
    int real,img;
    public:
    void setdata(int a,int b){
            real=a;
            img=b;

    }
    void getdata(void){
        cout<<"the value of real part is :"<<real<<endl;
        cout<<"the value of img part is :"<<img<<endl;
    }
};

int main(){

// different methods to make object of a class and to call the public functions of the class

//METHOD 1-WITHOUT POINTER

//  complex c1;
//  c1.setdata(7,9);
//  c1.getdata();

//METHOD 2 - WITH POINTER-

//METHOD A-
//// complex *ptr =&c1; //here we are seeing how we can access public member of object with help of pointer
//  (*ptr).setdata(7,9);///-->this is how we are accessing public members of a object by a pointer this will do same work as of c1.setdata(7,9) but by pointer
//  (*ptr).getdata();/////--->this is how we are accessing public members of a object by a pointer this will do same work as of c1.getdata() but by pointer


// //METHOD B-
// complex*ptr=new complex;// another way of making a object of class complex
// (*ptr).setdata(7,9);
// (*ptr).getdata();

//METHOD 3- BY ARROW METHOD
complex(*ptr)= new complex ;
ptr->setdata(7,9);// this arrow will run the setdata() of the class whose  object is pointed in the abover line(here complex)  and will give same output as of the above 3 methods
ptr->getdata();// this arrow will run the getdata() of the class whose  object is pointed in the abover line(here complex) and  will give same output as of the above 3 methods 


//two ways by which we can derefrence a pointer
// 1) (*ptr)
// 2) ptr->


// array of objects - mankin array of abjects with help of pointers and memory space can be access by incrementing the pointers
complex *ptr1= new complex[4];
ptr1->setdata(7,9);
ptr1->getdata();
/* in this example 
here ptr1 will give(point) 1nd object
here ptr1+1 will give(point) 2nd object
here ptr1+2 will give(point) 3rd object
here ptr1+3 will give(point) 4th object.... and so on
*/

return 0;
}