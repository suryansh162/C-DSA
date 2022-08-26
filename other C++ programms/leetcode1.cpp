
// question-given integer number n return the diff between product of its digits and sum of its digits

#include<iostream>;
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int product=1;
    while (n!=0)
    {
        int rem;
        rem=n%10;
        product=product*rem;
        sum=sum+rem;
        n=n/10;
    }
    int diff=product-sum;
    cout<<"difference of product and sum is :"<<diff;

return 0;
}