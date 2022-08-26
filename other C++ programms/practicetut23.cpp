#include<iostream>;
using namespace std;
//--->how to make array in class 
class shop{
    int item_ID[100];
    int item_price[100];
    int counter;

    public:
    void initcouner(void){ counter = 1;}
    void setdata();
    void displaydata();

};

void shop :: setdata(){
    cout<<"Enter the ID of your item "<<counter<<endl;
    cin>>item_ID[counter];

    cout<<"Enter the price of your item "<<counter<<endl;
    cin>>item_price[counter];
    counter ++;

}

void shop :: displaydata(){
    for (int i = 1; i < counter; i++)
    {
        cout<<"the price of your item with ID "<<item_ID[i]<<" is "<<item_price[i]<<endl;
    }
    
}


int main(){
    shop dukan;
    dukan.initcouner();
    dukan.setdata();
    dukan.setdata();
    dukan.setdata();
    dukan.setdata();
    dukan.setdata();
    dukan.displaydata();

return 0;
}