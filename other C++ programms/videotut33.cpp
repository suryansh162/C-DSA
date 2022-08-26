/* here we are dynamically initializing the objects after overloading of a constructor 
till now we were initializing (giving value) to the objects while running the program like we were knowing that which constructor will run but now we are using dynamic initialization of obejcts
dynamically initializing of the object means that "cin <<" is involved i.e, the object will get the initialization during running of the program that is the process is symultaneous
we are not writing the initialization of objects in the code we will take the input values from the user and then the program will decide simutaneous that which constructor to run thatis
constructor overloading and running of the program will be simultaneous*/
#include<iostream>;
using namespace std;

class bankdeposit{
    int principal;
    int years;
    float intrestrate;
    float returnvalue;

    public:
    bankdeposit(){};
    bankdeposit(int x,int y,float z);
    //z is intrest rate it can be in fraction(float/double) or in percentage(int)
    
    bankdeposit(int x,int y,int z);
    //z is here intrest rate which can only be in integer that is in percentage
    void bankdepositshow();
};

bankdeposit::bankdeposit(int x,int y,float z){
    principal=x;
    years=y;
    intrestrate=z;// here we will enter the value of intrest rate as a float eg- 0.05,0.04,0.06;etc.
    returnvalue=principal;

    for (int i = 0; i < y; i++)
    {
       returnvalue= returnvalue* (1+intrestrate);//this will run the loop for the number of years we keep the money suppose if we keep money for 3 yrs then loop wil run 3 times and the returnvalue will be updated everytime we run the loop i.e, next time the updated returnvalue will go in the loop and will run
    }
    
}


bankdeposit::bankdeposit(int x,int y,int z){
    principal=x;
    years=y;
    intrestrate=float(z)/100;// here we will enter the value of intrest rate as a integer like 3,4,5;etc. so we have divided it by hundread so that  it will convert it to 0.03,0.04,0.05;etc resp.
    returnvalue=principal;

    for (int i = 0; i < y; i++)
    {
       returnvalue= returnvalue* (1+intrestrate);//this will run the loop for the number of years we keep the money suppose if we keep money for 3 yrs then loop wil run 3 times and the returnvalue will be updated everytime we run the loop i.e, next time the updated returnvalue will go in the loop and will run
    }
    
}

void bankdeposit ::bankdepositshow(){
    cout<<"the amout initially you have deposit was Rs"<<principal<<" and after "<<years<<" years the amount you have recieved will be "<<returnvalue<<endl;


}
int main(){
    bankdeposit bd1,bd2,bd3;
    int x,y;
    float z;
    int R;
    cout<<"the valur of principal,years and intrest rate(fraction value) is "<<endl;
    cin>>x>>y>>z;
    bd1=bankdeposit(x,y,z);
    bd1.bankdepositshow();


cout<<"the valur of principal,years and intrest rate(integer value) is "<<endl;
    cin>>x>>y>>R;
    bd2=bankdeposit(x,y,R);
    bd2.bankdepositshow();


return 0;
}