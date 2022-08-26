
// // // // q1-You have been given a sorted array/list ARR consisting of ‘N’ elements. You are also given an integer ‘K’.
// // // //  Now, your task is to find the first and last occurrence of ‘K’ in ARR.
// // // #include <iostream>;
// // // using namespace std;
// // // int firstoccurance(int a[], int size, int key)
// // // {
// // //     int ans=-1;
// // //     int start = 0;
// // //     int end = size - 1;
// // //     int mid1 = start + (end-start) / 2;
// // //     while (start <= end)
// // //     {
// // //         if (a[mid1] == key)
// // //         {
// // //             ans=mid1;
// // //             end=mid1-1;
// // //         }

// // //         else if (a[mid1] > key)
// // //         {
// // //             end = mid1 - 1;
// // //         }

// // //         else
// // //         {
// // //             start = mid1 + 1;
// // //         }
// // //         mid1=start + (end-start) / 2;
// // //     }
// // //     return ans;
// // // }

// // // int lastoccurance(int a[], int size, int key)
// // // {
// // //     int ans=-1;
// // //     int start = 0;
// // //     int end = size - 1;
// // //     int mid1 = start + (end-start) / 2;
// // //     while (start <= end)
// // //     {
// // //         if (a[mid1] == key)
// // //         {
// // //              ans=mid1;
// // //             start=mid1+1;
// // //         }

// // //         else if (a[mid1] > key)
// // //         {
// // //             end = mid1 - 1;
// // //         }

// // //         else
// // //         {
// // //             start = mid1 + 1;
// // //         }
// // //         mid1=start + (end-start) / 2;
// // //     }
// // //     return ans;
// // // }

// // // int main()
// // // {
// // // //     int size;
// // // //     cout<<"enter size :"<<endl;
// // // //     cin>>size;
// // //     int a[10] = {1, 2, 3, 3,3,3,3,3,3, 4};
// // //     int key;
// // //     cout << "enter the key :" << endl;
// // //     cin >> key;
// // //     cout<<"value of first occ index is :"<<endl;
// // //     cout<<firstoccurance(a,10,key)<<endl;
// // //     cout<<"value of last occ index is :"<<endl;
// // //     cout<<lastoccurance(a,10,key)<<endl;
// // //     int numberofaccurrence=1+(lastoccurance(a,10,key)-firstoccurance(a,10,key));
// // //     cout<<"total no. of occurrence of key "<<key<<" is "<<numberofaccurrence<<endl;
// // //     // int val1 = binarysearch2(a, size, key);
// // //     // int val2 = firstoccurance(a, size, key);
// // //     // if (val1 > val2)
// // //     // {
// // //     //     swap(val1, val2);
// // //     //     cout << val1 << " " << val2;
// // //     // }
// // //     // else
// // //     // {
// // //     //     cout << val1 << " " << val2;
// // //     // cout<<firstoccurance<<endl;
// // //     // }

// // //     return 0;
// // // }

// // //q2-Let's call an array arr a mountain if the following properties hold:

// // // arr.length >= 3
// // // There exists some i with 0 < i < arr.length - 1 such that:
// // // arr[0] < arr[1] < ... arr[i-1] < arr[i]
// // // arr[i] > arr[i+1] > ... > arr[arr.length - 1]
// // // Given an integer array arr that is guaranteed to be a mountain, return any i such that arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].
// // #include<iostream>;
// // using namespace std;

// // int indexsearch(int a[],int size)
// // {
// //     int s=0;
// //     int e=size-1;
// //     int mid=s+(e-s)/2;
// //     while (s<e)
// //     {
// //         // if (a[mid]>a[mid+1])---drawback
// //         // {
// //         //    return mid;
// //         // }

// //          if (a[mid]<a[mid+1])
// //         {
// //             s=mid+1;
// //         }
// //         else
// //         {
// //          e=mid;
// //         }
// //         mid=s+(e-s)/2;
// // }
// // return s;
// // }
// // int main(){
// //     int a[]={5,6,7,8,9,4,3,2,1,0};
// //     cout<<indexsearch(a,10);

// // return 0;
// // }

