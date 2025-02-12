#include<iostream>
using namespace std;
 class Animal{
    public:
    int i;
 };
 class Dog:virtual public Animal{
    public:
    int j;
 };
 class cat:public virtual Animal{
    public:
    int k;
 };
 class mouse:public Dog,public cat{
    public:
    int sum;
 };
 int main(){
    mouse ob4;
    ob4.i=1;
    ob4.j=2;
    ob4.k=3;
    ob4.sum=ob4.i+ob4.j+ob4.k;
    cout<<ob4.sum;
    return 0;
 }
