// videotut 42 exercise soln
#include<iostream>;
#include<cmath>;
using namespace std;
class simplecalc{
    int a,b;
    public:
    void setsimple(void){
       cout<<"enter the value of a :"<<endl;
       cin>>a;
       cout<<"enter the value of b :"<<endl;
       cin>>b;
    }
    void getsimple(void){
        cout<<"the sum of two numbers is :"<<a+b<<endl;
        cout<<"the difference of two numbers is :"<<a-b<<endl;
        cout<<"the product of two numbers is :"<<a*b<<endl;
        cout<<"the division of two numbers is :"<<a/b<<endl;
}
};
class scientificcalc{
     int c;
    public:
    void setscientific(void){
       cout<<"enter the value of c :"<<endl;
       cin>>c;
    }
    void getscientific(void){
        cout<<"the sin of c is  :"<<sin(c)<<endl;
        cout<<"the cos of c is  :"<<cos(c)<<endl;
        cout<<"the tan of c is  :"<<tan(c)<<endl;
        cout<<"the exponential of c is  :"<<exp(c)<<endl;
}
};
class hybridcalc:public simplecalc,public scientificcalc{
      public:
      void display(void){
          cout<<"the calculations are :"<<endl;
        //   void getsimple(void);
        //   void getscientific(void);

      }
};

int main(){
    hybridcalc h1;
    h1.setsimple();
    h1.setscientific();
    h1.display();
    h1.getsimple();
    h1.getscientific();

return 0;
}

