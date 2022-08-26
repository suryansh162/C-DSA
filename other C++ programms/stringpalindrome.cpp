#include<iostream>
#include<string.h>
using namespace std;

bool valid(char s)
{
    if (('A' <= s && s<='Z')||('a'<= s && s <='z')||('0'<= s&& s <='9'))
    {
        return 1;
        
    }
   return 0;
}

bool checkpalindrome(string str)
{
    int s=0,e=str.length()-1;
    while (s<=e)
    {
        cout<<endl;
        cout<<"temp line 21"<<str[s]<<" "<<str[e]<<endl;
        if (str[s]!=str[e])
        {
            cout<<"inside if"<<endl;
           return 0;
        }
        else
        {
            s++;
            e--;
        }
        
    }
    return 1;
    

}

char lowertoupper(char c)
{
   if (('a'<=c<='z')||('0'<=c<='9'))
   {// N --78
   // 97< 78 < 122
       cout<<"line 43"<<c<<endl;
       return c;
   }
   else
   {
       char temp= c-'A'+'a';
       cout<<" line 48 c:"<<c<<"  temp : "<<temp<<endl;
       return temp;
   }
   

   
}

bool removeunvalid(string str){
// valid string store krne kr liye temp tiyrr kiya    
string temp ="";
for (int  j = 0; j < str.length(); j++)
{
    // invalid kachra saaf kiya
    if (valid(str[j]))
    {
        // valid nayi string banayi
        temp.push_back(str[j]);
    }
}
cout<<"temp line 64"<<temp<<endl;
// lower case to upper case sensitive hataya
for (int i = 0; i < temp.length(); i++)
{
    temp[i]=lowertoupper(temp[i]);
}
cout<<"temp line 70"<<temp<<endl;
return checkpalindrome(temp);

}


int main(){
    string s;
    cin>>s;
    cout<<"string palindrome or not 1 for yes & 0 for no :"<<removeunvalid(s);




return 0;
}




