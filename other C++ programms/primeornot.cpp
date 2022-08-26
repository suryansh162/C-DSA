#include<iostream>;
using namespace std;
int main(){
int n,i;
cout<<"enter the number"<<endl;
cin>>n;
i=2;
while (i<n)
{
   if (n%i==0)
   {
       cout<<"prime for "<<i<<endl;
   }
   else
   {
       cout<<"not prime for"<<i<<endl;
   }
   i=i+1;
}

return 0;
}