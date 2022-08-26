#include<iostream>;
#include<fstream>;
/*
THE USEFUL CLASSES WHICH HELPS US TO WORK WITH FILES IN C++ ARE:
1)fstreambase
2)ifstream -->derived from fstreambase
3)ofstream -->derived from fstreambase

in order to work with files we first have to open the files
and there are 2 ways to open the files :-
1)using constructor
2)using member function open() of the class
*/


using namespace std;
int main(){
    // writing in a file using a constructor                       // syntax
    // string st="this is a write file" ;                          datatype(here string) name_of_the_variable(here st) = initializing_value_to_the_variable;
    // ofstream write("samplewrite60.txt");                        ofstream(constructor used for writing in file) name_of_the_object("file name");
    // write<<st; // works just line cout -->writes to a file      name_of_the_constructor<<name_of_the_variable(here st);

    // this is a read file                                             // syntax
     string st2 ;                                                     // datatype(here string) name_of_the_variable(here st2); 
    ifstream read ("sampleread60.txt");                               //ifstream(constructor used for reading file) name_of_the_object("file name")
    // read>>st2; //name_of_the_constructor>>name_of_the_variable(here st2)   ---->this will only read the string till a "space" or a next line comes    // works just line cin                                                     
    getline(read,st2);// getline(object_name,string_name)              //this is used to print all the string in the single line of that 1st line even after spaces between word . for now line we have to more getline same like this 
    cout<<st2;                                                        //used for printing it in the output

return 0;
}