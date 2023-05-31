#include<iostream>
using namespace std;
class base{
    public:
    static int go; 
    base(){
        go++;
    }
};
int base::go=0;
int main(){
    base b;
    base c;
    cout<<b.go++<<endl;
    c.go++;
    cout<<b.go<<endl<<c.go;
    return 0;
}