
//iterators by range based loops

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// vector<int>v={1,2,3,4,5};
// for (int i = 0; i < v.size(); i++)
// {
//     cout<<v[i]<<" ";
// }
// cout<<endl;
// vector<int>::iterator it;
// for (int value : v) //-->this is a range-based loops we need not to pass the index value of the vector
// // this is a copy of actual value but if we change values in 'value' it will not reflected change in 'v' or make a real change in output
// {
//     cout<<value<<" ";
// }


// for(int &value:v)// this will transfer actual values from "v" to values to "values' and not copies of it 
// // so now if we make changes in "value" vector it will aslo change values in vector "v" or make a real change in output
// {
//     // value++;-->now like this we can change values in vector "values" and it will reflect changes in vector "v" or make a real change in output
//  cout<<value<<endl;
// }
// cout<<endl;

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// vector<pair<int,int>>vp={{1,2},{3,4},{5,6}};
// for(pair<int,int> &value:vp)
// {
//     cout<<value.first<<" "<<value.second<<endl; 

// }
// auto keywords automatically determine the data type of the values assigned to the variables
// auto a=1;------> using auto keyword compiler will automatically assume "a" as integer  
//cout<<a<<endl;-->this will print value of "a"
//using auto keyword 

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5};
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for (auto it= v.begin();it!=v.end() ; it++)// use of auto keyword here will reduce the need of declaration of iterator it 
    {
        cout<<(*it)<<" "<<endl;
    }
    vector<pair<int,int>> vp={{1,2},{3,4},{5,6}};  // use of &value(range loop) and auto keyword will save writing long loop and declaring data types of vector pair
    for (auto &value:vp)  // use of &value(range loop) and auto keyword will save writing long loop and declaring data types of vector pair
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
    
    
    


return 0;
}