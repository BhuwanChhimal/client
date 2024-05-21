#include<iostream>
using namespace std;

class base{
    public:
    void getdata(){
        cout<<"function in base class"<<endl;
    }
};
class derived : public base{
    public:
    void getdata(){
        cout<<"function in derived class";           
    }
};
int main(){
    base b;
    derived d;
    b.getdata();
    d.getdata();
    return 0;
}