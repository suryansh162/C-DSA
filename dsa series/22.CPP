// shifting elements by value k to right

// #include<iostream>
// using namespace std;

// int shiftarray(int a[],int b[],int n,int k){
//     int i = 0;
//     while (i!=n)
//     {
//         b[(i+k)%n] = a[i];
//         i++;

//     }

// }
// int printarray(int a[] ,int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<" ";
//     }

// }

// int main(){
//     int a[5] = {1,2,3,4,5};
//     int b[5];
//     shiftarray(a,b,5,2);
//     printarray(b,5);
// }

// Check rotated sorted array

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     int a[n] = {4, 5, 1, 2, 3};
//     int count = 0;
//     for (int j = 0; j < 5;j++)
//     {
//         if ((a[j] > a[j + 1]) || (a[n-1]>a[0]))
//         {
//             count++;
//         }
//     }

//     if (count == 1)
//     {
//         cout << "yes";
//     }
//     else
//     {
//         cout << "no";
//     }
// }

// Sum of two arrays
#include <iostream>
using namespace std;

int sumarray(int a[], int n, int b[], int m)
{
    int s = n - 1;
    int e = m - 1;
    int carry = 0;
    while ((s >= 0) && (e >= 0))
    {
        int temp = a[s] + b[e] + carry;
        a[s] = temp % 10;
        carry = temp / 10;
        s--;
        e--;
    }

    while (s>=0)
    {
        int temp = a[s] + carry;
        a[s] = temp % 10;
        carry = temp / 10;
        s--;
    }
    

      while (e>=0)
    {
        int temp = b[e] + carry;
        a[s] = temp % 10;
        carry = temp / 10;
        e--;
    }
}

int printarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[4] = {7, 8,9,5};
    int b[2] = {1,2};
    sumarray(a, 4, b, 2);
    printarray(a, 4);
}


/*


vector<int> reverse(vector<int> v ){
    int s = 0;
    int e = v.size()-1;
    while(s<=e){
        swap(v[s++],v[e--]);
    }
    return v;
}


vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int s = n - 1;
    int e = m - 1;
    int carry = 0;
    vector<int> ans;
    while ((s >= 0) && (e >= 0))
    {
        int temp = a[s] + b[e] + carry;
        carry = temp / 10;
        temp = temp % 10;
        ans.push_back(temp);
        s--;
        e--;
    }

    while (s>=0)
    {
        int temp = a[s] + carry;
        carry = temp / 10;
        temp = temp % 10;
        ans.push_back(temp);
        s--;
    }
    

      while (e>=0)
    {
        int temp = b[e] + carry;
        carry = temp / 10;
          temp = temp % 10;
        ans.push_back(temp);
        e--;
    }
    
    while(carry!=0){
        int temp = carry; 
        carry = temp/10;
        temp = temp%10;
        ans.push_back(temp);
    }
    return reverse(ans);
}

*/