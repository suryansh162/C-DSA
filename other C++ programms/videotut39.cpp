// *****************************protected access modifier
#include<iostream>;
using namespace std;
 class base{
     private:
     int x;
     protected://we use protected access modifier when we dont want to give access(as public member) of a variable but want to inheriet to the derived class
     int y;

 };
/*
                       private visibility       public visibility         protected visibility
private members         not inherited             not inherited              not inherited
protected members       private                   protected                  protected
public members          private                   public                     protected
*/        
 class derived:protected base{
// now here we will get
// protected:
//int y
//now this is still protected here but here IT CAN BE ACCESSED BY THE MEMBER FUNCTIONS OF THIS DERIVED CLASS

 };// this is called protected derivation and it is done to inheriet a member/function/variable of a base class without writing it inside public part of the base class


int main(){
    base b;
    derived d;
    // cout<<b.y;---->IN BASE CLASS- procted members cant be accessed just as private they can be just inherited in a derived class and will show same behaviour as private
    // cout<<d.y;----->IN DERIVED CLASS - this will not print as it is protected variable and tha means it will just inheriet in the derived class but we still cant access it anyway 
    ///as we are using derived visibility so "int y" here as become a protected member of derived class so it is just inherited but cant be access
return 0;
}