
//**************PAIR*************
#include <bits/stdc++.h>
using namespace std;

  void printvector(vector<string> &v) {
      cout<<"size :"<<v.size()<<endl;// this will give size of the vector as now it is known by the compiler as the element-input loop is completed in the main function 
       for (int i = 0; i < v.size(); i++)// this is loop for printing out the vector we have in-taken previously by another loop
       {
           cout<<v[i]<<" ";
       }
       cout<<endl;
       }

int main()
{
    // pair<int,string> p;
    // p=make_pair(2,"abc"); ---->acceptable syntax
    // p={2,"abcd"};          //---->aslo acceptable syntax
    // // pair<int,string> p1=p; //--->copying value without taking reference .Reference is not taken so value of pair will not be affected
    // // p1.first=3;

    //  pair<int,string> &p1=p;  //--->reference is taken so value of pair will be affected and will be changed
    // p1.first=3;
    // cout<<p.first<<" "<<p.second<<endl;

    // int a[]={1,2,3};
    // int b[]={2,3,4};
    // pair<int,int> p_array[3];
    // p_array[0]={1,2};//here we have stored pairs in a array so when we print it will print pair so we have to specefically call first and second element of the pair
    // p_array[1]={2,3};
    // p_array[2]={3,4};
    // // if we write swap function here
    // swap(p_array[0],p_array[2]);
    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<p_array[i].first<<" "<<p_array[i].second<<endl;//when we print it will print pair so we have to specefically call first and second element of the pair otherwise it will print some garbage value
    // }

    // we can also take input(cin) of them
    // cin>>p.first;
    // cin>>p.second;
    // cout<<p.first;
    // cout<<p.second;

    //*************VECTOR*************
    // vector<int> v; /// this is a syntax of a vector
    // int s; 
    // cin >> s;
    // for (int i = 0; i < s; i++) // this is a loop for taking input of the elements to be stored in a vector(can say it as a element-input loop)
    // {   int x;
    //     cin>>x;
    //     printvector(v);//this is to see weather the vector is of dynamic size or not
    //     v.push_back(x);// as the loop run again and again the size of vector will be updated and increased and new element will be stored as the last element and this will happen till loop ends
    // }
    // printvector(v);


    // *******FOR INT**********
    // vector<int> v(10,3);//-vector of size 10 and all elements 3
    // v.push_back(7);// adding 11th element to a vector of size 10
    // printvector(v);
    // v.pop_back();
    // printvector(v);// it will just remove the last elemnent of the vector

    // vector<int>v2=v;// forming a vector v2 as a copy of vector v
    // v2.push_back(9);// adding 9 as  last element in the vector v2
    // printvector(v2);

    //*******FOR STRING********
    vector<string>s3;
    int x;
    cin>>x;
    for (int i = 0; i < x; i++)
    {
        string t;
        cin>>t;
        s3.push_back(t);
    }
    printvector(s3);

    return 0;
} 