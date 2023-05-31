
#include <iostream>
#include <cmath>
using namespace std;
class shape
{
public:
    void display()
    {
        cout << "Area of the shapes";
    }
    int area()
    {
        cout << "Area of Shapes";
        return 0;
    }
};
class circle : public shape
{
public:
    float PI = 3.14;

public:
    float area(int radius)
    {
        return PI * pow(radius, 2);
    }
    void  display(float a)
    {
        cout << "Area of circle =" << a << endl;
    }
};
class rectangle : public shape
{


public:
    float area(int length,int bredth)
    {
        return length *bredth;
    }
    void display(float a)
    {
        cout << "Area of rectangle =" << a << endl;
    }
};
class trap : public shape
{

public:
    float area(int base1,int base2,int height)
    {
        return (base1+base2)/2*height;
    }
    void display(float a)
    {
        cout << "Area of trapozoid =" << a << endl;
    }
};
int main(){
    circle c;
    rectangle r;
    trap t;
    float a;
    a = c.area(4);
    c.display(a);
    a = r.area(4,5);
    r.display(a);
    a = t.area(4,5,6);
    t.display(a);
    return 0;

}
