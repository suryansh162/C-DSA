// #include<iostream>;
// using namespace std;
// int sum(int a, int b)
// {
//     int c = a + b;
//     return c;
// }

// int main(){
//     int y=5, x=5;
//     cout<<"the sum of x and y is "<<sum(5,5);

// return 0;
// }

// ****************swapping by call by value
// #include <iostream>;
// using namespace std;
// int sum(int a, int b)
// {
//     int c = a + b;
//     return c;
// }
// void swap(int a, int b)
// {                 //  temp a b
//     int temp = a; //  5  5   6
//     a = b;        //  5   6  6
//     b = temp;     //  5   6  5
// }

// int main()
// {
//     int x = 5, y = 6;
//     cout << "the sum of x and y is " << sum(5, 6) << endl;
//     cout << "the value of x is " << x << " the value of y is " << y<<endl;
//     swap(x,y);//-----> this will not swap 5 and 6 or x and y (reason written in notes )
//     cout << "the value of x is " << x << " the value of y is " << y<<endl;

//     return 0;
// }

//**********call by pointer reference***************
// #include <iostream>;
// using namespace std;
// int sum(int a, int b)
// {
//     int c = a + b;
//     return c;
// }
// // void swap(int a, int b)
// // {                 //  temp a b
// //     int temp = a; //  5  5   6
// //     a = b;        //  5   6  6
// //     b = temp;     //  5   6  5
// // }

// void swap(int *a, int *b)
// {                  //  temp a b
//     int temp = *a; //  5  5   6
//     *a = *b;       //  5   6  6
//     *b = temp;     //  5   6  5
// }

// int main()
// {
//     int x = 5, y = 6;
//     cout << "the sum of x and y is " << sum(5, 6) << endl;
//     cout << "the value of x is " << x << " the value of y is " << y << endl;
//     // swap(x,y);//-----> this will not swap 5 and 6 or x and y (reason written in notes )
//     swap(&x, &y);// ----> this will swap a and b as it is asking to change the value at address of actual parameters
//     cout << "the value of x is " << x << " the value of y is " << y << endl;

//     return 0;
// }


// now c++ specefic masala
//***********call by c++ variables variables
#include <iostream>;
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
// void swap(int a, int b)
// {                 //  temp a b
//     int temp = a; //  5  5   6
//     a = b;        //  5   6  6
//     b = temp;     //  5   6  5
// }

// void swap(int *a, int *b)
// {                  //  temp a b
//     int temp = *a; //  5  5   6
//     *a = *b;       //  5   6  6
//     *b = temp;     //  5   6  5
// }

//int &swapreferencevar(int &a, int &b)
void swapreferencevar(int &a, int &b)
{                 //  temp a b
    int temp = a; //  5  5   6
    a = b;        //  5   6  6
    b = temp;     //  5   6  5
    //return a;
}

int main()
{
    int x = 5, y = 6;
    cout << "the sum of x and y is " << sum(5, 6) << endl;
    cout << "the value of x is " << x << " the value of y is " << y << endl;
    // swap(x,y);//-----> this will not swap 5 and 6 or x and y (reason written in notes )
    // swap(&x, &y);// ----> this will swap a and b as it is asking to change the value at address of actual parameters
    swapreferencevar(x, y); //-----> this will swap 5 and 6 or x and y since if "&a=x" then if we change a then it will also reflect
                                    //change in x and vice versa .
    //swapreferencevar(x, y)=766;----> since here swapreferencevar is returning a so this can be called as reference x with respect to y 
    // this will give output as the value of x is 766 the value of y is 5                                
    cout << "the value of x is " << x << " the value of y is " << y << endl;

    return 0;
}
