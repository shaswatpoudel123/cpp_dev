/*3. Write a program in C++ to compute area of triangle using the following member defined
function type.
a) With argument with return type
b) With arguments with no return type
c) Without arguments without return type
d) Without arguments with return type.*/
#include<iostream>
#include<math.h>
using namespace std;
void area(float a,float b,float c){
    float s,Area;
    s=(a+b+c)/2;
    Area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<Area<<" is the area";
}
int main(){
    area(3,4,5);
    return 0;  
}