#include<iostream>;
using namespace std;
int main(){
int a,row,column;
cin>>a;
row=1;
int count=1;
while (row<=a)
{
    column=1;
    count=row;
    while(column<=row ){
        char ch='D'-count+column;
    cout<<ch<<" ";
    column=column+1;
    }
    count++;
    cout<<endl;
    row=row+1;

}
return 0;
}