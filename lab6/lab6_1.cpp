#include <iostream>
#include <string>
using namespace std;
class saving_account
{
private:
    char name[100], address[100];
    int account_number, balance;
    public:
    void naya(){
        cout<<"Enter new account information:";
        cin>>name>>address>>account_number>>balance;
    }
    void deposit(int b){
        balance=balance+b;
    }
    void withdraw(int b){
        balance=balance-b;
    }
    void show(){
        cout<<account_number<<endl<<"\n Weclome "<<name<<endl<<"Your current balance is:"<<balance<<endl;
        cout<<address;
    }
};
int main(){
    saving_account a;
    a.naya();
    a.deposit(1000);
    a.withdraw(500);
    a.show();
    return 0;

}