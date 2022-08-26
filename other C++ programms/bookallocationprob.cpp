// // #include<iostream>;
// // using namespace std;

// // bool ispossible(int a[],int m,int n,int mid)
// // {
// //     int studentcount=1;
// //     int pagesum=0;
// //     for (int i = 0; i < n; i++)
// //     {
// //         if (pagesum+a[i]<=mid)
// //         {
// //             pagesum+=a[i];
// //         }
// //         else
// //         {
// //             studentcount++;
// //             if (a[i]>mid|| studentcount>m)
// //             {
// //                return false;
// //             }
// //             pagesum=0;
// //             pagesum+=a[i];
// //         }
        
        
// //     }
// //     return true;
// // }
// // int bookallocation(int a[],int n,int m )
// // {
// //     for (int i = 0; i <m; i++)
// //     {
// //         cin>>a[i];
// //     }
    
// //     int s=0;
// //     int sum=0;
// //     for (int i = 0; i < m; i++)
// //     {
// //         sum=sum+a[i];
// //     }
// //     int e= sum;
// //     int mid=s+(e-s)/2;
// //     int ans=-1;
// //     while (e>=s)
// //     {
// //         if (ispossible(a, n,m,mid))
// //         {
// //             ans=mid;
// //             e=mid-1;

// //         }
// //         else
// //         {
// //             s=mid+1;
// //         }
// //         mid=s+(e-s)/2;
        
// //     }return ans;
    

// // }

// // int main(){
// // int m;
// // cout<<"enter the number of books"<<endl;
// // cin>>m;
// // int a[m];
// // int n;
// // cout<<"no of students n are :"<<endl;
// // cin>>n;
// // cout<<bookallocation(a,n,m);
// // return 0;
// // }


// //painter patition problem
// #include<iostream>;
// using namespace std;

// bool ispossible(int a[],int k,int mid)
// {
//     int paintercoutnt =1;
//     int boardsum=0;
//     for (int i = 0; i < 3; i++)
//     {
//         if (a[i]+boardsum<=mid)
//         {
//             boardsum+=a[i];
//         }
//         else
//         {
//             paintercoutnt++;
//             if (mid<boardsum||k<paintercoutnt)
//             {
//                return false;
//             }
//             boardsum=0;
//             boardsum+=a[i];
//         }
        
//     }
//     return true;
    

// }

// int minimumtime(int a[],int k)
// {
//     int sum=0;
//     for (int i = 0; i < 3; i++)
//     {
//         sum+=a[i];
//     }
//     int s=0;
//     int e=sum;
//     int mid=s+(e-s)/2;
//     int ans=-1;
    
//     while (e>=s)
//     {
//         if (ispossible( a,k,mid))
//         {
//             ans=mid;
//             e=mid-1;
//         }
//         else
//         {
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;

// }

// int main(){
// int a[]={5,5,5,5};
// int k;
// cout<<"enter the number of painters"<<endl;
// cin>>k;
// cout<<"for minimum time the allocation will be "<<minimumtime(a,k)<<" boards per painter";

// return 0;
// }



//q-3-aggressive cows
/*Given an array of length ‘N’, where each element denotes the position of a stall. Now you have ‘N’ stalls and an integer ‘K’ which denotes the number of cows that are aggressive. To prevent the cows from hurting each other, you need to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. Return the largest minimum distance.*/
//not solved
#include<iostream>;
using namespace std;

bool ispossible(int a[],int k,int N,int mid)
{
    int cowcount=1;
     int c1position=a[0];
    for (int i = 0; i < N; i++)
    {
        if (a[i]-c1position>=mid)
        {
            cowcount++;
           
            if (cowcount==k)
            {
                return true;
            }
            c1position =a[i];
            
        }

    }
    
return false;
}


int cowseparation(int a[],int N,int k)
{
    for (int i = 0; i < N; i++)
    {
        cout<<"enter the element of array "<<i<<" ";
        cin>>a[i];
    }
    
    int maxi=-1;int mini=-1;

     for (int i = 0; i < N;i++)
    {
       
       while (i<N)
       {
           if (a[i]<a[i+1])
           {
               mini=a[i];
           }
           else
           {
               mini=a[i+1];
           }
           

       }
       
    //   return mini;  
    }

    for (int i = 0; i < N;i++)
    {
       
       while (i<N)
       {
           if (a[i]<a[i+1])
           {
               maxi=a[i+1];
           }
           else
           {
               maxi=a[i];
           }
           

       }
       
    //   return maxi;  
    }
    int s=0;
    int e=maxi-mini;
    int mid=s+(e-s)/2;
    int ans=-1;
    while (e>=s)
    {
        if (ispossible(a,k,N,mid))
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
        
    }
    return ans;
    
}

int main(){
int N;
cout<<"enter length of array"<<endl;
cin>>N;
int a[N];
int k;
cout<<"enter the number of cows"<<endl;
cin>>k;
cout<<"the dist of separation is "<<cowseparation(a,N,k);
return 0;
}