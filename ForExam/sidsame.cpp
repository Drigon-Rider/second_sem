#include <iostream>
using namespace std;
class destination
{
public:
    float x, y;
    destination(float a, float b)
    {
        x = a;
        y = b;
        cout << "in feet" << x * 0.33 << "in inch" << y * 0.44;
    }
};

class sourse
{

public:
    int length, bredth;
    sourse(int a, int b)
    {
        length = a;
        bredth = b;
    }
    operator destination()
    {
        destination d(length, bredth);
        return d;
    }
};

int main()
{
    sourse z(10, 20);
    destination y = z;
    return 0;
}