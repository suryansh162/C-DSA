// #include <iostream>
// using namespace std;
// int array(int arr[], int size)
// {

//     int max = INT32_MIN;
//     int min = INT32_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         cout << "Enter the " << i << " to store in array : " << endl;
//         cin >> arr[i];

//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }

//         if (min > arr[i])
//         {
//             min = arr[i];
//         }
//     }
//     cout << "the maximun value is :" << max << endl;
//     cout << "the minimun value is :" << min << endl;
// }
// int main()
// {
//     int arr[10];
//     // array(arr, 5);
//     array(arr, 10);
// }


//sum of all integers in an array

// #include<iostream>
// using namespace std;

// int arrsum(int arr[],int n){
//     int sum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//         sum = sum+arr[i];
        
//     }
//     return sum;
// }

// int main(){


//     int arr[5];
//     int answer = arrsum(arr,5);
//     cout<<"The sum of all elements of array is "<<answer<<endl;


// }



//reverse an array
#include<iostream>
using namespace std;

int reverseArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
       cout<<"Enter the "<< i <<" element of array number (1) "<<endl;
       cin>>arr[i];
            int j = n-i;
            int revarr[j];
            for (; j > n-i-1 ;j--)
            {
                int temp;
                temp = arr[i];
                revarr[j]=temp;
                cout<<"Reverse array number (2) : "<<j<<" th Element is "<<revarr[j]<<endl;
            }
                if (i==n-1)
                {
                cout<<"hello world"<<endl;
                cout<<revarr[j]<<endl;
                }
                
    }
    
}
int main(){
    int arr[5];
    reverseArray(arr,5);

}

