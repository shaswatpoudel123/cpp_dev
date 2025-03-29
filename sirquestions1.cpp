/*1. Write a C++ program to convert inch into centimeter.*/
#include<iostream>
using namespace std;
double number( int x){
    return (x*2.56);
}
int main()
{
    int x;
    cout<<"Enter the length in cm"<<endl;
    cin>>x;
    cout<<number(x);
    return 0;
}
