//INSERTION SORTING

// #include<iostream>
// using namespace std;
// int main(){
//     int n =10;
//     int a[n] = {123,3,13,4,44,143,41,35,45,2};
//     for (int i = 1; i < n; i++)
//     {
//         int temp = a[i];
//         int j = i-1;
//         for (; j >= 0; j--)
//         {
//             if (a[j]>temp)
//             {
//                 a[j+1] = a[j];
//             }
//             else
//             {
//                 break;
//             }

//         }
//          a[j+1] = temp;
//     }
//     for (int k = 0; k < n; k++)
//     {
//         cout<<a[k]<<" ";
//     }

// }

// 2nd method by while loop
#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int arr[n] = {123, 3, 13, 4, 44, 143, 41, 35, 45, 2};
    int s = 1;
    while (s <= n - 1)
    {   int temp = arr[s];
        int e = s - 1;
        while (e >= 0)
        {
            if (arr[e] > temp)
            {
                arr[e + 1] = arr[e];
                e--;
            }
            else
            {
                break;
            }
            
        }
        arr[e+1] = temp;
        s++;

    }
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
}