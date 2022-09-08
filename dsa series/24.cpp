//  \0   -> null character ->ascii value =0 -> acts as terminator in character array -> when space , tab,new-line


// counting length of characters
// #include<iostream>
// using namespace std;

// int countchar(char c[]){
//     int count = 0;
//     for (int i = 0; c[i]!='\0' ; i++)
//     {
//         count++;
//     }
//     return count;
// }
// int main(){
//     char c[20];
//     cout<<"Enter the character"<<endl;
//     cin>>c;
//     int ans = countchar(c);
//     cout<<ans;
// }


//reversing a charcter array

// #include<iostream>
// using namespace std;

//  int countchar(char c[]){
//     int count = 0;
//     for (int i = 0; c[i]!='\0' ; i++)
//     {
//         count++;
//     }
//     return count;
// }

// char reversechar(char c[]){
//     int n = countchar(c);
//     int s = 0;
//     int e= n-1;
//     while (s<=e)
//     {
//         swap(c[s++],c[e--]);
//     }
// }

// int main(){
//     char c[20];
//     cout<<"Enter the character"<<endl;
//     cin>>c;
//     reversechar(c);
//     cout<<c;
// }


//checking palindrome
// not case sensetive

// #include<iostream>
// using namespace std;

// char tolowercase(char ch){
//     if (('a'<= ch) && (ch<='z'))
//     {
//         return ch;
//     }
//     else if(('A'<= ch) && (ch<='Z')){
//         char temp = ch;
//         ch = temp - 'A' +'a';
//         return ch;
//     }

//     // else if((0 <= ch) && (ch<=9)){
//     //     char temp = ch;
//     //     ch = temp - 0 +'a';
//     //     return ch;
//     // }
//     // else{ 
//     //     break;
//     // }
    
// }

//  int countchar(char c[]){
//     int count = 0;
//     for (int i = 0; c[i]!='\0' ; i++)
//     {
//         count++;
//     }
//     return count;
// }

// char checkpalindrome(char c[]){
//     int n = countchar(c);
//     int s = 0;
//     int e= n-1;
//     bool b = true;
//     while (s<=e)
//     {
//         if (tolowercase(c[s]) != tolowercase(c[e]))
//         {
//             cout<<"not a palindrome";
//             b =false;
//             break;
//         }
//         else
//         {
//             s++;e--;
//         }
        
//     }

//     if (b == true)
//     {
//         cout<<"yes its a palindrome";
//     }
    
// }

// int main(){
//     char c[20];
//     cout<<"Enter the character"<<endl;
//     cin>>c;
//     checkpalindrome(c);
// }




// Reverse Words

#include<iostream>
using namespace std;

char arraytostring(char c[],int n){
    for (int i = 0; i <= n ; i++)
    {
        int s = 0;
        int e = i-1;
        if ((c[i] == 32) || (c[i] == 0))
        {
            while (s<=e)
            {
                swap(c[s],c[e]);
                s++;
                e--;

            }
            s = i+1;
            i = i+2;
            e = i-1;
        }
       
    }
}

char printarray(char c[],int n ){
    for (int i = 0; i < n; i++)
    {
        cout<<c[i];
    }
    
}
int main(){

    char c[20];
    cout<<"Enter your character"<<endl;
    cin>>c;
    arraytostring(c , 20);
    printarray(c,20);

   

}




// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
    
//     //string s ="s","k","y"," ","t","h","e";

//    // char s[8] = {'s','k','y','\0','t','h','e','\0'};

//     string st = " sky the is blue ";

//     int s = 0;
//     int e = st.length()-1;

//     while(s <= e)
//     {
//         swap(st[s++],st[e--]);
//     }

//     int begin = 0;
//     int end;
//     string temp = "";

//     cout<<st.length()<<endl;

//     for(int i = 0;i <= st.length()-1;i++)
//     {
        
//         if(st[i] == ' ' || st[i] ==  '\0')
//         {
//             end = i-1;
//             for(int j = end; j >= begin;j--)
//             {
//                 temp.push_back(st[j]);
//             }
//             begin = i;
//         }
//     }

//     for(int i= 0; i < st.length() ; i++){
//         cout<<st[i];
//     }

//     cout<<endl;

//     for(int i = 0; i < temp.length();i++){
//         cout<<temp[i];
//     }
//     return 0;
// }