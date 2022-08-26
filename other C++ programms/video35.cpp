// distructors are use in complicate c++
// it is used to free up dynamic memory which holded up by the constructors
//it dosent take any value(argument) 
//it dosent return any value
//it is written as "~class_name" 
// basically when compiller feels that some object is no more required then it will call destructor
// a block is something like if it is exected and we come out of it the objects inside it will get destroyed by calling a destructor
#include<iostream>;
using namespace std;
int count=0;
class num{
    public:
    num(){
        count++;
        cout<<"this is the time when constructor is called for number"<<count<<endl;
    }
    ~num(){
        
        cout<<"this is the time when destructor is called for number"<<count<<endl;
        count--;

    }

};
int main(){
    cout<<"we enterd the main function"<<endl;
    cout<<"we are creating our first object"<<endl;
    num n1;//whenever object is invoked the statment inside constructor function will run(here for object n1)
    //------>this is what called a block mentioned above
   {
    cout<<"we enterd the block"<<endl;
    cout<<"we are creating two more objects"<<endl;
    num n2,n3;//whenever object is invoked the statment inside constructor function will run(here for object n2&n3)
    cout<<"we are exiting this block"<<endl;
   }// here as we came out of the block so the objects inside the block will get destroyed and the statments inside the function of destructor will run for object n2 and n3
cout<<"we are back inside main function"<<endl;// now here n1 will get destroy so destructor for object n1 will be invoked
return 0;
}