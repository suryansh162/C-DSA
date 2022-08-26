#include <iostream>;
using namespace std;
// static variables are also as called class variables becuase when we make any variable static inside class then it will be common for all objects of the class
// like in this example we have made "count" as the static vairable so each pbject will now not have their own count insted they will share a common count like when we call a new object it will not start from 0 insted it will just update the previous value of the count written recently
// static variable is ,ade only once but is shared by all the objects of the class 

class employee
{
    int ID;
    static int count;

public:
    void employeeID()
    {
        cout << "Enter the ID of employee " << endl;
        cin >> ID;
        //cout++;  <--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    }                                                                                                                                                                                                   //|
    void displayID()                                                                                                                                                                                    //|
    {                                                                                                                                                                                                   //|
        cout << "the ID of the employee is " << ID << " and this is employee number " << count+1 << endl;                                                                                               //|
        count++;// if we write "count++" here in "void displayID()" then we have to erite "count+1" in the "cout<<" inside "void displayID()" but if we write (count++) it after "cin>>" inside "void employeeID()" then we dont have to write it like this ("count+1")
    }
    static void getcount(){      //---> this is a static function and it only has access of the static variable and not any other variable of the class and the speciallity of this function is that
                                // these static functions can be called inside main function just by the reference of the class and without having any object s 
        //cout<<ID;//---> since its a non static variable so its in accessable in the static function
        cout<<"the value of count of employee is "<<count<<endl;
    }
};

int employee ::count; // default value is zero so if you want to initialize its value then you have to initialize it (say 1000) here in this line by writing like "int employee :: count == 1000"

int main()
{

    employee harry, rohan, krrish;
    // harry.ID;     ----> this line will not run and will throw error as these are private members of the class
    // harry.COUNT;  ----> this line will not run and will throw error as these are private members of the class
    harry.employeeID();
    harry.displayID();
    employee::getcount(); // this is how static functins can be called without object reference and just by name of the class 

    rohan.employeeID();
    rohan.displayID();
    employee::getcount();// this is how static functins can be called without object reference and just by name of the class 

    krrish.employeeID();
    krrish.displayID();
    employee::getcount();// this is how static functins can be called without object reference and just by name of the class 
    return 0;
}