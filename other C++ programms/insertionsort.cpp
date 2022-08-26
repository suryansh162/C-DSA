#include<iostream>;
using namespace std;
int main(){
    int n;
    int a[n];
for (int i = 1; i < n; i++)
{ //no of rounds 
// from index no. 1 to n-1 as we already consider first element(0 th) of the array as sorted
    int temp = a[i];
    int j = i-1;
    for (; j >=0; j--)
    {
        if (a[j]>temp)
        {
            a[j+1]=a[j];
        }
        else
        {
            break;
        }
        
    }
    a[j+1]=temp;
}   
return 0;
}