/* there are three type of control structures :
1)sequence structure : entry-->action 1-->action 2-->exit
2)selection structure :entry-->condition check-->if true-->action 1--->exit
                                              -->if false-->action 2-->exit             
3)loop structure:entry-->condition-->true-->action 1-->entry (loop strats again)
                                  -->false-->action2-->exit.(loop ends)                        
all the above 3 can also be categorized under basic control structure. */
 
#include<iostream>
using namespace std;

 int main(){
 int age;
 cout<<"what is your age"<<endl;
 cin>>age;
 //********selection control structure :if else-if else ladder: i.e. more then one if else statements.********************** 
//  if((age<18)&&(age>0)){ 
//      cout<<"you are not eligible"<<endl;
// }
//    else if(age==18){
//        cout<<"you are just eligible"<<endl;
    
//    }
//    else if(age<1){
//   cout<<"you are not yet born"<<endl;
    
//    }
   
//     else{
//         cout<<"you are fully eligible"<<endl;
//     }
//********************selection control statements : switch statements*******************
switch (age)
{
case 18:
cout<<"your age is 18"<<endl;

    break;
    case 2:
cout<<"your age is 2"<<endl;

    break;
    case 22:
cout<<"your age is 22"<<endl;

    break;

default:
cout<<"no special cases allowed"<<endl;
    break;
} 
// here after each switch we have to write "break" to break the statment if we dont do this then we will see all the switch statments printing
//one below thw other istead only the required statment to be get printed including default .
// "break" helps to come out of the switch if any of the condition matches.
cout<<"done with thw switch";
     return 0;
 } 