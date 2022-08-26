// // // #include<iostream>;
// // // using namespace std;

// // // int stringlength(char a[])/////--->to calculate the string length
// // // {
// // //     int count=0;
// // //     for (int i = 0; a[i]!='\0'; i++)
// // //     {
// // //         count++;
// // //     }
// // //     return count;
// // // }

// // // int main(){
// // // char a[20];
// // // cout<<"enter your name "<<endl;
// // // cin>>a;
// // // cout<<"your name is :"<<a<<endl;
// // // ///   \0--->terminator-> used to stop printing char array and denotes the end of a array 
// // // // a[2] ='\0';
// // // // cout<<"your name after placing terminator at 2nd index is :"<<a; 
// // // ///    space,enter-->will also stop printing the char array
// // // cout<<"lenth of string is :"<<stringlength(a);
// // // return 0;
// // // }



// // // ***************************************************************
// // /// REVERSE A STRING
// // #include<iostream>;
// // using namespace std;

// // void reverse(char c[],int n)
// // {
// //         int s=0;
// //         int e=n-1;
// //         while(s<=e){
// //         swap(c[s++],c[e--]);
// //         }
    
    
// // }
// // int length(char c[])
// // {
// //     int count=0;
// //     for (int i = 0; c[i] !='\0'; i++)
// //     {
// //         count++;
// //     }
// //     return count;
    
// // }

// // int main(){
// // char c[20];
// // cout<<"enter :"<<endl;
// // cin>>c;
// // cout<<"output :"<<c<<endl;
// // int l=length(c);
// // cout<<"the length of string is :"<<l<<endl;
// // cout<<"after revesing :";
// // reverse(c,l);
// // cout<<c;
// // return 0;
// // }

// // ******************************************************************************************************************
// // // CHECKING PALINDROME
// // #include<iostream>;
// // using namespace std;

// // int length(char c[])
// // {
// //     int count=0;
// //     for (int i = 0; c[i]!='\0'; i++)
// //     {
// //         count++;
// //     }
// //     return count;
    
// // }

// // bool checkpalindrome(char c[],int n)
// // {
// //     int s=0;
// //     int e=n-1;
// //     while (s<=e)
// //     {
// //        if (c[s]!=c[e])
// //        {
// //            return 0;
// //        }
// //        else 
// //        {
// //            s++;
// //            e--;
// //        }
// //     }
// //     return 1;
// // }

// // int main(){
// // char c[20];
// // cout<<"enter :"<<endl;
// // cin>>c;
// // cout<<"your name is :"<<c<<endl;
// // int n=length(c);
// // cout<<"length :"<<n<<endl;
// // cout<<"palindrome or not :"<<checkpalindrome(c,n);

// // return 0;
// // }



// // ****************************************************************************************************************************************************
// // CHECKING PALINDROME WITHOUT DIFFERENCE BETWEEN 'N' and 'n'-->not sensetive
// // also only consider number and characters 
// #include<iostream>;
// using namespace std;

// char lowertoupper(char ch)
// {
//     if (ch>='a' &&ch<='z')
//     {
//         return ch;
//     }
//     else
//     {
//         char temp= ch -'A'+'a';
//         return temp;
//     }
    
// }

// int length(char c[])
// {
//     int count=0;
//     for (int i = 0; c[i]!='\0'; i++)
//     {
//         count++;
//     }
//     return count;
    
// }

// bool checkpalindrome(char c[],int n)
// {
//     int s=0;
//     int e=n-1;
//     while (s<=e)
//     {
//        if (lowertoupper(c[s])!=lowertoupper(c[e]))
//        {
//            return 0;
//        }
//        else 
//        {
//            s++;
//            e--;
//        }
//     }
//     return 1;
// }

// int main(){
// char c[20];
// cout<<"enter :"<<endl;
// cin>>c;
// cout<<"your name is :"<<c<<endl;
// int n=length(c);
// cout<<"length :"<<n<<endl;
// cout<<"palindrome or not :"<<checkpalindrome(c,n)<<endl;
// cout<<lowertoupper('c');
// cout<<lowertoupper('C');

// return 0;
// }



// ************************************************************************************************

// // CHECKING PALINDROME WITHOUT DIFFERENCE BETWEEN 'N' and 'n'-->not sensetive
// // also only consider number and characters 
#include<iostream>
using namespace std;

char lowertoupper(char ch)
{
    
    if (ch>='a' &&ch<='z')
    {
        return ch;
    }
    else
    {
        char temp= ch -'A'+'a';
        // in case of Z 90 - 65 + 97
        //90+32
        //49 +32
        return temp;
    }
    
}

int length(char c[])
{
    int count=0;
    for (int i = 0; c[i]!='\0'; i++)
    {
        count++;
    }
    return count;
    
}

bool checkpalindrome(char c[],int n)
{
    int s=0;
    int e=n-1;
    while (s<=e)
    {
       if (lowertoupper(c[s])!=lowertoupper(c[e]))
       {

           return 0;
       }
       else if (33<=lowertoupper(c[s])<=39 )
       {
          break;
           
       }
        else if (33 <=lowertoupper(c[e])<= 39 )
       {
           break;
       }

       /*else if(c[s]==c[e] )
       {
           s++;
           e--;
            cout<<"line 239"<<endl;           

       }
       else if('0' <=c[s]<='9'&& '0'<=c[e]<='9')
       {
//dead code
cout<<"line 243"<<endl;           
           s++;
           e--;
       }*/
       
    }
    return 1;
}

int main(){
char c[20];
cout<<"enter :"<<endl;
cin>>c;
cout<<"your name is :"<<c<<endl;
int n=length(c);
cout<<"length :"<<n<<endl;
cout<<"palindrome or not :"<<checkpalindrome(c,n)<<endl;
cout<<lowertoupper('c')<<" ";
cout<<lowertoupper('&');

return 0;
}
