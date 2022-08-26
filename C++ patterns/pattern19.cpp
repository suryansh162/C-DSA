#include<iostream>;
using namespace std;
int main(){
int a,r,c;
cin>>a;
r=1;
while (r<=a)
{
    c=a-r+1;
    while (c>=1)
    {
        cout<<"*"<<" ";
        c--;
    
}

cout<<endl;
r++;

    
    
}

return 0;
}