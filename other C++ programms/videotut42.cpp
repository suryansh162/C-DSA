#include <iostream>
#include <cmath>
using namespace std;
class simplecalc
{
protected:
    float a, b, c, d, e, f, g, h;

public:
    void add(float n1, float n2)
    {
        a = n1;
        b = n2;
    }
    void showsum(void)
    {
        cout << "the sum is " << a + b << endl;
    }
    void substract(float n3, float n4)
    {
        c = n3;
        d = n4;
    }
    void showdiff(void)
    {
        cout << "the difference is " << c - d << endl;
    }

    void product(float n5, float n6)
    {
        e = n5;
        f = n6;
    }
    void showproduct(void)
    {
        cout << "the product is " << e * f << endl;
    }

    void division(float n7, float n8)
    {
        g = n7;
        h = n8;
    }
    void showdivision(void)
    {
        cout << "the division  is " << g / h << endl;
    }
};

class scientificcalc
{
protected:
    float  j, z;
    int i,t;

public:
    void powerraised(int p1,int p2)
    {
        i = p1;
        t=p2;
    }
    void showpowerraised(void)
    {
        cout << "the power raised to the number by 3 will be : " << pow(i, t) << endl; // i raised to power 3
    }
    double sqrt(float s)
    {
        j = s;
        z = sqrt(j);
    }
    void sqrtdisplay(void)
    {
        cout << "the squareroot of this number " << j << " is " << z << endl;
    }
};

class hybridcalc : public simplecalc, public scientificcalc
{
public:
    void show()
    {
        void showsum(void);
        void showdiff(void);
        void showproduct(void);
        void showdivision(void);
        void showpowerraised(void);
        void sqrtdisplay(void);

        cout << "this is a hybrid calculator" << endl;
    }
};

int main()
{
    hybridcalc h1;
    h1.add(38, 29);
    h1.substract(5, 4);
    h1.product(5, 4);
    h1.division(10, 5);
    h1.powerraised(5,3);
    h1.sqrt(25);

    return 0;
}