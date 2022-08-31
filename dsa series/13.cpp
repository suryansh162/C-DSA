//FIRST AND LAST OCCURANCE IN ARRAY

// #include <iostream>
// using namespace std;

// int firstOccurance(int arr[], int n, int key)
// {
//     int s = 0;
//     int e = n - 1;
//     int m = s + (e - s) / 2;
//     while (s <= key)
//     {
//         if (arr[s] == key)
//         {
//             cout << "First occurance at : " << s << endl;
//             return s;
//         }
//         s++;
//     }
//     return -1;
// }

// int lastOccurance(int arr[], int n, int key)
// {
//     int s = 0;
//     int e = n - 1;
//     int m = s + (e - s) / 2;
//     while (e >= m)
//     {
//         if (arr[e] == key)
//         {
//             cout << "Last Occurance at : " << e << endl;
//             return e;
//         }
//         e--;
//     }
//     return -1;
// }

// int main()
// {
//     int a[6] = {0, 5, 5, 6, 6, 6};
//     if (-1)
//     {
//         int ans = firstOccurance(a, 6, 6);
//         int ans2 = lastOccurance(a, 6, 6);
//         cout << ans << " " << ans2 << endl;
//     }
//     else
//     {
//         firstOccurance(a, 6, 6);
//         lastOccurance(a, 6, 6);
//     }
// }






// Find total number of OCCURANCE OF ELEMENT
// #include <iostream>
// using namespace std;

// int Findoccurance(int arr[], int n, int key){
//     int s = 0;
//     int e = n-1;
//     int m = s+(e-s)/2;
//     int count = 0;
//     while (s<=e)
//     {
//         if (arr[s] == key)
//         {
//             count++;
//         }
//         if (arr[e] == key)
//         {
//             count++;
//         }
        
//         s++;
//         e--;    
//     }
//        if (m == key)
//         {
//             count--;
//             return count;
//         }
//         else return count;
    
// }

// int main(){
//     int arr[7] = {1,2,3,3,3,3,5};
//     int ans =  Findoccurance(arr,7,3);
//     cout<<"The occurance of 3 is : "<<ans<<endl;
// }



//Find peak in mountain Array
#include <iostream>
using namespace std;
int Findpeak(int a[] ,int n){
    int m = n/2;
    int s, e;
    int peak = 0;
    // int temp = a[m];
    if (a[m]>a[m+1])
    {
        s = 0;
        e = m;
        while (e>=0)
        {
            if (a[e]<a[e-1])
            {
                peak = a[e-1];
            }
            else if(a[e-1]<a[e])
            {
                peak = a[e];
                break;
            }
            
            e--;    
        }
        
        return peak;
    }
    if (a[m]<a[m+1])
    {
        e = n-1;
        s = m+1;
        while (e>=s)
        {
            if (a[s]>a[s+1])
            {
                peak = a[s];
                break;
            }
            else if (a[s+1]>a[s])
            {
                peak = a[s+1];
            }
            s++;
            
        }
      return peak;  

    }
    
}
int main(){
   int arr[4]={11,15,19,3};
   int ans = Findpeak(arr,4);
   cout<<"peak element in array is : "<<ans;
}


