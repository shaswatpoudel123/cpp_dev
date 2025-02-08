#include<iostream>
using namespace std;
class complex{
    private:
    int real,imag;
    public:
    complex(){
        real=imag=0;
    }
    complex(int x,int y){
        real=x;
        imag=y;
    }
    void display(){
        cout<<"The sum is "<<real<<"+"<<imag<<"i"<<endl;
    }
    complex operator +(complex);
};
complex complex::operator +(complex c){
    complex temp;
    temp.real=real+c.real;
    temp.imag=imag+c.imag;
    return temp;
}
int main(){
    complex c1(2,2),c2(2,2);
    complex c3;
    c3=c1+c2;
    c3.display();
    return 0;
}