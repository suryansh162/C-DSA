// You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.
//not solved
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void pairsum(int a[],int n)
{
    vector<vector<int>>ans;
    int num;
    cout<<"enter the number "<<endl;
    cin>>num;
    int sum=0;
    for (int  i = 0; i < n; i++)
    {
        cout<<"intput array i"<<endl;
        cin>>a[i];
        for (int j = i+1; j <n; j++)
        {
             cout<<"intput array j"<<endl;
           cin>>a[j];
           if (a[i]+a[j]==num)
           {
               vector<int>temp;
               temp.push_back(min(a[i],a[j]));
               temp.push_back(max(a[i],a[j]));
               ans.push_back(temp);
           }
           
        }
        
    }
    sort(ans.begin(),ans.end());
    cout<<endl;
    
}

int main(){
int n;
cout<<"enter the size of array"<<endl;
cin>>n;
int a[n];
// int num;
// cout<<"enter the number "<<endl;
// cin>>num;
pairsum(a,n);

return 0;
}