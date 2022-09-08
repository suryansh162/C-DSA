
// Lecture19: C++ STL

#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
//***********************************************************************   
// 1) ARRAY ->time complexity -O(1)
//*******************************************
// array<int,4> a = {1,2,3,4};
// int size = a.size();    //method to store size to array
// // prinnting an array
// for (int i = 0; i < size; i++)
// {
//     cout<<a[i]<<" ";
// }
// cout<<endl;
// cout<<"print 2nd element of array : "<<a.at(1)<<endl;
// cout<<"check that array is empty or not -> 1 for empty 0 for non-empty : "<<a.empty()<<endl;
// cout<<"first elemet : "<<a.front()<<endl;
// cout<<"last elemet : "<<a.back()<<endl;



//**************************************************************
// 2)Vector -> time complexity -O(1)
//***************************************************************
// vector<data-type> name(size,intial-value);
// vector<int> v;
// cout<<"Size of vector currently is (total element) : "<<v.size()<<endl;
// cout<<"Capacity of vector currently is (total memory) : "<<v.capacity()<<endl;
// capacity doubles if vector gets full


//pushing elements inside vector
// v.push_back(6);
// cout<<"Size of vector currently is (total element) : "<<v.size()<<endl;
// cout<<"Capacity of vector currently is (total memory) : "<<v.capacity()<<endl;

// v.push_back(7);
// cout<<"Size of vector currently is (total element) : "<<v.size()<<endl;
// cout<<"Capacity of vector currently is (total memory) : "<<v.capacity()<<endl;


// v.push_back(8);
// cout<<"Size of vector currently is (total element) : "<<v.size()<<endl;
// cout<<"Capacity of vector currently is (total memory) : "<<v.capacity()<<endl;

// // vector element at a position
// cout<<"Vector element at 2nd position : "<<v.at(2)<<endl;

// cout<<"first element : "<<v.front()<<endl;
// cout<<"last  element : "<<v.back()<<endl;

// cout<<"before pop : "<<endl; 

//printing the vector
// for (int i : v)
// {
//     cout<<i<<" ";
// }
// cout<<endl;

//will remove an element from back
// v.pop_back();  

// cout<<"after pop : "<<endl; 
// for (int i : v)
// {
//     cout<<i<<" ";
// }

// cout<<endl;
// cout<<"before clearing : "<<v.size()<<endl;

// will empty the vector
// v.clear();

// cout<<"after clearing : "<<v.size()<<endl;


// vector<int> vnew(5,1);
// for(int i : vnew){
//     cout<<i<<" ";
// }



//copying one vector in another
// vector<int> last(vnew);
// for (int i : last)
// {
//     cout<<i<<" ";
// }





//##############################################
//deque - > time complexity -O(1)
//#############################################
// deque <int> d;
// d.push_back(7);
// d.push_front(8);

// for(int i : d){
//     cout<<i <<" ";
// }
// cout<<endl;

// d.pop_back();

// cout<<endl;
// for(int i : d){
//     cout<<i <<" ";
// }


// for(int i : d){
//     cout<<i <<" ";
// }

// d.pop_front();

// cout<<endl;
// for(int i : d){
//     cout<<i <<" ";
// }

//1st index element
// cout<<"element at zero index : "<<d.at(0);

// cout<<"check that array is empty or not -> 1 for empty 0 for non-empty : "<<d.empty()<<endl;
// cout<<"first elemet : "<<d.front()<<endl;
// cout<<"last elemet : "<<d.back()<<endl;
// d.clear(); -> will clear all elements
// cout<<"memory size : "<<d.size()<<endl;
// d.erase(d.begin(),d.begin()+1);  //-> will clear elements in range
// cout<<"memory size : "<<d.size()<<endl;
// for(int i : d){
//     cout<<i <<" ";
// }




//******************************************************************8
//List - > time complexity -O(n)
//****** ************************************

// list<int> l;

// l.push_back(1);
// l.push_front(2);

// for(int i :l){
//     cout<<i<<" ";
// }

// cout<<endl;
// l.erase(l.begin());
// cout<<"after erase";
// cout<<endl;
// for(int i :l){
//     cout<<i<<" ";
// }


// list<int> li(l);
// for(int i :li){
//     cout<<i<<" ";
// }



// list<int> li(5,100);
// for(int i :li){
//     cout<<i<<" ";
// }



//**************************************************************************
// Stack -> frist in last out
//*************************************************************************** 

// stack<string> s;
// s.push("hello");
// s.push("suryansh");
// s.push("sharma");
// s.push("yo");

// cout<<"Top element : "<<s.top()<<endl;

// s.pop();

