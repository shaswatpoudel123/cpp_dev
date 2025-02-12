#include<iostream>
using namespace std;
class complex{
    private:
    int a,b;
    public:
    complex(){
        a=b=0;
    }
    complex(int x,int y){
        a=x;
        b=y;
    }
    void disp(){
    cout<<"\n  first value="<<a<<endl;
        cout<<"second value="<<b<<endl;
    }
    complex operator + (complex);
};
complex complex ::operator +(complex c){
    complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
}
int main(){
    complex c1(2,1),c2(1,2);
    complex c3=c1+c2;
    c1.disp();
    c2.disp();
    c3.disp();
}
