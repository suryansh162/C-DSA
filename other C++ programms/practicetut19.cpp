// #include <iostream>;
// using namespace std;

// int sum(int x, int y)
// {
//     cout << "function with 2 arguments " << endl;
//     return x + y;
// }

// int sum(int x, int y, int z)
// {
//     cout << " function with 3 arguments " << endl;
//     return x + y + z;
// }

// int main()
// {

//     cout << "the sum of 6 and 3 is " << sum(6, 3) << endl;//--->here it will automatically match the correct function for this code to run in it will automatically judge by itself that it has to run in the function with 2 arguments

//    cout << "the sum of 6,9 and 3 is " << sum(6, 3, 9) << endl;//--->here also it will automatically match the correct function for this code to run in it will automatically judge by itself that it has to run in the function with 3 arguments
    

//     return 0;
// }


// FUNCTION OVERLOADING IS WHEN A FUNCTION IS GIVEN ARGUMENTS OF DIFFERENT DATA TYPES THEN WHILE COPYING VALUES OF ACTUAL PARAMETERS TO FORMAL PARAMETERS IT WILL AUTOMATICALLY JUDGE WHICH ARGUMENT IS SUITABLE FOR WHICH DATA TYPE 
//OR IT WILL AUTOMATICALLY PROMOTE THE VALUE OF ARGUMENTS( for eg - from int to float or vice versa) IN ACCORDANCE TO ADJUST THE VALUES OF ARGUMENTS IN DESIRABLE DATA TYPES


#include<iostream>;
using namespace std;

double cyclindervolume(float r,float h ){
                  return 3.14*r*r*h;
}

double cubevolume(int a){
    return a*a*a;
}

double rectanglevolume(int l,float b,int h){
    return l*b*h;

}
int main(){
    cout<<"the volume of cyclinder is "<<cyclindervolume(2.5,2.5)<<endl; 
    cout<<"the volume of cube is "<<cubevolume(4.7)<<endl; // like here actual parameter is in float but formal is in int so it will take value as "4" only and ot 4.7 this what happens in function overloading
    cout<<"the volume of rectangle is "<<rectanglevolume(2.5,6.5,9.1)<<endl; // here only data type of the middle argument is in float in formal parameters so it will take the values as 2*6.5*9 this is what function overloading is

return 0;
}     