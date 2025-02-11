#include <iostream>
using namespace std;
void test(int x)
{
cout<<"Inside function:"<<x<<endl;
if(x) throw x;
}
int main()
{
cout<<"Start"<<endl;
try
{
test(0);
test(1);
test(2);
}
catch(int x)
{
cout<<"Caught an int exception:"<< x<<endl;
}
}