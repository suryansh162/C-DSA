#include<iostream>;
using namespace std;
int main(){
    //   for (int i = 0; i < 4; i++)
    //   {
    //       cout<<i<<endl;
    //       if (i==2){
    //           //here we want to stop the loop if 2 comes and after 2 all numbers will not be printed
    //           break;
    //       }
    //       {
    //           /* code */
    //       }
          
    //       /* code */
    //   }
    //    for (int i = 0; i < 4; i++){
    //       if (i==2){
    //           //here we want to stop the loop if 2 comes and number 2 and after number 2 all numbers will not be printed
    //           break;}
    //      cout<<i<<endl;
    //       }
         
    for (int i = 0; i <= 10; i++)
    {// here we dont want number 2 to get print in list of numbers from 1 to 10 rest of th numbers will be printed except 2.
        if (i==3)
        {continue;
        // contunue means to stop the current running code and move to  next alliteration
            /* code */
        }
        cout<<i<<endl;
        
        /* code */
    }
    
      
return 0;
}