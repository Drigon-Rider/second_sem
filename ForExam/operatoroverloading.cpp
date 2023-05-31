#include<iostream>
using namespace std;
class base{
    public:
    base(int a){
        c=a;
    }
    base operator +(){
        
        return *this;
        
    }
    public:
    int c;
};
int main(){
    base a(5),b= +a;
    cout<<b.c;
    return 0;
}