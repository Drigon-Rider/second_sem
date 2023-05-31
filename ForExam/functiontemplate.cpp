#include<iostream>
using namespace std;
template<class t>
void show(t a,t b){
    cout<<a<<" "<<b<<endl;

}
int main(){
    show('a','b');
    show(20,40);
    return 0;
}