// cout<<"Top element : "<<s.top()<<endl;
// cout<<" size : "<<s.size()<<endl;
// cout<<" empty or not : "<<s.empty()<<endl;


//******************************************************
// Queue -> first in first out
//*******************************************************


// queue<string> q;
// q.push("hello");
// q.push("suryansh");
// q.push("sharma");
// q.push("yo");

// cout<<"Top element : "<<q.front()<<endl;

// q.pop();

// cout<<"Top element : "<<q.front()<<endl;
// cout<<" size : "<<q.size()<<endl;
// cout<<" empty or not : "<<q.empty()<<endl;



//*********************************************************
//Priority Queue
//*********************************************************
// max heap - > first element is always maximum
// min heap - > first element is minimum


// creating max heap
// priority_queue<int> maxi;


// creating min heap
// priority_queue<int,vector<int>,greater<int>> mini;

// maxi.push(1);
// maxi.push(2);
// maxi.push(3);
// maxi.push(4);

// int n =maxi.size();
// cout<<"printing maxi : ";
// for (int i = 0; i < n; i++)
// {
//     cout<<maxi.top()<<" ";
//     maxi.pop();
// }

// cout<<endl;

// cout<<"empty or not : "<<maxi.empty();

// cout<<endl;

// mini.push(1);
// mini.push(5);
// mini.push(2);
// mini.push(6);
// mini.push(3);
// mini.push(7);
// mini.push(4);
// mini.push(8);

// int m =mini.size();
// cout<<"printing mini : ";
// for (int i = 0; i < m; i++)
// {
//     cout<<mini.top()<<" ";
//     mini.pop();
// }

// cout<<endl;

// cout<<"empty or not : "<<mini.empty();




//**************************************************************
//Set -> it counts multiple dulticate copies as a single one of any key
//       and will arrange them in a ordered manner
//**************************************************************

// set<int> s;
// s.insert(3);
// s.insert(2);
// s.insert(1);
// s.insert(4);
// s.insert(34);
// s.insert(31);
// s.insert(31);
// s.insert(23);
// s.insert(3);
// s.insert(323);

// for (auto i : s){
//     cout<<i<<" ";
// }
// cout<<endl;

// set<int>::iterator it = s.begin();
// it++;
// s.erase(it);


// for (auto i : s){
//     cout<<i<<" ";
// }
// cout<<endl;

// cout<<"checks if element is present or not : "<<s.count(88)<<endl;


// set<int>::iterator itr = s.find(34);
// cout<<"Value present at iteator itr : "<<*itr<<endl;

// for (auto it= itr; it != s.end(); it++)
// {
//     cout<<*it<<" ";
// }
// insert , find , erase , count => time complexity ->  o(logn)
// begin , size , empty => time complexity ->  o(1)


//**************************************************************
//Map -> is in key w=value pair 2 keys can point to one value but 1 key dont have 2 values
//******************************************************


// map<int,string> m;

// m[1] = "hello";
// m[2] = "good";
// m[13] = "morning";
// m.insert({5,"bheem"});

// printing will be in sorted order in case of ordered map in unordered map it is in random order
// for(auto i :m ){
//     cout<<i.first<<" "<<i.second<<endl;
// }

// check if a key is present or not
// cout<<"check if it is present or not : "<<m.count(13)<<endl;

// m.erase(13);
// cout<<"after erase"<<endl;

// for(auto i :m ){
//     cout<<i.first<<" "<<i.second<<endl;
// }

// finding out an element and printing it 
 
// auto it = m.find(5);
// for  (auto i = it; i != m.end(); i++)
// {
//     cout<<(*i).first<<" ";
// }



//appliying stl algorithms 
// include<algorithm>
vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(11);
v.push_back(13);
v.push_back(41);


//Finding an element
cout<<" finding 6 --> "<< binary_search(v.begin(),v.end(),6)<<endl;
cout<<" finding 11 --> "<< binary_search(v.begin(),v.end(),11)<<endl;


cout<<"Lower bound --> "<<lower_bound(v.begin(),v.end(),11)-v.begin()<<endl;
cout<<"upper bound --> "<<upper_bound(v.begin(),v.end(),11)-v.begin()<<endl;




int a =4;
int b= 1;

cout<<max(a,b)<<endl;
cout<<min(a,b)<<endl;
swap(a,b);
cout<<a<<endl;

string s ="iuhew";
reverse(s.begin(),s.end());
cout<<s<<endl;


// rotate(v.begin(),v.begin()+1,v.end());
// for (auto i : v)
// {
//     cout<<i<<" ";
// }

sort(v.begin(),v.end());
for (auto i : v)
{
    cout<<i<<" ";
}






}
