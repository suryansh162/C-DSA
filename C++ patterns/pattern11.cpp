#include<iostream>;
using namespace std;
int main(){
int a,r,c;
cin>>a;
r=1;
while (r<=a)
{
c=1;
while (c<=a)
{    char ch ='A'+c+r-2; 
    cout<<ch  <<" ";// here if cout<<r---> 1111; if cout<<c--->1234
    c=c+1;
}
 cout<<endl;
r=r+1;
}

return 0;
}