// // make a pivot - a[]={4,5,6,7,1,2,3} and find out the index no. of pivot element (here 1)
// #include<iostream>;
// using namespace std;

// int pivot(int a[],int n)
// {
//     int s=0,e=n-1;
//    int  mid=s+(e-s)/2;
//    while (s<e)
//    {
//        if (a[mid]>=a[0])
//        {
//            s=mid+1;
//        }
//        else if (a[mid]<a[n-1])
//        {
//            e=mid;
//        }
//        mid=s+(e-s)/2;
//    }
//    return e;
// }

// int main(){
// int a[]={5,6,7,8,9,0,1,2,3,4};
// cout<<"the index of pivot element is :"<<pivot(a,10);

// return 0;
// }

// a[]={1,2,3,7,9}--->sorted array;
// a[]={7,9,1,2,3}--->rotated sorted array;
/* you have been given a sorted array/list ARR consisting of ‘N’ elements. You are also given an integer ‘K’.
Now the array is rotated at some pivot point unknown to you. For example, if ARR = [ 1, 3, 5, 7, 8]. Then after rotating ARR at index 3, the array will be ARR = [7, 8, 1, 3, 5].
Now, your task is to find the index at which ‘K’ is present in ARR. */

// #include <iostream>;
// using namespace std;

// #include <iostream>;
// using namespace std;
// int binarysearch(int a[],int s,int e, int key)
// {
//     int start = s;
//     int end = e;
//     int mid = start+(end-start)/2;
//     // here we shourld keep in mind that
//     // if start==end==int_max then
//     // mid= start + (end-start)/2
//     // as mid=start+end/2 will eventually store a huge value in int mid in case of tart==end==int_max and int mid wont able to take that huge value in it
//     while (start <= end)
//     {
//         if (a[mid] == key)
//         {
//             return mid;
//         }

//         else if (a[mid] > key)
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//         mid = start+(end-start)/2;
//     }
//     return -1;
// }

// int pivot(int a[], int size, int key)
// {
//     int s = 0;
//     int e = size - 1;
//     int mid = s + (e - s) / 2;
//     while (s < e)
//     {
//         if (a[mid] >= a[0])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid;
//         }
//         mid = s + (e - s) / 2;
//     }
//     int ans = e;
//     if (a[ans] <= key && key <= a[size - 1])
//     {
//        return binarysearch(a,ans,size-1,key);
//     }
//     else 
//     {
//         return binarysearch(a,0,ans-1, key);
//     }
// }
// int main()
// {
//     int a[] = {7, 9, 1, 2, 3};
//     int key;
//     cin >> key;
//     cout << pivot(a, 5, key);

//     return 0;
// //time complexity-->Olog(n)
// }




///You are given a positive integer ‘N’. Your task is to find and return its square root. If ‘N’ is not a perfect square, then return the floor value of sqrt(N).
#include<iostream>
#include<math.h>
using namespace std;
int binarysearch(int m){
   int start=0;
    int end=m;
    long long int mid=(start+end)/2;
    int ans=-1;
    // here we shourld keep in mind that
    // if start==end==int_max then
    //mid= start + (end-start)/2
    //as mid=start+end/2 will eventually store a huge value in int mid in case of tart==end==int_max and int mid wont able to take that huge value in it
    while (start<=end)
    {
        if (mid*mid==m)
        {
            return mid;
        }
        
        else if (mid*mid>m)
        {
            end=mid-1;
        }
        
         else 
        {
            ans=mid;
            start=mid+1;
        }
        mid=(start+end)/2;
        
    }
    return ans;
    
}


double presicion(int n,int precisioncount,int tempsol)
{
    double factor=1;
    double ans1 = tempsol;
    for (int  i = 0; i < precisioncount; i++)
    {
        factor=factor/10;
        for (double j = ans1; j*j < n ; j=j+factor)
        {
           ans1=j; 
        }
    }
    return ans1;
    

}
int main(){
    int n;
    cout<<"enter the size/numer of which square root is to be found :"<<endl;
    cin>>n;
cout<<"square root of "<<n<<" without precision is "<<binarysearch(n)<<endl ;
int tempsol=binarysearch(n);
cout<<"the answer with presicion is "<<presicion(n,3,tempsol);


    return 0;
}