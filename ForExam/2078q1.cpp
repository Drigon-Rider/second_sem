/* Write a program according to the specification given below:

 – Create a class Account with data members acc no, balance, and min_balance(static)
 -Include methods for reading and displaying values of objects
 – Define static member function to display min_balance
 -Create array of objects to store data of 5 accounts and read and display values of each object*/
 #include<iostream>
 using namespace std;
class Account{
    private:
    int acc_no,balance;
    static int min_balance;
    public:
    static void display(){
        cout<<min_balance<<endl;
    }
    void read(){
        cout<<"your account number="<<endl;
        cin>>acc_no;
        cin>>balance;
    }
    void show(){
        cout<<"your account number="<<acc_no<<endl<<"with balance="<<balance<<endl;
    }
};
int Account::min_balance=1000;
int main(){
    int n=5;
    Account a[n];
    Account::display();
    for(n;n>0;n--){
        a[n].read();
        a[n].show();
    }
    return 0;
}