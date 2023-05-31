#include<iostream>
using namespace std;
class base{
    public:
    base(int a,int b){
        hour =a;
        min =b;
    }
    operator int(){
        return 60*hour+min;
    }
    private:
    int hour,min;
};
int main(){
    int h,m,a;
    h=2;
    m=3;
    base p(h,m);
    a=p;
    cout<<p;
    return 0;
}