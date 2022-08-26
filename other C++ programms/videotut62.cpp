
//Read/Write in the Same Program & Closing Files  using open() function

#include<iostream>;
#include<fstream>;
#include<string>;
using namespace std;
int main(){
   
    ofstream write;
    write.open("samplewrite60.txt");
    write<<"this is me"<<endl;
    write<<"this is also me"<<endl;
    write<<"this is me also"<<endl;
    write<<"this is me alsii"<<endl;
    write.close();

    ifstream read;
    string st,st1;
    read.open("samplewrite60.txt");
    // read>>st>>st1;
    // cout<<st<<st1;

    while (read.eof()==0)// eof-->end of function and read.eof==0 means we want to read the function till it gets completed
    {
        getline(read,st);
        cout<<st<<endl;
    }
    
    read.close();

return 0;
}