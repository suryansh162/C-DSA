// rules :
// 1) they cant be static
// 2) they are accessed by object pointers
// 3)virtual function can be a friend of another class
// 4) a virtual function in base class might not be used 
// 5)a virtual function is defined in a base class there is no necessity of redefining it in derived class


#include<iostream>;
using namespace std;

class cwh{
    protected:
    string title;
    float rating;
    public:
    cwh(string s, float r){
        title=s;
        rating=r;
    } 
    virtual void display(){}
};

class cwhvideo: public cwh{
    float vidlength;
    public:
    cwhvideo(string s, float r,float vl):cwh(s,r){
        vidlength=vl;
    } 
    void display(){
        cout<<"the title of the video is :"<<title<<endl;
        cout<<"the rating of the video is :"<<rating<<"out of 5"<<endl;
        cout<<"the length of the video is :"<<vidlength<<endl;

    }
    
};
class cwharticle:public cwh{
    int words;
    public:
    cwharticle(string s,float r,int wl):cwh(s,r){
        words=wl;
    }

     void display(){
        cout<<"the title of the article is :"<<title<<endl;
        cout<<"the rating of the article is :"<<rating<<"out of 5"<<endl;
        cout<<"the no. of words of the article is :"<<words<<endl;
    }
    
};
int main(){
    string title;
    float r,vl;
    //video
    title= "this is a cpp tutorail";
     r=4.78;
     vl=4.21;
    cwhvideo v(title,r,vl);
    // v.display();

    //article
    int wl;
    title =" this is an article ";
    r= 5;
    wl= 876;
    cwharticle a(title,r,wl);
    // a.display();

    cwh*cwhptr[2];
    cwhptr[0]=&v;
    cwhptr[1]=&a;

    cwhptr[0]->display();
    cwhptr[1]->display();


return 0;
}