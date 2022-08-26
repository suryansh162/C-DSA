#include<iostream>;
using namespace std;
int main(){
int a,r,c;
cin>>a;
r=1;
int count=1;
while (r<=a)
{
c=1;
while (c<=a)
{    
    cout<<count<<" ";
    count=count+1;
    c=c+1;
}
 cout<<endl;
r=r+1;
}

return 0;
}