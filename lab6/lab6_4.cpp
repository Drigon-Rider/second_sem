/*
WAP having Student as an abstract class and create derived class such as
Engineering, Science and Medical. Create their objects process them and
access them using array of base class pointers.
*/
#include <iostream>
using namespace std;
class Student
{
public:
    virtual void display() = 0;
};
class Engineering : public Student
{
public:
    void display()
    {
        cout << "This is Engineering student"<<endl;
    }
};
class Science : public Student
{
public:
    void display()
    {
        cout << "This is Science student"<<endl;
    }
};
class Medical : public Student
{
public:
    void display()
    {
        cout << "This is Medical student"<<endl;
    }
};
int main() 
{
    Student *student[3];
    student[0] = new Engineering;
    student[1] = new Science;
    student[2] = new Medical;
    student[0]->display();
    student[1]->display();
    student[2]->display();


    return 0;
}