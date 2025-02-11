/*7. Wap to demonstrate Function template.*/ 
#include<iostream>
using namespace std;
template <typename T>
T large(T n1,T n2)
{
    return(n1>n2)?n1: n2;
}
int main(){
    int i1=5,i2=3;
    float f1=5.5,f2=6.6;
    char c1='A',c2='B';
    cout<<large(i1,i2)<<" is the largest"<<endl;
    cout<<large(f1,f2)<<" is the largest"<<endl;
    cout<<large(c1,c2)<<" is the largest"<<endl;
    return 0;
}
