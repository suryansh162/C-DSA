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

// Find  key in a rotated sorted array

// #include <iostream>
// using namespace std;
// int findpivot(int a[], int n)
// {
//     int s = 0;
//     int e = n - 1;
//     int m = s + (e - s) / 2;
//     while (s < e)
//     {
//         if (a[m] >= a[0])
//         {
//             s = m + 1;
//         }

//         if (a[m] <= a[e])
//         {
//             e = m;
//         }

//         m = s + (e - s) / 2;
//     }
//     return s;
// }

// int main()
// {
//     int arr[8] = {17, 29, 1, 12, 23, 31, 41, 51};
//     int ans = findpivot(arr, 8);
//     int k = 17;
//     int start = ans - 1;
//     int end = ans;
//     while (start >= 0 || end <= 7)
//     {
//         if (arr[start] == k)
//         {
//             cout << start;
//         }
//         if (arr[end] == k)
//         {
//             cout << end;
//         }
//         start--;
//         end++;
//     }
// }
//*********************************************************************************************************************************
// Search space -> range where prob of finding is ans is significant

// Finding squareroot through binary

// #include <iostream>
// using namespace std;
// int squareroot(int n)
// {
//     int s = 0;
//     int e = n/2;
//     int m = s + (e - s) / 2;
//     int ans = -1;
//     while (s <= e)
//     {
//         if (m * m < n)
//         {
//             ans = m;
//             s = m + 1;
//         }
//         else if (m * m > n)
//         {

//             e = m - 1;
//         }
//         else if (m * m == n)
//         {
//             return m;
//         }
//         m = s + (e - s) / 2;
//     }
//         return ans;
// }
// int main()
// {
//     int n;
//     cout << "Enter the number : " << endl;
//     cin >> n;
//     int answer = squareroot(n);
//     cout << answer;
// }

// Finding square root presice

#include <iostream>
using namespace std;
int squareroot(int n)
{
    int s = 0;
    int e = n / 2;
    int m = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (m * m < n)
        {
            ans = m;
            s = m + 1;
        }
        else if (m * m > n)
        {

            e = m - 1;
        }
        else if (m * m == n)
        {
            return m;
        }
        m = s + (e - s) / 2;
    }
    return ans;
}

double presicesol(int n, int presice, int answer)
{
    double factor = 1;
    double newans = answer;
    for (int i = 0; i < presice; i++)
    {
        factor = factor / 10;
        for (double j = newans; j * j <= n; j = j + factor)
        {
            newans = j;
        }
    }
    return newans;
}
int main()
{
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;
    int answer = squareroot(n);
    cout << presicesol(n, 3, answer);
}
