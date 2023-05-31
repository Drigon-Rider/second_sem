#include <iostream>
using namespace std;

class sourse
{

    int length, bredth;

public:
    sourse(int a, int b)
    {
        length = a;
        bredth = b;
    }
    float getlength()
    {
        return length*0.33;
    }
    float getbredth()
    {
        return bredth*0.44;
    }
};

class destination
{
public:
    float x, y;
 
    destination(sourse s)
    {
        x=s.getlength();
        y=s.getbredth();
        cout << "In feet" << x  <<endl<< "in inch" << y ;
    }
};
int main()
{
    sourse z(10, 20);
    destination y = z;
    return 0;
}