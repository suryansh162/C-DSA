
// //************example 1**************
// #include<iostream>;
// using namespace std;
// class T;
// class x{
//     int a;
//     friend void sumofobjects(x,T);
//     public:
//     void setdata(int x){
//         a=x;

//     }
// };
//     class T{
//     int b;
//     friend void sumofobjects(x,T);
//     public:
//     void setdata(int y){
//         b=y;

//     }
// };
//  void sumofobjects(x O1, T O2){
//      cout<<" the sum of two data is "<<(O1.a+O2.b)<<endl;

//  }

// int main(){
//     x a1;
//     a1.setdata(5);
//     T a2;
//     a2.setdata(7);
//    sumofobjects(a1,a2);

// return 0;
// }

//**************EXAMPLE 2****************
#include <iostream>;
using namespace std;
class y;

class x
{
    int val1;
    friend void swap(x &, y &);

public:
    void setdata(int a)
    {
        val1=a ;
    }
    void displaydata()
    {
        cout << val1 << endl;
    }
};
class y
{
    int val2;
    friend void swap(x &, y &);

public:
    void setdata(int b)
    {
        val2=b ;
    }
    void displaydata()
    {
        cout << val2 << endl;
    }
    };

    void swap(x &o1, y &o2)
    {
        int temp1 = o1.val1;
        o1.val1 = o2.val2;
        o2.val2 = temp1;
    }

    int main()
    {
        x a1;
        a1.setdata(32);
        a1.displaydata();
        y a2;
        a2.setdata(67);
        a2.displaydata();
        swap(a1, a2);
        cout << "the value of x after swap will become " << endl;
         a1.displaydata(); 
        cout << "the value of y after swap will become " << endl;
        a2.displaydata();

        return 0;
  }