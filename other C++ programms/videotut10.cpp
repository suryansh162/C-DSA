#include<iostream>
using namespace std;
int main(){

    /*loops in c++:-
    1.FOR LOOP : USED FOR REDUCING COMPLEXITY AND LENGTH OF CODE
    2.WHILE LOOP
    3.DO WHILE LOOP



    1.FOR LOOP IN C++
    SYNTAX FOR FOR LOOP
    for(initialization;condition;updation)
    {
        loop body(c++ code);
    }
 */
//for (int i = 0; i < 40; i++)
//{
  //  cout<<i<<endl;
//}
// EXAMPLE OF INFINITE FOR LOOP
// for (int i = 0; 35 < 40; i++){
//     cout<<i<<endl;
// }
//  2.WHILE LOOP IN C++
// SYNTAX FOR WHILE LOOP :
// while(condition){
 //   code in c++; 
 //}

 // printing numbers from 1 to 10
//  int i=1;
//  while (i<=10){
//  cout<<i<<endl;
//  i++; 
//  }

 // infinite while loop
//  int i=1
//  while (true)
//  {
//    cout<<i<<endl;
//    i++;
//  }

//*******************************
//  3. DO WHILE LOOP IN C++
// SYNTAX FOR  DO WHILE LOOP :
// DO{
 //   code in c++; 
 //}while(condition);

 // printing numbers from 1 to 10
// int i=1;
// do{
//   cout<<i<<endl;
//   i++;
// } while(i<=10);
// diff between WHILE AND DO WHILE IS THAT IN DO WHILE THE PROGRAM WILL RUN ONCE EVEN IF THE CONDITION IS NOT TRUE BUT THIS WILL NOT HAPPEN IN WHILE
 
 
 //************************WRITING TABLE OF 6*******************
//my soln //  int i=1; 
//  for (i/6==0; i <= 60 ; i++)
//  {cout<<i<<endl;
   
//  }
int n=6, i=1;
// YT SOLn -
//****************FOR LOOP*******************
// for (int i = 1; i <= 10; i++)
// {
//   cout<<n*i<<endl;
//   /* code */
// }
//**********while***************
// while (i<=10)
// {
//   cout<<n*i<<endl;
//   i++;
//   /* code */
// }
//***********do while***********
do{
  cout<<n*i<<endl;
  i++;
  /* code */
}while(i<=10);

 
return 0;

}