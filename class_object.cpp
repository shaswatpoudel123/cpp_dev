#include<iostream>
#include<string>
#include<cstdlib>
#include<time.h>
using namespace std;
class student{
    private:
    int wardno;
    int citizenship_number;
    string name;
    string address;
    public:
    void getdata(){
        cout<<"enter the name :"<<endl;
        getline(cin,name);
        cout<<"enter the address :"<<endl;
        getline(cin,address);
        cout<<"enter the ward no :"<<endl;
        cin>>wardno;
    }
    void showdata(){
        srand(time(0));
        citizenship_number=(rand()); 
        cout<<name<<"\n"<<address<<"\n"<<wardno<<"\n"<<citizenship_number;
    }

};
int main()
{
    student s;
    s.getdata();
    s.showdata();
    return 0;
}