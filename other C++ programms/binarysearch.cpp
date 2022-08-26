#include<iostream>;
using namespace std;
int binarysearch(int a[],int size,int key){
   int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    // here we shourld keep in mind that
    // if start==end==int_max then
    //mid= start + (end-start)/2
    //as mid=start+end/2 will eventually store a huge value in int mid in case of tart==end==int_max and int mid wont able to take that huge value in it
    while (start<=end)
    {
        if (a[mid]==key)
        {
            return mid;
        }
        
        else if (a[mid]>key)
        {
            end=mid-1;
        }
        
         else 
        {
            start=mid+1;
        }
        mid=(start+end)/2;
        
    }
    return -1;
    
}
int main(){
int even[6]={1,2,3,4,5,6};
int odd [5]={5,6,7,8,9};
int key; cin>>key;
cout<<"index of "<<key<<" in even array is"<<binarysearch(even,6,key)<<endl;
cout<<"index of "<<key<<" in odd array is"<<binarysearch(odd,5,key)<<endl;
return 0;
}