//Read/Write in the Same Program & Closing Files 
#include<iostream>;
#include<fstream>;
using namespace std;
int main(){
// write program

// creating a 'st' string and filling it with the string enterd by the user
    string st;
    string st2;

    // connecting our file with write stream
    ofstream write("samplewrite60.txt");
    cout<<"hello how are you ";
    cin>>st;
    write<<"i am " + st; // adding a string in write file 
    write.close();// closing the connecting link between the write steam and file
   
    
    ifstream read("samplewrite60.txt");
    // read>>st2;
    getline(read,st2);
    cout<<"the content in the read file is : "<<st2<<endl;
      read.close();



      // at the same time reading and writing the same program file






return 0;
}
