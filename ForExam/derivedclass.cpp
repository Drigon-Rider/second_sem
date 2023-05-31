#include<iostream>
using namespace std;
class base1{
    public:
    base1(int a){
        cout<<"base1 called"<<a<<endl;
    }
};
class base2{
    public:
    base2(int a){
        cout<<"base2 called"<<a<<endl;
    }
};
class derived:  public base2,public base1{
    public:
    derived(int a):base2(a),base1(a){
        cout<<"derived call"<<a<<endl;
    }
};
int main(){
    derived d(10);
    return 0;
}