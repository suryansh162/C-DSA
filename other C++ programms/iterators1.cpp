#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5};
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //iterators

    // vector<int>::iterator it=v.begin();
    //v.begain()-->it will point first element of the container
    //v.end()-->it will point next to last element of the container
    //it++--->incriment to next element(mor preferable)
    //it+1--->incriment to next memory location
    // cout<<(*it);// to print 1st element of the vector
    // cout<<(*it+1);// to print 2nd element of the vector and so on....
    // for ( it=v.begin(); it!=v.end();it++)
    // {
    //     cout<<(*it)<<endl;

    // }

    //iterators for vector pair
    vector<pair<int,int>>vp={{1,2},{3,4},{5,6}};
    vector<pair<int,int>>::iterator it;
    for(it=vp.begin();it!=vp.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
        // cout<<(it->first)<<" "<<(it->second)<<endl; --->also acceptable
    }
    

return 0;
}