#include<iostream>;
using namespace std;
int main(){
int a,r,c;
cin>>a;
r=1;
while(r<=a){
   c=a;int space =1,num=r;
   while (space<=r-1)
   {
       cout<<" ";
       space++;

   }
   while (c>=r)
   {
       cout<<num;
       c--;

   }
   cout<<endl;
   r++;
   



}
return 0;
}