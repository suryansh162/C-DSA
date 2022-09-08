
// Selection sort

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 5;
//     int arr[n] = {64, 125, 122, 22, 11};
//     int s = 0;
//     int e = 1;
//     while ((s < n - 1) && (e<n))
//     {
//         if (arr[s] > arr[e])
//         {
//             swap(arr[s], arr[e]);
//             e++;
//         }
//         else
//         {
//             e++;
//         }
//         if (e == n )
//         {
//             s++;
//             e = s + 1;
//         }

//         for (int i = 0; i < 5; i++)
//         {
//             cout << arr[i] << " ";
//         }
//     }
// }


// 2nd method 
#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n] = {64, 125, 122, 22, 11};
    for (int i = 0; i < n-1 ;i++)
    {
        for (int j = i+1; j <= n-1; j++)
        {
            if (arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    for (int k = 0; k < n; k++)
    {
        cout<<arr[k]<<" ";
    }
    
}