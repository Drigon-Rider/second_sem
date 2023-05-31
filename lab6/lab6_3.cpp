/*
Find the complex number with greater modulus from two input complex numbers
*/
#include <iostream>
#include <cmath>
using namespace std;
class complexnum
{
public:
    double real, img;
    double getmod()
    {
        return sqrt(real * real + img * img);
    }

    friend istream &operator>>(istream &in, complexnum &c)
    {
        in >> c.real >> c.img;
        return in;
    }
    friend ostream &operator<<(ostream &out, complexnum &c)
    {
        out << c.real << "+" << c.img << "i";
        return out;
    }
    bool operator>(complexnum  b)
    {
        return getmod() > b.getmod();
    }
};
int main()
{
    complexnum a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << "the greatest modulus:" << a.getmod() << endl
             << a;
    }
    else
    {
        cout << "the greatest modulus:" << b.getmod() << endl
             << b;
    }
    return 0;
}
