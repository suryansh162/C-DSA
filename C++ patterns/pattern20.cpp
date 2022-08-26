#include<iostream>;
using namespace std;
int main(){
int a,r,c;
cin>>a;
r=1;

while(r<=a){
    int  c=a,space = 1, count =r;
    while (space<=r-1)
    {
        cout<<" ";
        space++;
    }
   
    while (c>=r)
    {
     
        cout<<count;
        count++;
        c--;
        
    }
    cout<<endl;
    r++;
    
    

}
return 0;
}