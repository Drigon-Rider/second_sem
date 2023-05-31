#include<iostream>
using namespace std;
int top(int a,int b,int c){
    int d;
    if(c==0){
        exit(0);
    }
    else{
        cout<<b<<endl;
        d=b;
        b=b+a;
        a=d;
        return top(a,b,c-1);
    }
}
int main(){
    cout<<1<<endl<<1<<endl;
    top(1,2,10-2);
    return 0;

}