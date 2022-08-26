// #include<iostream>;
// using namespace std;
// void printarr(int a[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i];
//     }
//     cout<<endl;
// }

// void sort(int a[],int n){
//     int start=0,end=n-1;
//     while (start<end)
//     {
//        while (a[start]==0 &&start<end)
//         {
//            start++;
//         }
//        while (a[end]==1 &&start<end)
//         {
//           end--;
//         }
//        if (a[start]==1&&a[end]==0 )
//         {
//             swap(a[start],a[end]);
//             start++;
//             end--;
//         }
        
        

        
//     }
    
// }
// int main(){
// int a[8]={0,1,0,1,0,0,1,1};
// sort(a,8);
// printarr(a,8);
// return 0;
// }



/// a[8]={0,1,2,2,1,1,0,0}-sort it
//not solved
#include<iostream>
using namespace std;
void printarr(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i];
    }
    cout<<endl;
}

void sort(int a[],int n){
    int start=0,end=n-1;
    while (start<end)
    {
       while (a[start]==0 &&start<end)
        {
           start++;
        }
       while (a[end]==2 &&start<end)
        {
          end--;
        }
       if (a[start]>a[end])
        {
            swap(a[start],a[end]);
            start++;
            end--;
        }
    }
    
}
int main(){
int a[8]={0,1,2,2,1,1,0,0};
sort(a,8);
printarr(a,8);
return 0;
}