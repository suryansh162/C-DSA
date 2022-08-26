#include<iostream>;
using namespace std;
int main(){
//     // we can do the same process by different methods
//     // method 1-
    int marks[4] = {23,22,45,66};
     
//      cout<<"the marks  of the students are "<<endl;
//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;
//     cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl;
// // method 2-
//         int mathmarks[4];
//     mathmarks [0] =30;
//     mathmarks [1] =31;
//     mathmarks [2] =32;
//     mathmarks [3] =33;

// cout<<"these are math marks "<<endl;
//     cout<<mathmarks[0]<<endl;
//     cout<<mathmarks[1]<<endl;
//     cout<<mathmarks[2]<<endl;
//     cout<<mathmarks[3]<<endl;

//     // CAN WE CHANE THE VALUE OF AN INTEGER BETWEEN THE ARRAY------YESS!!
//     // HERE WE HAVE CHANGED THE VALUE OF THE 2 nd INTEGER STORED IN THE ARRAY
//     int marks[4] = {23,22,45,66};
     
//      cout<<"the marks  of the students are "<<endl;
//     cout<<marks[0]<<endl;
//     marks[1]=33;
//     cout<<marks[1]<<endl;
//     cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl;

    // now we gonna see how we can use loop for the same thing
    // USING FOR LOOP----------> [initialize,condition,incriment]
   
    //  for (int i = 0; i < 4/*since we have four values in our array i.e, 0,1,2,3*/ ; i++)
    //  {
    //      cout<<"the marks of the student " <<i<< " is "<<marks[i]<<endl;}

    // USING WHILE LOOP----------> initialize---->condition---------->incriment
    // int i=0;
    //      while (i<4)
    //      {
    //          cout<<"the marks of the student " <<i<< " is "<<marks[i]<<endl;
    //      i++;
         


     //}
     
 // USING  DO WHILE LOOP----------> initialize---->incriment---------->condition
//  int i=0;
//  do
//  {
//      cout<<"the marks of the student " <<i<< " is "<<marks[i]<<endl;
//      i++;
//  } while (i<4);
 

int* p= marks;

// cout<<"the value of marks at *(p) is "<<*(p)<<endl;
// cout<<"the value of marks at *(p+1) is "<<*(p+1)<<endl;
// cout<<"the value of marks at *(p+2) is "<<*(p+2) <<endl;
// cout<<"the value of marks at *(p+3) is "<<*(p+3)<<endl;

cout<<*(p++)<<endl;
cout<<*(++p)<<endl;


return 0;
}