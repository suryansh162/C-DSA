
// // // // will return unique element of the array L:10
// // // #include<iostream>;
// // // using namespace std;
// // // int main(){
// // //     int ans=0;
// // // int a[5]={1,2,3,2,1};
// // // for (int i = 0; i < 5; i++)
// // // {
// // //     ans=ans^a[i];
    
// // // }
// // // cout<<ans;

// // // return 0;
// // // }

// // // //q2- given an array of integers arr,return true if thr number of occurance of each value in the array is unique ,or fakse otherwise
// not solved 
// // #include<iostream>;
// // using namespace std;

// // bool unique(int a[],int size){
// //     int ans=0;

// //     for (int i = 0; i < size; i++)
// //     {
// //       ans=ans^a[i];
// //       if (ans!=0)
// //       {
// //          return 1;
// //       }
      
// //     }
// //     return 0; 
// // }

// // int main(){
// // int n;
// // cin>>n; 
// // int arr[n];
// // for (int i = 0; i <n; i++)
// // {
// //     cin>>arr[i];
// // }
// // bool value=unique(arr,n);
// // if (value)
// // {
// //     cout<<"all unique / true";
// // }
// // else
// // {
// //     cout<<"not unique / false";
// // }



// // return 0;
// // }



// //find duplicates
// // given array of size n containing each number between 1 to n-1 and at least once .
// //there is a single integer value that is present in the array twice you have to find it  
// #include<iostream>;
// using namespace std;
// int duplicate(int arr[],int n){
//     int ans=0;

//     for (int  i = 0; i < n; i++)
//     {
//         cin>>arr[i];
        
//         ans=ans^arr[i];
        
//     }
//         for (int i = 1; i < n; i++)
//         {
           
//         ans=ans^i;    
//         } 
//         return ans;
      

// }
// int main(){
// int size;
// cin>>size;
// int a[size];
// cout<<duplicate(a,size);
   



// return 0;
// }



// given array of size n containing each number between 1 to n and at least once or may be twice .
//return array of integers that appears twice
//not solved
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>answ;

void findtwiceint(int a[],int n)
{
     int ans=0;
    // int arr[sizeof(ans)];
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
        ans=ans^a[i];
    }
    for (int i = 1; i <=n; i++)
    {
        ans=ans^i;
    }
    answ.push_back(ans);
    for (int  i = 0; i < answ.size(); i++)
    {
        cout<<"the size of answ vec is "<<answ.size();
        cout<<answ[i];
    }
    
}

int main(){
int n;
cin>>n;
int a[n];
// s=findtwiceint(a,n);
// int arr[s];
// cout<<arr[s];
findtwiceint(a,n);

return 0;
}