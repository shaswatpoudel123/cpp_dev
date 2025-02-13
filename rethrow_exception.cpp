/*10. WAP to demonstrate re-throwing exception in C++.*/
#include<iostream>
using namespace std;
void divide(double x,double y)
{
    try
    {
        if(y==0||y==0.0)
            throw y;
        else
            cout<<"\ndivision :"<<x/y;   

    }
    catch(double)
    {
        cout<<"\nexception inside function";
        throw;
    }
}
int main(){
    try{
        divide(1.12,1.33);
        divide(6,0);
    }
    catch(double){
        cout<<"\nexception inside main function";
    }
}