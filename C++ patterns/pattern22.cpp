#include<iostream>;
using namespace std;
int main(){
int a,r,c;
cin>>a;
r=1;
while(r<=a){
   c=1;int space =a,num=r;
   while (space>r)
   {
       cout<<" ";
       space--;

   }
   while (c<=r)
   {
       cout<<num;
       c++;

   }
   cout<<endl;
   r++;
   



}
return 0;
}