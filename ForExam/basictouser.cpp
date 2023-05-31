#include<iostream>
using namespace std;
class base{
    public:
    int hour;
    base(){
        hour =0;

    }
    base(int a){
        hour = a;
    }
};
int main(){
    base b;
    int x=100;
    b=x;
    cout<<b.hour;
    return 0;
}