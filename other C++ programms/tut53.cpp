// "THIS" POINTER IN CPP

#include<iostream>;
using namespace std;

class p{
int x;
public:
p & setdata(int x){
   // x=x;// here the output will come as a garbage value as the compiler gets confused as we have same formal and actual parameters 
   this->x=x;//"THIS" is a pointer which will store address of the object which is calling this member function of the class and it keeps on updating when a new object will invoke this then it will store address of that address 


// this is also used to return the object for which this memeber function is running after being invoked 
         return *this; // derefrencing "THIS" WILL GIVE THE OBJECT ITSELF WHICH IN INVOKING THIS MEMBER FUNCTION

}
void displaydata(){
    cout<<"the value is "<<x<<endl;

}

};
int main(){
    p a;
    a.setdata(4).displaydata();// since now setdata function is returning the object so we can write like this
    // a.displaydata();

return 0;
}