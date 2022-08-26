#include<iostream>;
using namespace std;
int main(){
int a,r,c;
cin>>a;
r=a;
while (1<=r)
{
c=a;
while (1<=c)
{    
    cout<< c ;// here if cout<<r---> 4444; if cout<<c--->4321
    c=c-1;
}
 cout<<endl;
r=r-1;
}

return 0;
}