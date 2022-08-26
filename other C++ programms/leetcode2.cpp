// Q2-write a function that takes an unsigned integer and returns the number of 1 bits it has (also called hamming weight)
//not solved
#include<iostream>;
using namespace std;
int main(){
int n;
cin>>n;
int count =0;
while (n!=0)
{
   if (n&1)
{
  count++;
  n=n>>1;
    
}

}
cout<<count;
return 0;
}