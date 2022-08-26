#include<iostream>;
#include<cmath>;
using namespace std;
int main(){
int n,ans;
cin>>n;
ans=0;
int i=0;
while (n!=0)
{
    int digit = n%10;
    if (digit==1)
    {
        ans=ans+pow(2,i);

    }
    n=n/10;
    i++;
    

}
cout<<ans<<endl;

return 0;
}