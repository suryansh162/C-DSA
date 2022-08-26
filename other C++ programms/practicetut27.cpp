
/*
all these points are written in reference to the example of program we have written and for reference it is written in () all over

 here in this tutorial we will going to see and learn about friend classes so in friend classes some of the things to be rememberred are-
1) the class which you are making friend should be written first (here that is "class calculator")
2) we have to give forward declaration of the class just before the friend class(here that is "class complex") about which we mentioned in point [1)]
3) the declaration of the function in the friend class (here that is "class calculator") in which any argument involves variable of class of which this class is friend off ("class complex") should be declared afterwards i.e, after the class of which this class is a friend off and just declare it here and leave and declare it later after that("complex")  class ("class complex")*/

#include <iostream>;
using namespace std;
class complex; //---> this is called forward declaration we have talked about it in point (2) above.
class calculator{ //---> this is what we were talking about in point (1) above.
public:
    int sum(int c, int d)
    {
        return c + d;
    }

    int sumrealcomplex(complex c1, complex c2);
    // cout<<c1.a+c2.a; ----> here this line will throw error as we even if we have declared class complex above by forward declaration but complier still ask for assurance of a variable 'a' and 'b' inside the class complex so we will simply define this after class complex and just declare it here and leave it -----> we have discussed about this in point (3) above.
int sumimgcomplex(complex c1, complex c2);
};

class complex
{
    int a, b;
    // declaring friend functions of another class individually ----> this will work in case of few(1 or 2) functions but if we want to declare say 10,20...100 functions then we can declare whole class as a friend
    // friend int calculator ::sumrealcomplex(complex, complex); //---> this is how we are declaring that function sumreal of class calculator is a friend of class complex and so it can access private members of this class
    // friend int calculator :: sumimgcomplex(complex c1, complex c2);
    
    // declaring whole calculator class as a friend
    friend calculator;
    // also friend class calculator; ---> also acceptable
public:
    void setcomplex(int x, int y)
    {
        a = x;
        b = y;
    }
    void printcomplex()
    {
        cout << "your complex number is " << a << " + " << b << " i " << endl;
    }
};
int calculator::sumrealcomplex(complex c1, complex c2)//---> this is how we are defining the function which was just declared above and left inside class calculator
 { 
     return (c1.a + c2.a);
      } 
int calculator :: sumimgcomplex(complex c3,complex c4){
    return(c3.b+c4.b);
}
int main()
{
    complex o1, o2;
    o1.setcomplex(1, 4);
    o1.printcomplex();
    o2.setcomplex(5, 8);
    o2.printcomplex();
    calculator a1,a2;
    int result = a1.sumrealcomplex(o1, o2);
    cout << "the sum of real parts of the two complex numbers is " << result << endl;
     int resultimg = a1.sumimgcomplex(o1, o2);
    cout << "the sum of imaganery parts of the two complex numbers is " << resultimg << endl;

    return 0;
}