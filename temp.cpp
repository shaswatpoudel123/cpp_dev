#include<iostream>
using namespace std;
template<typename T>
T Greatest(T a,T b,T c)
{
	if(a>c&&a>b)
	return a;
	else if(b>c)
	return b;
	else
	return c;
}
int main(){
int x=10,y=30,z=20;
cout<<"The greatest no is :"<<Greatest(x,y,z)<<endl;
double a=10.10,b=30.30,c=20.20;
cout<<"The greatest no is :"<<Greatest(a,b,c)<<endl;
char i='A',j='B',k='C';
cout<<"The greatest no is :"<<Greatest(i,j,k)<<endl;
return 0;
}
