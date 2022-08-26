#include <iostream>;
using namespace std;
class employee
{

private:
    int a, b, c;

public:
    int x, y;
    void setdata(int a1, int b1, int c1);
    void getdata()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of x is " << x << endl;
        cout << "the value of y is " << y << endl;
    }
};

void employee ::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    employee harry;
    harry.x = 22;
    harry.y = 32;
    harry.setdata(4, 5, 6);
    harry.getdata();

    return 0;
}