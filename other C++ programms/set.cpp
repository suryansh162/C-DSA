#include<bits/stdc++.h>
using namespace std;
void print(set<string> &s1){
    cout<<"size:"<<s1.size()<<endl;
    for(auto value:s1){
    cout<<value<<" ";
    }
    cout<<endl;
    // for(auto it= s.begin();it!=s.end();it++)  --->alternative way
    // {
    //     cout<<(*it)<<" ";
    // }

}
int main(){
set<string> s1;// it will print string in a lexiographical order that is in sorted order
// s.insert("abc");
// s.insert("abd");
// s.insert("vbc");
// s.insert("bcc");
// s.insert("ac");
// // s.insert("abc");--->same as maps sets also stores unique values it will be printed once

// print(s);

// s.erase("abc");//-->if we pass any string to erase function it will erase that string in the set
// auto it=s.find("abc");//--->this will erase string value stored in iterator
// if(it!=s.end())// only run loop for valid string
// {
// s.erase(*it);
// }
//  print(s);

//if we have to find any string in the set
// auto it=s.find("abc");--->this will return iterator pointing "abc" and if there is no such iterator it will return no value
//if(it!=s.end()){
// cout<<(*it);
// }


// question on set
//  given N strings , print unique strings in lexiographical order 
// n<=10^5
// |S|<=100
int N;
cin>>N;
for (int i = 0; i <N; i++)
{
    string s;
    cin>>s;
    s1.insert(s);}
// for(string value:s1){ --->alternative way
//     cout<<value<<endl;

// }
print(s1);

return 0;
}