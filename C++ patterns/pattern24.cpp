#include<iostream>;
using namespace std;
int main(){
int a,r,c;
cin>>a;
r=1;
while (r<=a)
{
    c=1;
    int space=a;
    int count=1;
    
    while (space>r)
    {
        cout<<" ";
        space--;
    }
    while (c<=r)
    {
        cout<<count;
        count++;
        c++;
    }
   
    int num = r-1;
    while (num)
    {
       
       cout<<num;
       num--;
       c++;

    }
    cout<<endl;
    r++;
    
}

return 0;
}