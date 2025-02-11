/*WAP to demonstrate try-throw-catch exception handling.*/
#include<iostream>
using namespace std;
void test(int x){
    try
    {
        if(x>=1)
           throw x;
        else if(x==0)
           throw 'x';
        else if(x<0)
           throw 5.14;
    }
    catch(int i)
    {
        cout<<"Caught  no is > 1"<<endl;
    }
    catch(char ch)
    {
        cout<<"Caught  no is 0 "<<endl;
    }
    catch(double i)
    {
        cout<<"Caught no is less than 0 "<<endl;
    }
/*for catching all the excetionsat once we can use
    catch(...)
{
    //statements for processing all exceptions
}*/ 
}
int main(){
    test(1);
    test(0);
    test(-1);
}
