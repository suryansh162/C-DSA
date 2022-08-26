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
    cout<<row<<" ";
    column=column+1;
    }
    cout<<endl;
    row=row+1;

}
return 0;
}