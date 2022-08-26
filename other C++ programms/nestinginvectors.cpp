//************STORING PAIRS IN VECTORS************
// // method - 1 to achive this 
// #include<bits/stdc++.h>
// using namespace std;

// void printvec(vector<pair<int,int>> v){
//     cout<<"size:"<<v.size()<<endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i].first<<" "<<v[i].second<<endl;
//     }
//     cout<<endl;
// }

// int main(){
// vector<pair<int,int>> v={{1,2},{2,3},{3,4}}; //with initial declaration
// printvec(v);

// return 0;
// }


// method - 2 to achive this 
// #include<bits/stdc++.h>
// using namespace std;

// void printvec(vector<pair<int,int>> v){
//     cout<<"size:"<<v.size()<<endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i].first<<" "<<v[i].second<<endl;
//     }
//     cout<<endl;
// }

// int main(){
// vector<pair<int,int>> v;//with no initial declaration and taken size and vector pair elements as input
// int x;
// cin>>x;
// for (int i = 0; i <x; i++)
// {
//     int a,b;
//     cin>>a>>b;
//     // v.push_back({a,b});// also acceptable
//     v.push_back(make_pair(a,b)); // also acceptable
// }

// printvec(v);

// return 0;
// }


// *************ARRAY OF VECTORS******************

// #include<bits/stdc++.h>
// using namespace std;

// void printvec(vector<int> v){
//     cout<<"size:"<<v.size()<<endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i];
//     }
//     cout<<endl;
// }

// int main(){
//     int N;
//     cin>>N;
// vector<int> v[N]; // this is an array of vectors 
// for (int i = 0; i <N; i++)
// {
//     int x;
//     cin>>x;
//     for (int j = 0; j <x; j++)
//     {
//         int y;
//         cin>>y;
//         v[i].push_back(y);
        
//     }
    
// }
// for (int i = 0; i < N; i++)
// {
// printvec(v[i]);   
// }

// return 0;
// }

////*******VECTOR OF VECTOR**********

#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int> &v)//-->here we have to write "&v" as to not pass the copy of vector 'v' but to pass the actual vector 'v' as if copy will pass it will reflect no change 
{
    cout<<"size : "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int N;
    cin>>N;
vector<vector<int>> v; // this is an vector of vectors 
for (int i = 0; i <N; i++)
{
    int x;
    cin>>x;
    vector<int>temp;// here we are making a vector temp in which we are storing vectors in the vector 
   // v.push_back(vector<int>());-->also acceptable as it is adding a empty vector which was not there so due to this now we can directly add elements in the 'v[i]' position of the vector 
    for (int j = 0; j <x; j++)
    {
        int y;
        cin>>y;
        temp.push_back(y);// adding elements in the temp vector
        //v[i].push_back(y)---> also acceptable
    }
    v.push_back(temp);// taking temp vector as an argument to add them in the main vector
    
}
for (int i = 0; i < v.size(); i++)
{
printvec(v[i]);
}
//v[0][0]--->this will point to zeroth element of vector at zeroth position inside vector

return 0;
}

