// //******************structures
// // #include <iostream>;
// // using namespace std;

// // struct employee
// // {
// //     int eID;// memory allocation = 4
// //     char favchar;// memory allocation = 1
// //     float salary;// memory allocation = 4
// // total memory allocation = 9 since it only allows to use all data types.
// // };
// // };

// // int main()
// // {
// //     struct employee E1;
// //     struct employee E2;
// //     struct employee E3;
// //     E1.eID = 16;
// //     E1.favchar = 's';
// //     E1.salary = 100000;
// //     cout << "the employee ID is " << E1.eID << endl;
// //     cout << "the  employee favchar is " << E1.favchar << endl;
// //     cout << "Salary of suryansh sharma  is " << E1.salary << " per hour" << endl;
// //     return 0;
// // }

// //************************unions

// #include <iostream>;
// using namespace std;
// union sugar
// {
//     int quantity; // memory allocation = 4
//     char company; // memory allocation = 1
//     float money;  // memory allocation = 4
//                   // total memory allocation =4 since it only allows to use one data type at a time.
// };

// int main()
// {
//     // here we can only call one entity in union and not like structure
//     union sugar s;
//     s.quantity = 10;
//     // s.company = 's';
//     // s.money = 35;
//     cout << "the quantity of sugar is " << s.quantity << endl;
//     // cout << "the company of sugar is " << s.company << endl;
//     // cout << "the money of sugar is " << s.money << endl;
//     return 0;
//     // here in the result we can clearly see that the memory has stored a garbage value in s.quantity as after the the value of company and money is also asked to print
//     // so the value is updated and only the value of s.money will be printed and no other we can use to comment out s.money and see it prints the correct value os s.company
//     // and if we do the same with s.quantity we get value of it.
//     // so we see it updates the program with the recent value.
// }



//******************************enums
#include<iostream>;
using namespace std;


int main(){
enum meal {breakfast, lunch, dinner};
// cout<< breakfast;
//output is 0
// cout<< lunch<<endl;
// //output is 1
// cout<< dinner<<endl;
// //output is --->1
// //          --->2
meal m1=lunch;
// cout<<m1;
////output is 1
// cout<<(m1==1);
// //output is 1 that means statment is true
cout<<(m1==0);
// //output is 0 that means statment is false

return 0;
}