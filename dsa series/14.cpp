// find Pivot element
// by linear search
// #include<iostream>
// using namespace std;

// int findpivot(int a[], int n){
//      int s = 0;
//      int e = n-1;
//      int m = s + (e-s)/2;
//      for(int i = 1; i<=e; i++)
//      {
//         if ((a[i-1]>a[i]) && (a[i]<a[i+1]))
//         {
//             return a[i];
//         }
//      }

// }

// int main(){
//     int arr[8] = {17,29,1,12,23,31,41,51};
//     int ans = findpivot(arr, 8);
//     cout<<"pivot elem  is : "<<ans;

// }

// by binary search
// #include <iostream>
// using namespace std;
// int findpivot(int a[], int n)
// {
//     int s = 0;
//     int e = n - 1;
//     int m = s + (e - s) / 2;
//     while (s<e)
//     {
//         if (a[m]>=a[0])
//         {
//             s = m + 1;
//         }

//         if (a[m]<=a[e])
//         {
//             e = m ;  
//         }

//         m = s + (e-s) / 2;
//     }  
//     return a[s];   
// }

// int main(){
//     int arr[8] = {17,29,1,12,23,31,41,51};
//     int ans = findpivot(arr, 8);
//     cout<<"pivot elem  is : "<< ans;

// }




//Find  key in a rotated sorted array

#include <iostream>
using namespace std;
int findpivot(int a[], int n,int k)
{
    int s = 0;
    int e = n - 1;
    int m = s + (e - s) / 2;
    while (s<e)
    {
        if (a[m]>=a[0])
        {
            s = m + 1;
        }

        if (a[m]<=a[e])
        {
            e = m ;  
        }

        m = s + (e-s) / 2;
    }  
    if(a[s]<=k<=a[e])
    {
        int start = s;
        int end = e;
         
    }   
}

int main(){
    int arr[8] = {17,29,1,12,23,31,41,51};
    int ans = findpivot(arr, 8,31);
    cout<<"pivot elem  is : "<< ans;

}