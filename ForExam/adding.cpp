#include<iostream>
using namespace std;
class base{
    private:
    int real,image;
    public:
    base(int a=0,int b=0){
        real=a;
        image=b;
    }
    base operator +(base& b2){
        real = real+b2.real;
        image=image+b2.image;
        return *this;
    } 
    void display(){
        cout<<real<<"+"<<image<<"i";
    }

    
};
int main(){
    base b1(10,20),b2(20,30);
    base b3;
    b3=b1+b2;
    b3.display();
    return 0;
}