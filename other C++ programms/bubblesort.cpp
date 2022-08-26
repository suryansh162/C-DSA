// #include<iostream>;
// using namespace std;
// int main(){
//     int n;
//     int a[n];
// for (int i = 1; i < n; i++) // if i=0 to n-1 then j=0 to n-i-1  ***and *** if i=1 to n then j=0 to n-i  
// {  // this loop is for no. of rounds from 1 to n
//    for (int j = 0; j <n-i; j++)
//    { //this loop will do swap 
//        if (a[j]>a[j+1])
//        {
//            swap(a[j],a[j+1]);
//        }
       
//    }
   
// }


// return 0;
// }


//optimised code
#include<iostream>;
using namespace std;
int main(){
    int n;
    int a[n];
for (int i = 1; i < n; i++) // if i=0 to n then j=0 to n-i-1  ***and *** if i=1 to n then j=0 to n-i  
{
    bool swapped=false;
   for (int j = 0; j <n-i; j++)
   {
       
       if (a[j]>a[j+1])
       {
           swap(a[j],a[j+1]);
           swapped=true;
       }
       
   }
   if (swapped==false)
   {
       break;
   }
   
   
}


return 0;
}
