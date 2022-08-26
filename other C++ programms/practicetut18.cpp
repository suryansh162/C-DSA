#include<iostream>;
using namespace std;

//RECURSION IS WHEN A FUNCTION CALLS ITSELF (MAYBE INSIDE ITSELF) 
// int factorial(int n){   // this is an example of recursion function
//     if (n<=1)
//     {
//        return 1;
//     }
//     return n*factorial(n-1);
// } 
// int main(){
//     int a;
//     cout<< "enter the value of a "<<endl;
//     cin>>a;
//     cout<<"the value of factorial of "<< a << " is "<<factorial(a)<<endl;

// return 0;
// }



//FIBONACCI SERIES - 1,1,2,3,5,8,13,21,..............
int fib(int n){   // this is an example of recursion function
    if (n<=1)
    {
       return 1;
    }
    return fib(n-1) + fib(n-2);
} 
int main(){
    int a;
    cout<< "enter the value of a "<<endl;
    cin>>a;
    cout<<"the value of fibonacci  series at the term "<< a << " is "<<fib(a)<<endl;

return 0;
}


// fibonacci is not a good practice as it calls same function again and again it gives a big overhead
// like if we calculate 
//fib(5) = [fib(4)] + [fib(3)]
//fib(5) = [fib(3) +fib(2)] + [fib(2) + fib(1) ] ---> as we can see here fib(2) is calling itself again and again that is creating a big overhead in the function