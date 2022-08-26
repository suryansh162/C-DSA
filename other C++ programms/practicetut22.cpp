#include <iostream>;
using namespace std;
class binary
{
    string s;//---> by default private
// here if we do nesting of chk_binary and then declare it inside private part of class then user wont be able to make changes in it
public:
    void read(void);
    void chk_binary(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "enter the binary number" << endl;
    cin >> s;
}
void binary ::chk_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary ::ones_compliment(void)
   
{ chk_binary(); /// this is what is called nesting of function  declaring it inside another function and not in main function to not to show it to user 
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
        
    }
}

void binary ::display(void){
   

    cout << "the binary number is: "<<endl;
 for (int i = 0; i < s.length(); i++){
     cout<<s.at(i);
     
 }

}
int main(){
    binary b;
    b.read();
    // b.chk_binary();
    b.display();
    cout<<endl;
    b.ones_compliment();
    cout<<"after one's compliment"<<endl;
    b.display();

    return 0;
}