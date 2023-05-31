#include <iostream>

using namespace std;

class Base
{
public:
    Base(int a) : m_a(a) {}
    void print()
    {
        cout << "Base class: a = " << m_a << endl;
    }

protected:
    int m_a;
};

class Derived : public Base
{
public:
    Derived(int a, int b) : Base(a)
    {

        m_b = b;
    }
    void print()
    {
        cout << "Derived class: a = " << m_a << ", b = " << m_b << endl;
    }

private:
    int m_b;
};

int main()
{
    Derived d(10, 20);
    d.print();
    return 0;
}
