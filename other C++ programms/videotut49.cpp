/*
Initialization list in Constructors :-
sytntax for initialization list in constructor -
constructor(arguments):initialization-section{
    values assignment+other code;
}

eg-
class test{
private:
int a,b;
public:
test(int i,int j):a(i),b(j){
   // "code"//
}

};

*/
#include<iostream>;
using namespace std;

class test{
private:
int a,b;
public:
// test(int i,int j):a(i),b(j)//--->accpetable
// test(int i,int j):a(i),b(j)//--->accpetable
// test(int i,int j):a(i),b(i+j)//--->accpetable
// test(int i,int j):a(i),b(2*j)//--->accpetable
// test(int i,int j):a(i),b(a*j)//--->accpetable
// test(int i,int j):b(j),a(i+b)// not acceptable "a" will give garbage value as "a" is declared first as the class variable so it has to be aslo initialize first
// if we want to initialize "b" first then we have to declare it first and "a" second
//also;
test(int i,int j)
{a=i;b=j;//this will aslo initialize a and b
 cout<<"constructor executed"<<endl;
 cout<<"the value of a is : "<<a<<endl;
 cout<<"the value of b is : "<<b<<endl; 
}

};

int main(){
test t1(4,6);
return 0;
}