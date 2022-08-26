// //**********example question- to calculate the distance between two points*******************
// #include<iostream>;
// #include<cmath>;
// using namespace std;
// int sqrt();
// class point{
//     int x1,y1,x2,y2;
//     public:
//     friend int sqrt(point,point);
//     void point1(int a1, int b1){
//         x1=a1;
//         y1=b1;
        
//     }

//      void point2(int a2,int b2){
//         x2=a2;
//         y2=b2;
//     }

//     // void displaysqrt(){
//     //    cout<<"the distance between two points is :"<<sqrt()<<endl;
//     // }
//     void displaypoint1(){
//         cout<<"the point is "<<point1<<endl;

//     }
    

//      void displaypoint2(){
//         cout<<"the point is "<<point2<<endl;

//     }
    
// };
// // int sqrt(point p1,point p2){
// //     sqrt((p1.x1-p2.x2)^2 +(p1.y1-p2.y2)^2);
    
// // //    cout<<"the distance between two points is :"<<sqrt()<<endl;


// // }



// int main(){
//     point p1,p2;
//     p1.point1(2,3);
//     p1.displaypoint1();
//     p2.point2(5,6);
//     p2.displaypoint2();
 
//     return 0;

//     }
    
// int sqrt(point p1,point p2){
//     int res;
//         sqrt((p1.x1-p2.x2)^2 +(p1.y1-p2.y2)^2);
//         // void res;
//         res= sqrt((p1.x1-p2.x2)^2 +(p1.y1-p2.y2)^2);
//         cout<<"the distance between two points is :"<<endl;
//         cout<<res;
//         return res;
        
//     }
   

  #include<iostream>;
  #include<cmath>:
  using namespace std;
  class point2;
   
   class point1 {
       int a,b;
       friend double squareroot(point1,point2);
       public:
       void point(int x1,int y1){
           a=x1;
           b=y1;
       }
       void display(){
           cout<<" Point 1 is :("<<a<<","<<b<<")"<<endl;

       }
       };
       class point2{
           int c,d;
            friend double squareroot(point1,point2);
           public:
       void point(int x2,int y2){
           c=x2;
           d=y2;

       }
       void display(){
           cout<<" point 2 is : ("<<c<<","<<d<<")"<<endl;

       }
   };


   double squareroot( point1 c1,point2 c2){
       float h;

       h=((c1.a-c2.c)*(c1.a-c2.c) + (c1.b-c2.d)*(c1.b-c2.d));
       sqrtf(h);

   }
   
   int main(){
       point1 a1;
       a1.point(1,0);
       a1.display();

       point2 a2;
       a2.point(70,0);
       a2.display();

       int result;
       result=squareroot(a1,a2);
       cout<<"the distance between two given points is :"<<result<<endl;
   
   return 0;
   }





//  making a calculator
// #include<iostream>;
// using namespace std;
// double sum(double  a , double  b){
//     return a+b;
// }
//  double substraction(double c, double d){
//      return c-d;

//  }
// double product(double e,double f){
//     return e*f;
// }

// double division(double x,double y){
//     return x/y;

// }

// int main(){
//     int a,b,c,d,e,f,g,h;
// cout<<"enter the numbers for sum "<<endl;
// cin>>a;
// cin>>b;    
// cout<<"the sum of two numbers is : "<<sum(a,b)<<endl;
// cout<<"enter the numbers for substraction "<<endl;
// cin>>c;
// cin>>d;
// cout<<"the substraction of two numbers is "<<substraction(c,d)<<endl;
// cout<<"enter the numbers for product "<<endl;
// cin>>e;
// cin>>f;
// cout<<"the product of two numbers is "<<product(e,f)<<endl;
// cout<<"enter the numbers for division "<<endl;
// cin>>g;
// cin>>h;
// cout<<"the division of two numbers is "<<division(g,h)<<endl;



// return 0;
// }