#include <iostream>
using namespace std;
class base
{
public: 
int x, y;
    base(int a, int b)
    {
        x = a;
        y = b;
        cout << "Base called" << endl;
    }
    int get()
    {
        return x;
    }
};
class baby
{

public:
    int q, w;
    baby(int a, int b)
    {
        cout << "called baby" << a << endl;
    }
    baby(base t)
    {
        q = t.x;
    }
};

int main()
{
    base b(10, 30);
    baby p = b;
    cout << p.q;
    return 0;
}
