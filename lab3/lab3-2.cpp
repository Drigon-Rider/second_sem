/*create a class person and to derive classes employe and student inheritnce of
the class function now create a class manager which is derive from two bases
classes employe and student through the use of virtual class*/
#include <iostream>
using namespace std;
class person
{
    public:
    virtual void display()
    {
        cout << "Hello world";
    }
};
class employee : virtual public person
{
};
class student : virtual public person
{
};
class manager : public employee, public student
{
};
int main()
{
    manager c;
    c.display();
    return 0;
}