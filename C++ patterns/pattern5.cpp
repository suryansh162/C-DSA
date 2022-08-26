// #include<iostream>;
// using namespace std;
// int main(){
// int a,row,column;
// cin>>a;
// row=1;
// while (row<=a)
// {
//     for(column=1;column<=row;column++){
//     cout<<" * ";
   
//     }
//     cout<<endl;
//     row=row+1;

// }
// return 0;
// }

//method -2
#include<iostream>;
using namespace std;
int main(){
int a,row,column;
cin>>a;
row=1;
while (row<=a)
{
    column=1;
    while(column<=row){
    cout<<" * ";
    column=column+1;
    }
    cout<<endl;
    row=row+1;

}
return 0;
}