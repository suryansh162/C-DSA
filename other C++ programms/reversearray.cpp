// // // // #include<iostream>
// // // // #include<vector>
// // // // using namespace std;

// // // // vector<int>reverse(vector<int> v)
// // // // {
// // // //     int s=0, e=v.size()-1;
// // // //     while (s<=e)
// // // //     {
// // // //        swap(v[s],v[e]);
// // // //        s++;
// // // //        e--;
// // // //     }
// // // //     return v;
// // // // }

// // // // void print(vector<int> v)
// // // // {
// // // //     for (int i = 0; i < v.size(); i++)
// // // //     {
// // // //         cout<<v[i] <<" ";
// // // //     }
// // // //     cout<<endl;
// // // // }
// // // // int main(){
// // // // vector<int> v;
// // // // v.push_back(11);
// // // // v.push_back(7);
// // // // v.push_back(3);
// // // // v.push_back(12);
// // // // v.push_back(4);
// // // // cout<<"before reversing \n";
// // // // print(v);
// // // // vector <int> ans = reverse(v);
// // // // cout<<"vector after reversing \n";
// // // // print(ans);
// // // // return 0;
// // // // }

// // // /* question- Problem Statement
// // // Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.*/

// // // #include<iostream>
// // // #include<vector>
// // // using namespace std;
// // // void printvec(vector<int> &v)
// // // {
// // //     cout<<"size is-->"<<v.size()<<endl;
// // //     for (int i = 0; i < v.size(); i++)
// // //     {
// // //         cout<<v[i]<<" ";
// // //     }

// // // }

// // // void reverse(vector<int> &v,int m)
// // // {
// // //     int s=m+1, e=v.size()-1;
// // //     for (int i = m+1; i <v.size() ; i++)
// // //     {
// // //         while (s<=e)
// // //         {
// // //             swap(v[s],v[e]);
// // //             s++;
// // //             e--;

// // //         }

// // //     }

// // // }
// // // int main(){
// // //     int m;
// // //     cout<<"enter the index value after which you want to reverse the array"<<endl;
// // //     cin>>m;
// // // vector<int> v;
// // // int s;
// // // cout<<"Enter the size"<<endl;
// // // cin>>s;
// // // for (int i = 0; i < s; i++)
// // // {
// // //     int x;
// // //     cin>>x;
// // //     v.push_back(x);
// // // }
// // // cout<<"before reverse from index "<<m<<endl;

// // // printvec(v);
// // // cout<<"after reverse from index "<<m<<endl;
// // // reverse(v,m);
// // // printvec(v);

// // // return 0;
// // // }




// // ****************************************************************************
// // merging two arrays in third array and in sorted way 
// // //for array
// // #include<iostream>
// // #include<vector>
// // using namespace std;
// // void merge(int a[],int m,int b[],int n,int c[])
// // {
// //     int i=0,j=0,k=0;
// //     while (i<m&&j<n)
// //     {
// //         if (a[i]<b[j])
// //         {
// //             c[k++]=a[i++];
// //         }
// //         else
// //         {
// //             c[k++]=b[j++];
// //         }
        
        
// //     }
// //     while (i<m)
// //     {
// //         c[k++]=a[i++];
// //     }
    
// //     while (j<n)
// //     {
// //         c[k++]=b[j++];
// //     }
    
// // }


// // void print(int c[],int n){
// //     for (int  i = 0; i < n; i++)
// //     {
// //         cout<<c[i]<<" ";
// //     }
// //     cout<<endl;
// // }

// // int main(){
// // int a[5]={1,3,5,8,9};
// // int b[3]={2,4,6};
// // int c[8]={0};
// // merge(a,5,b,3,c);
// // print(c,8);

// // return 0;
// // }



// // // for vector
// // // #include <iostream>
// // // #include <vector>
// // // using namespace std;
// // // void printvec(vector<int> &v)
// // // {
// // //     cout<<"size-->"<<v.size()<<endl;
// // //     for (int i = 0; i < v.size(); i++)
// // //     {
// // //        cout<<v[i]<<" ";
// // //     }
// // //     cout<<endl;
    

// // // }

// // // void mergevec(vector<int> &v1,vector<int>&v2,vector<int>merged)
// // // { 
// // //     int i=0,j=0,k=0;
// // //     while (i<v1.size()&&j<v2.size())
// // //     {
// // //         if (v1[i]<v2[j])
// // //         {
// // //             merged.push_back(i);
// // //             i++;
// // //         }
// // //         else
// // //         {
// // //             merged.push_back(j);
// // //             j++;
// // //         }
        
        

// // //     }
// // //     while (i<v1.size())
// // //     {
// // //         merged.push_back(i);
// // //     }
// // //      while (j<v2.size())
// // //     {
// // //         merged.push_back(j);}
    
    
    
// // // }
// // // int main()
// // // { 
// // //     vector<int> num1;
// // //     int m;
// // //     cout << "no of elements of num 1" << endl;
// // //     cin >> m;
// // //     for (int i = 0; i < m; i++)
// // //     {
// // //        int x;
// // //        cin>>x;
// // //        num1.push_back(x);
// // //     }
// // //     cout<<"the elements of num1 are"<<endl;
// // //     printvec(num1);

// // //     vector<int> num2;
// // //     int n;
// // //     cout << "no of elements of num 2" << endl;
// // //     cin >> n;
// // //      for (int i = 0; i < n; i++){
    
// // //        int y;
// // //        cin>>y;
// // //        num2.push_back(y);
// // //     }
// // //     cout<<"the elements of num2 are"<<endl;
// // //     printvec(num2);
// // //     vector<int> merged;
// // //     mergevec(num1,num2,merged);
// // //     cout<<"the merged vector is "<<endl;
// // //     printvec(merged);
    

// // //     return 0;
// // // }





// // /* H.W.-->question -->You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

// // Merge nums1 and nums2 into a single array sorted in non-decreasing order.

// // The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n. */

// #include<iostream>;
// using namespace std;

// void merge(int a[],int n,int b[],int m)
// {

//     int i=0,j=0;
//     while (i<n&&j<m)
//     {
//         if (a[i]<b[j]&&a[i]!=0)
//         {
//            a[i++];
//         }
//         else if (a[i]==0)
//         {
//             a[i++]=b[j++];
//         }
        
//         else
//         {
//             a[i++]=b[j++];
//         }
        
//     }
    
// }
// void print(int a[],int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
// int a[6]={1,2,3,0,0,0};
// int b[3]={4,5,6};
// merge(a,6,b,3);
// print(a,6);
// return 0;
// }



// ********************************
/*  question--->Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.*/

#include<iostream>;
using namespace std;

void shift(int a[],int n)
{
    int i=0;
    for (int  j = 0; j < n; j++)
    {
        
        
    
        if (a[j]!=0)
        {
           swap(a[i],a[j]);
           i++;
        }

    
    
   
}  }
void print(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
int a[11]={0,1,4,6,7,9,0,0,0,3,12};
shift(a,11);
print(a,11);
return 0;
}

 