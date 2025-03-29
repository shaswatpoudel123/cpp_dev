/*3. Write a program in C++ to compute area of triangle using the following member defined
function type.
a) With argument with return type
b) With arguments with no return type
c) Without arguments without return type
d) Without arguments with return type.*/
#include<iostream>
#include<math.h>
using namespace std;
int  area(){
    float s,Area,a,b,c;
    cout<<"Enter the lengths"<<endl;
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    Area=sqrt(s*(s-a)*(s-b)*(s-c));
    return Area;
}
int main(){
    cout<<area()<<" is the area";
    return 0;  
}