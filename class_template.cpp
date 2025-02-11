/*8. WAP to demonstrate Class template.*/
#include<iostream>
using namespace std;
template <class T> 
class sample
{
    private:
    T a,b;
    public:
    void getdata(){
        cout<<"enter the 1 data :";
        cin>>a;
        cout<<"enter the 2 data :";
        cin>>b;
    }
    void sum(){
        cout<<"sum :"<<a+b<<endl;
    }
};
int main(){
    sample <int>s1;
    sample <float>s2;
    s1.getdata();
    s1.sum();
    s2.getdata();
    s2.sum();
    return 0;
}