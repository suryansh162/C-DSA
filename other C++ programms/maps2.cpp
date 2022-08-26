
//unorderd maps- no sorting in keys// no order is maintained
// multimaps- everything is same rather then name "multimap" and other thing is
//here in multimap if we write two key then it will not be updated unlike in maps insted it will simply get printed 2 times
#include<bits/stdc++.h>
using namespace std;
void print(unordered_map<int,string> &m){
    cout<<"size :"<<m.size()<<endl;
    for(auto &pair:m){
        cout<<pair.first<<" "<<pair.second<<endl;
    }
}
int main(){
     unordered_map<int,string> m;//// we cant keep unordered_map<set<int>> and unordered_map<pair<int,int>> here just basic data types can be stored
    m[1]="abc";
    m[5]="cdc";//acceptable
    m[3]="acr";
    m[6]="s";
    m[8]="sds";
    print(m);
    return 0;
}