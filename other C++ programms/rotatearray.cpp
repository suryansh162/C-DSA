// // // Given an array, rotate the array to the right by k steps, where k is non-negative.
// // #include<iostream>
// // #include<array>
// // using namespace std;

// // void shift(int a[],int n,int k)
// // {
// //     int temp[n]={0};
// //     for (int i = 0; i < n; i++)
// //     {
// //         temp[(i+k)%n]=a[i];
// //     }

// //     a[n]=temp[n];
    
// // }
// // void print(int a[],int n)
// // {
// //     for (int i = 0; i < n; i++)
// //     {
// //         cout<<a[i]<<" ";
// //     }
// //     cout<<endl;
// // }

// // int main(){
// // int a[5]={1,2,3,4,5};
// // int k=2;
// // shift(a,5,2);
// // print(a,5);
// // return 0;
// // }


// //checking if array is sorted / rotated or not
// /*Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

// There may be duplicates in the original array.

// Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length], where % is the modulo operation.

//  */


// #include<iostream>;
// using namespace std;

// bool check(int a[],int n)
// {
//     int count=0;
//     for (int i = 1; i < n; i++)
//     {
//        if (a[i-1]>a[i])
//        {
//            count++;
//        }
//        if (a[n-1]>a[0])
//        {
//            count++;
//        }
//        return count<=1;// as if all the elements are same so the count will not increase but the array can be said as sorted 
       
//     }
    
// }

// int main(){
// int a[5]={3,4,5,1,2};
// int b[5]={1,2,3,4,5};
// int c[5]={4,3,8,1,6};
// bool find=check(c,5);{
//     if (find==1)
//     {
//         cout<<"array is sorted"<<endl;
//     }
//     else
//     {
//         cout<<"not sorted"<<endl;
//     }
    
// }
// return 0;
// }


/*ques--->You are given two numbers 'A' and 'B' in the form of two arrays (A[] and B[]) of lengths 'N' and 'M' respectively, where each array element represents a digit. You need to find the sum of these two numbers and return this sum in the form of an array.*/

#include<iostream>
#include<array>
using namespace std;

// void reverse(int a[],int n)//-->vector thodi h ye jo push_back krke reverse krenge bhai
// {
//     int s=0,e=n-1;
//     while (s<=e)
//     {
//         swap(a[s],a[e]);
//         s++;e--;

//     }
    
// }

void print(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}

void add(int a[],int n,int b[],int m,int c[] )
{
    int i=n-1,j=m-1;
    int carry=0;
    while (i>=0 && j>=0)
    {
        int val1=a[i];
        int val2=b[j];
        int sum=val1+val2+carry;
         carry=sum/10;
        sum=sum%10;
       
        c[i]=sum;
        i--;j--;

    }
    while (i>=0)
    {
        int val1=a[i];
        // int val2=b[j];
        int sum=val1+carry;
         carry=sum/10;
        sum=sum%10;
       
        c[i]=sum;
        i--;
        
    }
      while (j>=0)
    {
        // int val1=a[j];
        int val2=b[j];
        int sum=val2+carry;
        carry=sum/10;
        sum=sum%10;
       
        c[j]=sum;
        j--;
        
    }
    
    while (carry!=0)
    {
        int sum=carry;
         carry=sum/10;
        sum=sum%10;
        
        c[j]=sum;
    }
    
    
    
}
int main(){
int a[5]={1,2,3,4,5};
int b[3]={6,2,3};
int c[5]={0};
add(a,5,b,3,c);
// reverse(c,5);
print(c,5);

return 0;
}