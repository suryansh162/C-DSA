// ///***************array of objects************************

// #include<iostream>;
// using namespace std;
 
//  class employee{
//      int ID;
//      int salary;
//      public:
//      void setdata(void){
//          salary=10000;
//          cout<<"ENTER THE ID OF THE EMPLOYEE "<<endl;
//          cin>>ID;

//      }
//      void getdata(void){
//          cout<<"THE ID OF THE EMPLOYEE IS "<<ID<<endl;
//          cout<<"THE SALARY OF EMPLOYEE IS "<<salary<<endl;

//      }
//  };
// int main(){
//  employee reliance[4];
//  for (int i = 0; i < 4; i++)
//  {
//    reliance[i].setdata();
//    reliance[i].getdata();
//  }
 

// return 0;
// }


// *******************Passing Objects as Function Arguments *********************
#include<iostream>;
using namespace std;

class complex {
    int a;
    int b;
    public:
    void setdata(int x,int y){
        a=x;
        b=y;
    }
    void sumcomplex(complex c1,complex c2){ 
        a=c1.a+c2.a;
        b=c1.b+c2.b;
    }
    void printsum(){
        cout<<"the number is "<<a<< " + i "<<b<<endl;
    }
};

int main(){
    complex c1,c2,c3;
    c1.setdata(1,2);
    c1.printsum();
    c2.setdata(3,8);
    c2.printsum();
    c3.sumcomplex(c1,c2);
    c3.printsum();


return 0;
}