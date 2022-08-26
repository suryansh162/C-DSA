#include<iostream>;
using namespace std;
int main(){
int row,column,a;
cin>>a;
row=1;
while (row<=a)
{
    int space = a-row;
    while (space)
    {
        cout<<" ";
        space=space-1;

    }
    column=1;
    while (column<=row)
    {
        cout<<" * ";
        column++;
    }
    cout<<endl;
    row++;
}


return 0;
}