#include<iostream>;
using namespace std;
int main(){
int a[5]={3,2,4,1,6};
for (int i = 0; i <4; i++)// i<4-->as no. of rounds =n-1 and we know i<n-1 so i<4
{
    int minindex=i;
    for (int j = i+1; j<5; j++)
    {
        if (a[j]<a[minindex])
        {
            minindex=j;
        }
        
    }
    swap(a[minindex],a[i]);
}
cout<<a[5];

return 0;
}