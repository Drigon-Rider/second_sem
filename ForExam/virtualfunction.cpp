#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a circle." << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw(){
        cout << "Drawing a rectangle." << endl;
    }
};
int main(){
    Shape* s1=new Circle();
    s1->draw();
    delete s1;
    s1=new Rectangle();
    s1->draw();
    delete s1;
    s1= new Shape();
    s1->draw();
    return 0;
}