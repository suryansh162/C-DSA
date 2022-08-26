// #include<iostream>;
// using namespace std;

// int arraymax(int a[],int size){
//     int maxi= INT8_MIN;
//     for (int i = 0; i < size; i++)
//     {
//         maxi=max(maxi,a[i]);// alternative method


//         // if (a[i]>max)
//         // {
//         //     max=a[i];
//         // }
//     }
//     return maxi;
    


// }

// int arraymin(int a[],int size){
//     int mini= INT8_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         mini=min(mini,a[i]);// alternative method
//         // if (a[i]<min)
//         // {
//         //     min=a[i];
//         // }
//     }
//     return mini;
    


// }


// int main(){
//     int size;
//     cin>>size;
// int a[100];
// for (int i = 0; i < size; i++)
// {
//     cin>>a[i];
// }
// cout<<"The max value of array is :"<<arraymax(a,size)<<endl;
// cout<<"The max value of array is :"<<arraymin(a,size)<<endl;

// return 0;
// }


// sum of elements of array
#include<iostream>;
using namespace std;
int main(){
int a[5]={2,7,1,-4,11};
int sum=0;
for (int i = 0; i < 5; i++)
{
    sum=sum+a[i];
}
cout<<sum;
return 0;
}