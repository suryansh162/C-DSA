// array swap alternate elements
// #include <iostream>
// using namespace std;
// int printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int swaparr(int a[], int n)
// {

//     int start = 0;
//     int end = 1;
//     while (a[end] < a[n])
//     {
//         int temp = 0;
//         temp = a[start];
//         a[start] = a[end];
//         a[end] = temp;
//         start += 2;
//         end += 2;
//     }
// }
// int main()
// {
//     int arr[6] = {1, 2, 3, 4, 5, 6};
//     swaparr(arr, 6);
//     printArray(arr, 6);
// }

// Unique element in the array

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 11;
//     int arr[n] = {1,2,3,4,5,6,5,4,3,2,1};
//     int start = 0;
//     int end = start + 1;
//     while (end < n)
//     {
//         if (arr[start] == arr[end])
//         {
//             arr[start] == 0;
//             arr[end] == 0;
//             start++;
//             end = start + 1;
//         }
//         else if (arr[start] == 0)
//         {
//             start++;
//             end = start + 1;
//         }

//         else
//         {
//             end++;
//         if (end == n-1 && arr[start] != arr[end])
//         {
//             cout << arr[start];
//         }
//         }
//     }
// }

// each element with unique count
#include <iostream>
using namespace std;
int main()
{
    int arrr[6] = {1, 3, 3, 2,2, 3};
    int ans = 0;
    for (int i = 0; i < 6; i++)
    {
        ans = ans ^ arrr[i];

        if (i == 7)
        {
            if (ans == 0)
            {
                cout << "yes 0";
            }
            else{
                cout<<"no 0";
            }
        }
    }
}
