// // // // #include<iostream>;
// // // // using namespace std;
// // // // int power(int,int){
// // // //     int a,b;
// // // //     cin>>a>>b;
// // // //     int ans =1;
// // // //     for (int i = 0; i < b; i++)
// // // //     {
// // // //         ans=ans*a;

// // // //     }
// // // //     return  ans;
    
// // // // }
// // // // int main(){
// // // //     int c,d;
// // // //     cout<<power(c,d)<<endl;

// // // // return 0;
// // // // }

// // // // even or odd
// // // #include<iostream>;
// // // using namespace std;

// // // int num(int a){
    
// // //     if(a%2==0){
// // //         cout<<"even"<<endl;

// // //     }
// // //     else
// // //     {
// // //         cout<<"odd"<<endl;
// // //     }
   
// // // }

// // // int main(){
// // //     int c;
// // //     cin>>c;
// // //     cout<<"the number is ";
// // //     num(c);
// // //     // cout<<"the number is :"<<num(c)<<endl;

// // // return 0;
// // // }


// // //factorial
// // #include<iostream>
// // using namespace std;

// // int fact(int n){
    
// //     int ans =1;

// //     for (int i = 1; i <= n; i++)
// //     {
// //       ans = ans*i;
// //     }
// //     return ans;
    
// // }
// // int nCr(int n,int r){
    
// //     int num=fact(n);
// //     int den= fact(r)*fact(n-r);
// //     return num/den;

// // }

// // int main(){
// //     int n,r;
// //     cin>>n>>r;
// //     cout<<"the factorial is :"<<nCr(n,r)<<endl;
    


// // return 0;
// // }

// //set bits in a and b
// #include<iostream>;
// using namespace std;

// int setabits(int a){
//     int bits=0;
//     while (a!=0)
//     {
//       if(a&1){
//           bits ++;
//       }
//       a=a>>1;
//     }
//     return bits;
// }

// int setbbits(int b){
//     int bits=0 ;
//       while (b!=0)
//     {
//       if(b&1){
//           bits ++;
//       }
//       b=b>>1;
//     }
//    return bits;   
// } 

// int main(){
// int a,b;
// cin>>a>>b;
// int ans1=setabits(a);
// int ans2=setabits(b);
// int ans = ans1+ans2;
// cout<<"total bits are"<<ans<<endl;

// return 0;
// }


// print n fibonacci number
#include<iostream>;
using namespace std;

int fib(int a)
{
    if (a==1)
    {
        return 0;
    }
     else if (a==2)
    {
        return 1;
    }
    else if (a>2)
    {
        return fib(a-1) +fib(a-2);
    
    
    }
    else
    {
        return a;
    }
    
}

int main(){
    int n;
    cin>>n;
    cout<<"the "<<n<<" term at fibb sequence is "<<fib(n)<<endl;
return 0;
}