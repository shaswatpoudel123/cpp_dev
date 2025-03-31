/*7. Write a program to demonstrate static variable and static functions. [make necessary
assumptions]*/
//using static data members and static member functions combined
#include<iostream>
using namespace std;
class iteam{
    int number;
    static int count;//static data type
    public:
    void getdata(int a){
        number=a;
        count++;
    }
    void getcount(){
        cout<<"\n valaue of count : "<<count;
    }
    static void getscount(){//member fuction
        cout<<"value of count: "<<count;
    }
};
int iteam :: count; 
int main(){
 iteam a,b,c;
a.getdata(100);
cout<<"\t";
a.getcount();
iteam::getscount();//static member function
b.getdata(200);
cout<<"\t";
a.getcount();
iteam::getscount();
c.getdata(300);
a.getcount();
cout<<"\t";
iteam::getscount();
return 0;
} 