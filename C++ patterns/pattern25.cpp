// not solved
#include<iostream>
using namespace std;
int main(){
int a,r,c;
cin>>a;
r=1;
while(r<=a){
     int space =1;
     c=1;
     int count=1;
    while (c<=r)
    {
       
        cout<<count;
        count++;
        c--;
    }
    while (space<=r-1)
    {
        cout<<"*";
        space++;
    }
    
    
   
    while (space<=r-1)
    {
        cout<<"*";
        space++;
    }
     int num=a;
    c=a;

    while (c>=r)
    {
       
        cout<<num;
        num--;
        c--;
    }
    
    cout<<endl;
    r++;
}
return 0;
}