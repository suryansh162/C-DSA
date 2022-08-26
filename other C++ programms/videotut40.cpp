// multilevel inheritance 
//a--->b--->c
/* 
1) if we are inheriting b from a and c from b i.e,//a--->b--->c then
[1]a is base class for b and b is base class for c
[2]//a--->b--->c is called inheritance path


*/
#include<iostream>;
using namespace std;
class student{
    protected:
    int roll_number;
    public:
    void setdata(int);
    void getdata(void);
   
};
void student::setdata(int x)
{
    roll_number=x;
}
void student::getdata(){
    cout<<"the roll number of the student is :"<<roll_number<<endl;

}
class exam:public student{
    protected:
    float maths;
    float physics;
    public:
    void getmarks(float,float);
    void displaymarks(void);
};

void exam::getmarks(float m1,float m2){
    maths=m1;
    physics=m2;

}
void exam::displaymarks(){
    cout<<"the marks of maths is :"<<maths<<endl;
    cout<<"the marks of physics is "<<physics<<endl;
}

class result:public exam{
    float percentage;
    public:
   
    void displayresult(void);
};

void result::displayresult(){
    void setdata();
    void getmarks();
    //void getdata();
   // void dispalymarks();---->we can also write here like this and if we write like this then in main function we just need to set the values in; by calling void setdata(); and  void getmarks(); and then call void displayresult(); 
    cout<<"your result percentage is : "<<(maths+physics)/2<<" % "<<endl;

}

int main(){
// student s1;
// s1.setdata(66);
// s1.getdata();
// exam e1;
// e1.getmarks(92.56,88.76);
// e1.displaymarks();
// result r1;
// r1.displayresult();-----------> this may not be the right way to call function in main...... we should do this by start calling tha last class we had made

result harry;
harry.setdata(420);
harry.getdata();
harry.getmarks(95.3,94.7);
harry.displaymarks();
harry.displayresult();






return 0;
}