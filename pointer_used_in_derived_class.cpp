/*5. WAP to illustrate the use of pointer to derived class in C++.*/
#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void showdata(){
        cout<<"Thats a animal"<<endl;
    }
    ~Animal(){}
};
class Dog:public Animal{
    public:
    void showdata() override{
    cout<<"The dog barks"<<endl;
    }
};
class cat:public Dog{
    public:
    void showdata() override{
        cout<<"The cat mewos"<<endl;
    }
};
int main(){
    Animal *Ani;
    Dog dogobj;
    cat catobj;
    Ani=&dogobj;
    Ani->showdata();
    Ani=&catobj;
    Ani->showdata();
    return 0;
}