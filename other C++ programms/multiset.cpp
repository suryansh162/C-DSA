// duplicates are allowed in multiset
#include<bits/stdc++.h>
using namespace std;
void print(multiset<string> &s){
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
multiset<string> s;// it will print the duplicates also and will print in sorted manner
s.insert("abc");
s.insert("abd");
s.insert("vbc");
s.insert("bcc");
s.insert("ac");
s.insert("abc");
s.insert("abc");
s.insert("abc");
// s.erase("abc");//will completely delete all "abc" from the set
auto it =s.find("abc");//will only delete one "abc" which iterator is pointing and not its duplicates
if(it!=s.end()){
    s.erase(it);
    // s.erase(*it)--->it will aslo completely delete all "abc" from the set
}


print(s);
return 0;}