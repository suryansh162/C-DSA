#include<bits/stdc++.h>
using namespace std;
void print(unordered_set<string> &s){
    cout<<"size:"<<s.size()<<endl;
    for(string value:s){
    cout<<value<<" ";
    }
    cout<<endl;
    // for(auto it= s.begin();it!=s.end();it++)  --->alternative way
    // {
    //     cout<<(*it)<<" ";
    // }

}
int main(){
unordered_set<string> s;// it will print string not in a lexiographical order that is not in sorted order
// we cant keep unordered_set<set<int>> and unordered_set<pair<int,int>> here just like as in unorderd maps just basic data types can be stored as their # functions in not defined in their(unorderd) library
s.insert("abc");
s.insert("abd");
s.insert("vbc");
s.insert("bcc");
s.insert("ac");
print(s);
return 0;}