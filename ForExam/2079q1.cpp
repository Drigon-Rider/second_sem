/*What is aggregation? Write a program for implementing following:

Create a class author with attributes name and qualification. 
Also create a class publication with pname. 
From these classes derive a classes derive a class book having attributes title and price. 
Each of the three classes should have getdata() 
method to get their data from user. The classes should have putdata() 
method to display the data. Create instance of the class book in main.*/
#include<iostream>
#include<string>
using namespace std;
class author{
    protected:
    string name;
    string qualification;
    public:
    void getdata(){
        cout<<"Enter name";
        getline(cin,name);
        cout<<"enter qualification";
        cin>>qualification;
    }
    void putdata(){
        cout<<"Name="<<name<<endl<<"Qualification="<<qualification<<endl;
    }
};
class publication{
    protected: 
    string pname;
    public:
    void getdata(){
        cout<<"Enter pname";
        cin>>pname;
        
    }
    void putdata(){
        cout<<"Pen Name="<<pname<<endl;
    }
    
};
class book:public author,public publication{
    private:
    string title;
    int price;
    public:
    author author;
    publication p;
    void getdata(){
        cout<<"Enter titel";
        getline(cin,title);
        cout<<"enter price";
        cin>>price;
        cin.ignore();
        author.getdata();
        p.getdata();
    }
    void putdata(){
        cout<<"title="<<title<<endl<<"Price="<<price<<endl;
        author.putdata();
        p.putdata();
    }   
};
int main(){
    book b1;
    b1.getdata();
    b1.putdata();
    return 0;
}