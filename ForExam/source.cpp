#include <iostream>
using namespace std;
class baby
{
    int q, w;

public:
    baby(int a, int b)
    {
        cout<<"called baby"<<a<<endl;


    }

};
class base
{

    int x, y;

public:
    base(int a, int b)
    {
        x = a;
        y = b;
        cout<<"Base called"<<endl;
    }
    operator baby()
    {
        baby me(x, y);
        cout<<"operator called"<<endl;
        return me;
    }
};
int main()
{
    base b(10, 30);
    baby p=b;
    return 0;
}
