
// 123 -> 321
#include <iostream>
// #include <math.h>
using namespace std;
int main()
{

    //     int n;
    //     cout<<"enter the number "<<endl;
    //     cin>>n;
    //     int ans = 0;

    //     while (n!=0)
    //     {
    //     if ((INT32_MIN/10>ans)||(ans>INT32_MAX/10))
    //     {
    //         return 0;
    //     }

    //         int digit = n%10;
    //         ans = (ans*10)+digit;
    //         n=n/10;

    //     }

    // cout<<ans;










    // 5 -> 101 ->  -> 010 -> 2
    // int n;
    // cout << "Enter the number " << endl;
    // cin >> n;
    // int m = n;
    // if(n==0){
    //     int a = 1;
    //     return a;
    // }
    // else{

    // int ans = 0;
    // int i = 0;
    // while (m != 0)
    // {
    //     ans = (ans << 1) | 1;
    //     m = m >> 1;

    // }

    // ans = ans & ~n;
    // cout<<ans;

    // }   









    // check that a number can be expressed in form of powe of 2
    int n;
    cout << "Enter the number " << endl;
    cin >> n;
    bool isnottrue = 0;
    if (n == 1 || n == 0)
    {
        cout<<"this is not a power multiple of 2"<<endl;
        
    }
    while (n!=1)
    {
        if (n % 2 != 0)
        {
            isnottrue = 1;
            break;
        }
        else {
            n=n/2;
            if (n == 1)
            {
                cout<<"yes it is divisible by 2 only completely"<<endl;
                
            }
            

        }
    }

    if(isnottrue){
    cout<<"this is not a power multiple of 2"<<endl;
    }
    
    



}