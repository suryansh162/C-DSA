/* case1: 
class d:public classb{};
order of execution of constructor--->first classb then class d.

case 2:
class d: public classb1,public classb2{};
order of execution of constructor--->first classb1 then class b2 then class d.

case 3:
class d:public b1,virtual public b2{};
order of execution of constructor--->virtual class b2 then class b1 then class d

*/
#include<iostream>;
using namespace std;

class base1{
    int data1;
    public :
    base1(int a){
        data1=a;
        cout<<"base1 class constructor called"<<endl;
    }
    void displaydata1(void){
        cout<<"the value of data1 is "<<data1<<endl;
    }

};
class base2{
      int data2;
    public :
    base2(int b){
        data2=b;
        cout<<"base2 class constructor called"<<endl;
    }
    void displaydata2(void){
        cout<<"the value of data2 is "<<data2<<endl;
    }

};
class derived:public base1,public base2{// the order declared here matters as it decide the order in which constructors of base class will be called

     int derived1,derived2;
     public:
     derived(int w,int x,int y,int z):base1(w),base2(x){// the order here dosent matter 
         derived1=y;
         derived2=z;
         cout<<"constructor of derived class called :"<<endl;

     }
     void displayderived(void){
         cout<<"the value of derived 1 is : "<<derived1<<endl;
         cout<<"the value of derived 2 is : "<<derived2<<endl;

     }


};



int main(){
    derived d1(10,11,12,13);
    d1.displaydata1();
    d1.displaydata2();
    d1.displayderived();

return 0;
}