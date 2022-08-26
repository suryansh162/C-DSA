// identifying lowercase,uppercase,numeric
#include<iostream>;
using namespace std;
int main(){
char c;
cout<<"enter the character"<<endl;
cin>>c;
if (48<=c && c<=57)
{
   cout<<"this is numeric"<<endl;
}
else if (65<=c && c<=90)
{
  cout<<"this is uppercase"<<endl;
}
else 
{
    cout<<"this is lowercase"<<endl;
}






return 0;
}