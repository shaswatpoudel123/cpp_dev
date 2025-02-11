/*6. WAP to illustrate the use of ‘this’ pointer in C++.*/
#include<iostream>
using namespace std;
class sample{
    private:
    int a,b;
    public:
    void input(int a,int b){
        this->a=a+b;
        this->b=a-b;
    }
    void output(){
        cout<<"The changed no are "<<a<<"and"<<b<<endl;
    }
};
int main(){
    sample ob1;
    int a=5,b=4;
    ob1.input(a,b);
    ob1.output();
    return 0;
}