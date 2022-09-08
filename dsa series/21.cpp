// Reversing Array
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 6;
//     int a[n] = {1,2,3,4,5,6};
//     int s =0;
//     int e = n-1;
//     while (e>=s)
//     {
//         // int temp = a[s];
//         // a[s] = a[e];
//         // a[e] =temp;
//         swap(a[s],a[e]);
//         s++;
//         e--;
//     }

//      for (int i = 0; i < n; i++)
//      {
//         cout<<a[i]<<" ";
//      }
// }

// Reversing Vector
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// vector<int> reverse(vector<int> v){
//     int s = 0;
//     int e = v.size()-1;

//     while (s<=e)
//     {
//         swap(v[s],v[e]);
//         s++;
//         e--;
//     }
//     return v;

// }

// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(3);
//     v.push_back(5);
//     v.push_back(15);
//     v.push_back(13);
//     v.push_back(12);
//     vector<int> ans = reverse(v);
//     for(auto i : ans){
//         cout<<i<<" ";
//     }
// }

// Reversing Vector after a given index
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> reverse(vector<int> v,int m){
//     int s = m+1;
//     int e = v.size()-1;

//     while (s<=e)
//     {
//         swap(v[s],v[e]);
//         s++;
//         e--;
//     }
//     return v;

// }

// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     v.push_back(6);
//     vector<int> ans = reverse(v,3);
//     for(auto i : ans){
//         cout<<i<<" ";
//     }
// }

// // Merge Sorted array
// #include<iostream>
// #include<array>
// using namespace std;
// int printarray(int a[],int n);
// int mergesort(int a[],int m,int b[],int n,int c[]){
//     int s = 0;int e = 0;
//     int k = 0;
//     while((s<m) && (e<n))
//     {
//         if (a[s]<b[e])
//         {
//             c[k] = a[s];
//             s++;k++;
//         }
//         else{
//             c[k] = b[e];
//             e++;k++;
//             }

//     }

//     while ((s<m) && (s!=0))
//     {
//         c[k]=a[s];
//         s++;k++;
//     }

//      while ((e<n) && (e!=0))
//     {
//         c[k]=b[e];
//         e++;k++;
//     }
// }

// int printarray(int a[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<" ";
//     }

// }
// int main(){

//     int a[5] = {1,4,5,7,8};
//     int b[2] = {2,6};
//     int c[7] ;
//     mergesort(a,5,b,2,c);
//     printarray(c,7);

// }

//  Merge 2 sorted arrays:and putting all in 1st array

// #include <iostream>
// #include <array>
// using namespace std;
// int sortarray(int a[], int n);
// int printarray(int a[], int n);
// int mergesort(int a[], int m, int b[], int n)
// {
//     int s = 0;
//     int e = 0;
//     while ((s < m) && (e < n))
//     {
//         if (a[s] == 0)
//         {
//             a[s] = b[e];
//             e++;
//             s++;
//         }
//         else
//             s++;
//     }
// }

// int sortarray(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (a[j] > a[j + 1])
//             {
//                 swap(a[j], a[j + 1]);
//             }
//         }
//     }
// }
// int printarray(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
// }

// int main()
// {
//     int a[1] ={1};
//     int b[0] = {};
//     mergesort(a, 1, b, 0);
//     sortarray(a,1);
//     printarray(a, 1);
// }

// Move zeros to Right

#include <iostream>
#include <array>
using namespace std;

int printarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[11] = {0, 1, 0, 3, 12, 0, 4, 7, 2, 0, 9};
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j <= 9 - i; j++)
        {
            if (a[j] == 0)
            {
                swap(a[j], a[j + 1]);
            }
        }
    }

    printarray(a, 11);
}
