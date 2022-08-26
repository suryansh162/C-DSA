// sum of even till n
#include<iostream>;
using namespace std;
int main(){
int sum,n,num;
cout<<"enter the number"<<endl;
cin>>n;
sum=0;
num=2;
while (num<=n)
{
    sum=sum+num;
    num=num+2;
}
cout<<sum;

return 0;
}