/*

syntax for multiple inheritance 

class derived: visibility-mode base1,visibility-mode base2{
    class body of this class
}; 


    IMP--> TI IS NOT NECESSARY THAT THE DERIVED CLASS IN A MULTIPLE INHERITANCE IS MADE OF 2 BASE CLASSES IT COULD BE MORE THEN 2 BASE CLASSES USED TO MAKE A DERIVED CLASS IN MULTIPLE INHERITANCE
*/

#include<iostream>;
using namespace std;

class base1{
    protected:
    int data1;
    public:
    void setdata1(int a){
        data1=a;
    }

};
class base2{
    protected:
    int data2;
    public:
    void setdata2(int b){
        data2=b;

    }


};

class derived:public base1,public base2{
    public:
    void show(){
        cout<<"the value of data 1 is "<<data1<<endl;
        cout<<"the value of data 2 is "<<data2<<endl;
        cout<<"the value of sum of data 1 & 2 is "<<data2+data1<<endl;

    }
};
/* the above inherited derived class will look like this:
data members(variavles):-
data1--->protected
data2--->protected

member functions :-
d.setdata1(25);--->public
d.setdata2(5);--->public
d.show()--->public
*/

int main(){
derived d;
d.setdata1(25);
d.setdata2(5);
d.show();

return 0;
}






/*
 IMP--> TI IS NOT NECESSARY THAT THE DERIVED CLASS IN A MULTIPLE INHERITANCE IS MADE OF 2 BASE CLASSES IT COULD BE MORE THEN 2 BASE CLASSES USED TO MAKE A DERIVED CLASS IN MULTIPLE INHERITANCE

LIKE THIS --->


 #include<iostream>;
using namespace std;

class base1{
    protected:
    int data1;
    public:
    void setdata1(int a){
        data1=a;
    }

};
class base2{
    protected:
    int data2;
    public:
    void setdata2(int b){
        data2=b;

    }


};

class base3{
    protected:
    int data3;
    public:
    void setdata3(int c){
        data3=c;

    }
    };

class derived:public base1,public base2,public base3{
    public:
    void show(){
        cout<<"the value of data 1 is "<<data1<<endl;
        cout<<"the value of data 2 is "<<data2<<endl;
        cout<<"the value of data 3 is "<<data3<<endl;
        cout<<"the value of sum of data 1 ,2 & 3 is "<<data2+data1+data3<<endl;

    }
};


int main(){
derived d;
d.setdata1(25);
d.setdata2(5);
d.setdata3(5);
d.show();

return 0;
}


*/