#include<iostream>
using namespace std;
class source{
    
    public:
    int feet;
    int inch;
    source(int a,int b){
        feet = a;
        inch =b;
    }
};
class destination{
    private:
    float cm;
    float m;
    public:
    destination(source s){
        cm=s.feet*0.33;
        m=s.inch*0.4;
    }
    void display(){
        cout<<cm<<endl<<m;
    }
};
int main(){
    source a(20,30);
    destination b=a;
    b.display();

}