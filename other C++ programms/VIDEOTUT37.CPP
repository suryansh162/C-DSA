#include<iostream>;
using namespace std;
class employee{
    // int ID;
    float salary;
    public:
    int ID;
    employee(int inpID){
        ID=inpID;
        salary=35;

    }
    void display(){
        cout<<"the info is "<<ID<<" & "<<salary<<endl;
    }
    employee(){}
};

//derived class syntax
//derived_class_name:{{visibility_mode}}{{base_class_name}}{
//     class members/methods etc;
// }
// we can inherit class privately and publicly
// if we take visibility mode as private then all public members of base class will become private members of derived class
// if we take visibility mode as public then all public members of base class will become public members of derived class
// we cant inherit private members of a base class in any case it is just public which can be inherited 
// by default visibility mode is private THAT IS IF WE DO NO WRITE ANY VISIBILITY MODE THEN COMPILER WILL RUN IT AS PRIVATE


/// CREATING A PROGRAMMER CLASS DERIVED FROM BASE CLASS EMPLOYEE
 class programmer : public employee{
     public:
    programmer(int inpID){
        ID=inpID;

    }
    int languagecode=9;
    void getdata(){
        cout<<ID<<endl;
    }

 };

int main(){
    employee harry(8);
    harry.display();
    programmer f1(4);
    f1.getdata();
    cout<<f1.ID<<endl;// this line will only run when we make visibility mode as public otherwise not
    cout<<f1.languagecode<<endl;


return 0;
}