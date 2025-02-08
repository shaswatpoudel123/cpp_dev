#include<iostream>
using namespace std;
class base{
    public:
    virtual void print(){
    cout<<"print base class"<<endl;
    }
    virtual void show(){
        cout<<"show base class "<<endl;
    }
};
class derived : public base{
    void print(){
        cout<<"print derived class";
    }
    void show(){
        cout<<"show derived class";
    }
};
int main(){
    base *b;
    derived d;
    b=&d;
    b->print();
    b->show();
    return 0;
}