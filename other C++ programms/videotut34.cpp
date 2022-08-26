/* copy constructor is a constructor which makes copy/replicate object of one class to another object then we use copy constructors
every class has a default copy constructors and if we try to call it inside main function then complier will first cjeck if we have made its 
function inside the class and if it is then it will run that and if it is not there 
then it will run it supply its own copy constructor

copy constructor is not invoked when we call a object which already been made earlier
but
if we define and invoke the ofject in the same line then it will invoke

*/
#include<iostream>;
using namespace std;

class number{
    int a;
    public:
    number(){
        a=0;//here we have initialized default value i.e, if we give no initialization to the objects below in the main function and still call them by display function then it will print the value we write here (here 0)
    }// we have to make a default constructor its necessary as when the program will run with objects having no initialization then it will try to find out defalut constructor and if it will not able to find it then it will throw error

    number(int x){
        a=x;
    }

    //syntax of copy constructor
    // class_name(class_name_reference[&]_object[whose replica is to be made])


    number(number &obj)//here we are giving reference of the object of that class and by that class and now whatever object we will pass in that bracket it(copy constructor) will reolicate that object
    {
        cout<<"copy constructor called!!!!!"<<endl;     
        a=obj.a;
    }
    // even if we dont write this above function (of copy constructor) then also the line in the main function  number z1(n1)&z1.display(); will run because 
    //every class has a default copy constructors every comlier allocate a default copy constructor to class and if we try to call it inside main function then complier will first check if we have made its 
    // function inside the class and if it is then it will run that and if it is not there 
    // then it will run it supply its own copy constructor

    void display(){
        cout<<"the number is : "<<a<<endl;

    }

};

int main(){
    // number n1(0),n2(45),n3(67);//here we have given initialization only to n1 and if we call it hen it will show 0 but if we call other objects wthout giving then any valur it will show garbage value in the output 
    // n1.display();
    // n2.display();
    // n3.display();
    // //here we have given initialization to all the objects and then called the display function so it will run and show all the given(initialized) values in the output

     number n1(10),n2,n3(7),z2;
      n1.display();
      n2.display();
      n3.display();
                                                             
                                  //now we will see copy constructors
                                 // eg - suppose we want to make a object z1 that exactly resembles n1
                                //   then we will make z1 by making a copy constructor and then passing n1 through it 
                                // same for n2 and n3 will be passed if their replica is made
    number z1(n1);
    z1.display();
    z2=n2;//copy constructor will not called here as we have assigned n2 to a already formed(defined) object
    z2.display();//will not invoke copy constructor
    number z3 = n3;//this will invoke copy contructor
    //if it was forming and defining in the same line then to will invoke the copy constructor
    z3.display();//will invoke copy constructor


return 0;
}