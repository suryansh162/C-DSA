#include<iostream>;
using namespace std;
int main(){
// basic example
int a=4;//--->a stores value 4
int* ptr= &a;//--->ptr stores address of "a"
// *ptr = 999--> aslo accpetable ;slo will guve value of a 
//ptr is a container for storing address
//*(ptr)--->dereference of pointer i.e, we are extracting value of "a" from the address of "a"  by writing like this 

cout<<"the value of a is "<<*(ptr)<<endl;

//using "new" operator
// new mwthod for writing the same thing
// int*p=new int(40);--->accpetable
float*p=new float(40.86);//--->aslo acceptable
cout<<"the value of p is "<<*(p)<<endl;
// here we are dynamically declaring a integer whose value is "p" and aslo exptracting value of "p" from its address



/// alloacting and using contiguous blocks of memory(array)--->using  pointers in array dynamically
//using "new" operator
// int*arr=new int[3];
// arr[0]=10;
// arr[1]=20;
//*(arr+1)=20--->also accpetable
// arr[2]=30;
// cout<<"the value of arr[0] is "<<arr[0]<<endl;
// cout<<"the value of arr[1] is "<<arr[1]<<endl;
// cout<<"the value of arr[2] is "<<arr[2]<<endl;




//using "delete" operator

int* arr=new int[3];
arr[0]=10;
arr[1]=20;
arr[2]=30;
delete[] arr;//this will delete all array values allocated to the memory
cout<<"the value of arr[0] is "<<arr[0]<<endl;
cout<<"the value of arr[1] is "<<arr[1]<<endl;
cout<<"the value of arr[2] is "<<arr[2]<<endl;



return 0;
}