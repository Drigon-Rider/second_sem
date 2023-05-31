#include <iostream>
using namespace std;
class base
{
public:
    int a;
    static int b;
    static void sfun()
    {

        cout << "staic callse" << ++b << endl;
    }
    void notsfun()
    {

        cout << "non static called" << ++a << endl;
    }
};
int base::b = 0;
int main()
{
    base b;
    b.notsfun();
    base::sfun();
    b.notsfun();
    // it can be called using class name as it is bound to class
    b.sfun();
    return 0;
}
