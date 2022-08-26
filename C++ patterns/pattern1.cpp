// #include<iostream>;
// using namespace std;
// int main(){
// int a,row,column;
// cin>>a;
// row=1;
// while (row<=a)
// {
//     column=1;
//     while(column<=a){
//     cout<<" * ";
//     column=column+1;
//     }
//     cout<<endl;
//     row=row+1;

// }
// return 0;
// }

// **********************************************************************************************

// #include<iostream>
// using namespace std;
// int main(){
// //  cout<<"hello world"<<endl;
// int a =123;
// cout<<a<<endl;
// char b = 'v';
// float f = 1.2;
// double d =1.23;
// cout<<f<<" "<<d<<endl;
// cout<<sizeof(a)<<sizeof(b)<<sizeof(f)<<sizeof(d)<<endl;
// cout<<b<<endl;
// int m = 'a';
// cout<<m<<endl;

// char ch =97;
// cout<<ch<<endl;

// unsigned int z = -112;
// cout<<z<<endl;

// int adf=7;int bcc=0;
// bool chk = (adf!=bcc);
// cout<<chk<<endl;
// }

// *******************************************************************************************************

#include <iostream>
using namespace std;
int main()
{
    // int n;
    // cout<<"enter your number"<<endl;
    // cin>>n;
    // if(n>0){
    //     cout<<"number is positive";
    // }
    // else if(n<0){
    //     cout<<"number is negative";
    // }
    // else{
    //     cout<<"number is zero";
    // }

    // char n;
    // cout << "Enter the character" << endl;
    // cin >> n;
    // if (65 <= n && n <= 90)
    // {
    //     cout << "it is uppercase";
    // }
    // else if (97 <= n && n <= 122) 
    // {
    //     cout << "it is lowercase";
    // }
    // else if (49 <= n && n <= 57)
    // {
    //     cout << "it is numeric";
    // }
    // else
    // {
    //     cout << "it is zero";
    // }


// sum of all numbers till n
    // int n;
    // cin>>n;
    // int sum = 0;
    // int i=1;
    // while(i<=n){
    //     sum = sum+i;
    //     i++;
    //     // cout<<i<<endl;
    // }
    //     cout<<sum<<endl;

// sum of all even numbers till n
    // int n;
    // cin>>n;
    // int sum = 0;
    // int i=2;
    // while(i<=n){
    //     sum = sum+i;
    //     i=i+2;
    //     // cout<<i<<endl;
    // }
    //     cout<<sum<<endl;


// given number is prime or not

int n;
cout<<"enter  the number"<<endl;
cin>>n;
int i = 2;
while(i<n){
    if(n%i==0){
        cout<<"number is not prime for"<<i<<endl; 
    }
    else{
        cout<<"it is prime for"<<i<<endl;
    }
    i++;
}



}
