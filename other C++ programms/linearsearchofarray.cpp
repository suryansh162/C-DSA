#include<iostream>;
using namespace std;


bool search(int a[],int size,int n){
    for (int i = 0; i < size; i++)
    {
        if (n==a[i])
        {
           return 1;
        }
        
    }
    return 0;
    
}

int main(){
int a[10]={5,6,7,8,9,93,2,2,12,34};
int n;
cout<<"Enter the element you want to search in an array"<<endl;
cin>>n;
bool found=search(a,10,n);
if (found)
{
    cout<<"Element is present"<<endl;
}
else
{
    cout<<"not present"<<endl;
}




return 0;
}