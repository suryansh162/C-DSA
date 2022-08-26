// VIRTUAL FUNCTION--> PREVIOUSLY WE HAVE LEARNT THAT IF WE MAKE A BASE CLASS POINTER THEN WE CAN ONLY DISPLAY FUNCTIONS OF BASE CLASS FROM IT AND IF WE WANT TO DISPLAY FUNCTIONS OF DERIVED CLASS THEN WE HAVE TO MAKE A SEPARATE POINTER OF 
//                     DERIVED CLASS THEN IT WILL DISPLAY THEM ..................BUT
// HERE IN THIS CONCEPT OF VIRTUAL FUNCTIONS IF WE MAKE THE FUNCTION(here display) OF BASE CLASS AS VIRTUAL THEN WITH BASE CLASS POINTER WE CAN DISPLAY FUNCTION OF DERIVED CLASS ALSO  

// BASICALLY IT IS DEFAULT BEHAVIOUR OF THE BASE CLASS POINTER THAT EVEN IF THE DISPLAY FUNCTION OF DERIVED CLASS IS INVOKED IT WILL PRINT DISPLAY FUNCTION OF BASE CLASS

// BUT IF WE WRITE "virtual" BEFORE THE DISPLAY FUNCTION OF BASE CLASS THEN IT WILL MAKE IT A VIRTUAL FUNCTION AND THEN POINTER OF BASE CLASS CAN ALSO PRINT DISPLAY FUNCTION OF DERIVED CLASS
// in virtual function the binding of the object to the member function of class is done at the run time but that dosent mean that desicion is also taken at run time it could be taken at compile time also
#include<iostream>;
using namespace std;


class base{
    public:
    int var_base=55;
   virtual void display()// writing "virtual" before function will made the pointer of base class run the display function of derived class
   {
        cout<<"the value of var_base is :"<<var_base<<endl;

    }
};
class derived:public base{
           public:
           int var_derived=10;
           void display(){
               cout<<"the value of var_base is : "<<var_base<<endl;
               cout<<"the value of var_derived is : "<<var_derived<<endl;

           }
};


int main(){
base*pointer_base;
base objbase;
derived objderived;
pointer_base=&objderived;
// pointer_base->var_base=25;
pointer_base->display();
return 0;
}