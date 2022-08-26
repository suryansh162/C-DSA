// // use of exit to come out of switch inside infinite loop  whithout using break

// #include<iostream>
// using namespace std;
// int main(){
// //     int z;
// //     cin>>z;
// //     while (true){
// //         int num = 1;
// //         switch (num)
// //         {
// //         case 1: cout<<"hello";
// //                  exit(1);

// //             break;

// //         default: cout<<"oye";
// //             break;
// //         }
// //     }
// // exit(1);

// int n;
// cout<<"enter the amount"<<endl;

// cin>>n;
// int i;
// int j;
// int k;
// int l;
// // int num = [100,50,20,1];
// switch (100)
// {
// case 100:
//            i= 0;
//             while (n >= 100)
//             {
//                 n = n - 100;
//             i++;
//             }

// case 50:
//             j = 0;
//             while (n >= 50)
//             {
//                 n = n - 50;
//             j++;
//             }

// case 20:
//             k = 0;
//             while (n >= 20)
//             {
//                 n = n - 20;
//             k++;
//             }

// case 1:
//            l= 0;
//             while (n >= 1)
//             {
//                 n = n - 1;
//             l++;
//             }
//             break;

//     // default:cout<<"this contains other also other then 100 50 20 1";
//     // break;
// }

// cout<<"it took " <<i<<  " 100 rupees note "<< j << " 50 rupees note "<< k <<" 20 rupees note and "<< l <<" 1 rupee coins" ;
// }

// //power function
// #include <iostream>
// using namespace std;
//     int power(int n, int m)
//     {

//         int ans =1;
//         for (int i = 0; i < m; i++)
//         {
//             ans = ans * n;
//         }
//         return ans;
//     }
// int main()
// {
//     int n, m;
//     cout << "enter the number :" << endl;
//     cin >> n;
//     cout << "enter the power :" << endl;
//     cin >> m;
//     int answer = power(n,m);

//     cout<<"the ans is "<<answer;
// }

// //even odd

// #include<iostream>
// using namespace std;
// int evenOdd(int n){
//     if (n%2 == 0)
//     {
//         cout<<"even";
//     }
//     else{
//         cout<<"odd";
//     }

// }
// int main(){
//     int n;
//     cout<<"enter the number "<<endl;
//     cin>>n;
//     evenOdd(n);
// }

// nCr

// #include<iostream>
// using namespace std;
//     int fact(int n){
//         int ans=1;
//     while (n>=1){
//         ans = ans * n;
//         n=n-1;
//     }
//     return ans;
//     }
//     int nCr(int n,int r){
//     int a = fact(n);
//     int b = fact(r) *  fact(n-r);
//     int c = a/b;
//     return c;

//     }
// int main(){
//     int n , r;
//     cout<<"Enter the value of n "<<endl;
//     cin>>n;
//     cout<<"Enter the value of r "<<endl;
//     cin>>r;
//     int answer = nCr(n,r);
//     cout<<"the answer is "<<answer<<endl;

// }

// prime or not
// #include <iostream>
// using namespace std;

// bool isPrime(int n)
// {
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             return 0;
//         }
//     }

//     return 1;
// }

// int main()
// {
//     int n;
//     cout << "enter the number " << endl;
//     cin >> n;
//     if (isPrime(n))
//     {
//         cout << "The number " << n << " is prime" << endl;
//     }
//     else
//     {
//         cout << "The number " << n << " is not prime " << endl;
//     }
// }




//input = n ;  output= n*3 + 7
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number "<<endl;
//     cin>>n;
//     int c = n*3 +7;
//     cout<<c;

// }



// //print the number of set bits
// #include<iostream>
// using namespace std;

// int bitCounter(int a){
//     int count = 0;
//     while (a>0)
//     {
//         if(a%2==1){
//             count++;
//         }
//         a=a/2;

        
//     }
//     return count;
    

// }

// int main(){
//     int a , b;
//     cout<<"Enter the first digit"<<endl;
//     cin>>a;
//     cout<<"Enter the second digit"<<endl;
//     cin>>b;
//     int ans1 = bitCounter(a);
//     int ans2 = bitCounter(b);
//     cout<<"Total number of setbits are "<< ans1+ans2 <<endl;


// }




// fibonacci series
#include<iostream>
using namespace std;

int fibonacci(int n){
    if (n==0)
    {
        return 0;
    }
     if (n==1)
    {
        return 1;
    }
    int a = 0;
    int b = 1;
    int nextnum = a+b;
for (int i = 2; i < n; i++)
{
    
   
   nextnum = a+b; 
   a = b;
   b =  nextnum;
}
return b;
}


int main(){
int n;
cout<<"Enter the number :"<<endl;
cin>>n;
int answer = fibonacci(n);
cout<<"The value of fibonacci at "<<n <<" th term is "<<answer;

}

