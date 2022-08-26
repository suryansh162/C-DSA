// decimal to binary
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
//     int n;
//     cout << "enter the number" << endl;
//     cin >> n;
//     int ans = 0;
//     int i = 0;
//     while (n != 0)
//     {
//         int bit = n % 2;
//         ans = (bit * pow(10, i)) + ans;
//         n = n / 2;
//         i++;
//     }

//     cout << ans;



// binary to decimal
 
 long n ;
 cout<<"enter your bits"<<endl;
 cin>>n;
 int ans = 0;
 int i=0;
 while (n!=0)
 {
    int digit = n%10;
    if (digit == 1)
    {
        ans = ans +pow(2,i);
    }
    n=n/10;
    i++;
    
 }

 cout<<ans;
 




}