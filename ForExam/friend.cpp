#include<iostream>
using namespace std;
class base{
    public:
    int real,image;
    base(int a=0,int b=0){
        real = a;
        image =b;
    }
    void display(){
        cout<<real<<"+"<<image<<"i";
    }
    friend base operator +(base &b1);
};
base operator+(base& b2,base& b1){
    b2.real=b2.real+b1.real;
    b2.image=b2.image+b1.image;
    return b2;
}
int main(){
    base b1(20,30),b2(30,40);
    base b3;
    b3=b1+b2;
    b3.display();
    return 0;
}