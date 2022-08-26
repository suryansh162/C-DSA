#include<iostream>;
using namespace std;

class student{
protected:
int rollno;
public:
void setroll(int a){
    rollno=a;
}

void displayroll(void){
    cout<<"the roll no is :"<<rollno<<endl;

}

};
class testmarks:virtual public student{

    protected:
    float maths,physics;
    public:
    void setmarks(float m1,float m2){
        maths=m1;
        physics=m2;

    }
    void printmarks(void){
        cout<<"your maths marks is :"<<maths<<endl;
        cout<<"your physics marks is :"<<physics<<endl;

    }
};
class sportsmarks:virtual public student{
    protected:
    float score;
    public:
    void setscore(float s1){
        score =s1;

    }
    void printscore(void){
        cout<<"your pt score is :"<<score<<endl;

    }

};
class result :public testmarks,public sportsmarks{
private:
float totalresult;
public:
void display(void){
    // cout<<"the total result is :"<<maths+physics+score<<endl;
    displayroll();
    printmarks();
    printscore();
    cout<<"the total result is :"<<maths+physics+score<<endl;
}

};

int main(){

    result r1;
    r1.setmarks(78.62,86.76);
    r1.setroll(4200);
    r1.setscore(90);
    r1.display(); // here ambiguity of rollno is resolved of the class student

return 0;
}