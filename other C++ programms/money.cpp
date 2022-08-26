#include<iostream>;
using namespace std;
int main(){
    int amount;
cout<<"enter the amount"<<endl;
cin>>amount;

int rs100, rs50, rs20, rs1; 

switch (1)
{
case 1:rs100=amount/100;
       amount=amount%100;
       cout<<"no of 100 rs note are "<<rs100<<endl;
switch (2)
{
case 2:rs50=amount/50;
       amount=amount%50;
       cout<<"no of 50 rs note are "<<rs50<<endl;
switch (3)
{
case 3:rs20=amount/20;
       amount=amount%20;
       cout<<"no of 20 rs note are "<<rs20<<endl;
switch (4)
{
case 4:rs1=amount/1;
       amount=amount%1;
       cout<<"no of 100 rs note are "<<rs1<<endl;
       break;
}
}}}

return 0;
}