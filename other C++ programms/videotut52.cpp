// ARRAY OF OBJECTS USING POINTERS
#include <iostream>
using namespace std;

class kirana
{
    int ID;
    float price;

public:
    void setdata(int a, float b)
    {
        ID = a;
        price = b;
    }
    void dispalydata(void)
    {
        cout << "ID of item is : " << ID << endl;
        cout << "price of item is :" << price << endl;
    }
};
int main()
{
    //2 kirana shops 
    //krsari
    //sampada
    //int* ptr = &size;
    //int *ptr= new int [size];

    kirana *ptr = new kirana[5];//---> this will dynamically make array and allocate memory for 5 objects of class kirana 

    kirana *ptrtemp = ptr;//---> here we have done this because after running first for loop the pointer will point to the last+1 memory(here 6)
    //  which is wrong so we have made another poiner(ptrtemp) which points the 1st value pointer (ptr) is pointing(here 0) because when compiler 
    //  assign it dynamic memory it points the first block of allocation so ptrtemp will now point that value and will initialize from that value 
    //  on the next(for) loop
    //  1 2 3
    //  ^ 
    //  |
    //  |  
    //  ptr 
    //ptrtemp
 

    for (int i = 0; i < 5; i++)
    {
        int p;
        float q;
        cout<<"ID and prize of item "<<i+1<<" is "<<endl;
        cin>>p>>q;
        // (*ptr).setdata(p,q);-->also acceptable
        ptr->setdata(p,q);
        ptr++;
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<"ITEM NO. "<<i+1<<endl;
        ptrtemp->dispalydata();
        ptrtemp++;
    }
    
    
    return 0;
}