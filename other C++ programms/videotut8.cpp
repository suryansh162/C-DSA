#include<iostream>
#include<iomanip>
//  "iomanip" is a header file used for manuplators helps to use setw()
using namespace std;
int main(){
    //*************constants*******
    // int a=8;
    // cout<<"the value of a was "<<a<<endl;
    // a=88;
    // cout<<"the value of a is "<<a<<endl; 
//now if we dont want the value of variable to be changed we will use 'const int' in place of int to define the variable
    //   const int a=8;
    // cout<<"the value of a was "<<a<<endl;
    // a=88;
    // cout<<"the value of a is "<<a<<endl; 
    //we can clearly see that the value of a is unchanged and error occured in the output as 
    //we had used 'const int' so the value wont change.


    //***********manuplators****************
    //operators which helps in data display for eg- endl,\n,setw();etc.
    // int a=3 , b=78, c=165;
    // cout<<"the value of a without setw() is "<<a<<endl;
    // cout<<"the value of b without setw() is "<<b<<endl;
    // cout<<"the value of c without setw() is "<<c<<endl;
    // cout<<"the value of a with setw() is "<<setw(3)<<a<<endl;
    // cout<<"the value of b with setw() is "<<setw(3)<<b<<endl;
    // cout<<"the value of c with setw() is "<<setw(3)<<c<<endl;
    // here by adding "setw()" we are acctually arranging the digits below each other in 
    //a proper manner and 3 is written inside() because the biggest digit number here is 
     //a 3 digit number and is used when expected output is a big number


     //***********operator prescedence***************
        //it is used to decide which operator will be solved first and if presedence is same we will then match for associativity

        int a=3,b=4;
        //int c=(a*5)+b;
        // now we will take another example expression
        int c=((((a*5)+b)-45)+87);   
        cout<<c;    
    return 0;
}