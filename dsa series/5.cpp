#include <iostream>
using namespace std;

int main()
{
    // int a = 4;
    // int b = 5;

    // cout << "a&b " << (a & b) << endl;
    // cout << "a|b " << (a | b) << endl;
    // cout << "~b " << ~b << endl;
    // cout << "~a " << ~a << endl;
    // cout << "a^b " << (a ^ b) << endl;

    // cout << (17 >> 1) << endl;
    // cout << (17 >> 2) << endl;
    // cout << (2 << 3) << endl;
    // cout << (19 << 2) << endl;
    // cout << (23 << 1) << endl;

    // for (int i = 0, j = 12, k = 34; i < 10, j < 13, k < 35; i++, j++, k++)
    // {
    //     cout << i << " " << j << " " << k;
    // }

// // fibonacci series
//     int n = 10;
//     int a = 0;
//     int b = 1;

//     for (int i = 1; i <= 10; i++)
//     {
//         int sum =a+b; 
//         cout<<sum<<" ";
//         a=b;
//         b=sum;
        
//     }
    


// int n;
// cout<<"enter the number ";
// cin>>n;
// bool isprime =1;
// for (int i = 2; i < n; i++)
// {
//     if (n%i==0)
//     {
//         cout<<n <<" is not prime as it is divisible by "<< i <<endl; 
//         isprime = 0;
//         break;
//     }
    
// }

// if(isprime=0){
//     cout<<"not prime";
// }
// else{
//     cout<<"prime";
// }


//continue
// for (int i = 0; i <5; i++)
// {
//     cout<<"hi"<<endl;
//     cout<<"hello"<<endl;
//     continue;
//     cout<<"hyyyy"<<endl; // due to continue this statment will get skipped
// }



// leetcode 
// question 1 -given integer number n return the diff between product of its digits and sum of its digits

// int n;
// cout<<"enter the input : "<<endl;
// cin>>n;
// int div;
// int mod ;
// int product = 1;
// int sum =0;
// while (n!=0)
// {
//     mod = n%10;
//     n = n/10;
//     product = mod*product;
//     sum = sum+mod;

// }

// cout<<product-sum;



// Q2-write a function that takes an unsigned integer and returns the number of 1 bits it has (also called hamming weight)

int n;
cout<<"enter the number"<<endl;
cin>>n;
int count=0;
if (n==1)
{
    count=1;
    cout<<count;
}
else{
while (n!=0)
{
    if(n%2==0){
    n=n/2;
    int mod = n%2;
    if (mod==1)
    {
        count++;
    }
    }
    else{
        n=n/2;
    int mod = n%2;
    if (mod==1)
    {
        count = 1;
        count++;
    }

    }
}


// if (n%2==0)
// {
// cout<<count;

// }
// else
// {
    int m=count ;
    cout<<m;}
// }


}