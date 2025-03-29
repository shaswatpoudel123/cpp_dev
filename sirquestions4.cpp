/*4. Write a program in C++ to read record of a student (name, address, roll) and display the record
using structure.*/
#include<iostream>
#include<string>
using namespace std;
struct student{
    string name;
    string address;
    int rollno;
};
int main(){
    struct student stu={"shaswat","gorkha",36};
    cout<<" The name of the students is "<<stu.name<<endl;
    cout<<" Student is from "<<stu.address<<endl;
    cout<<" Student rollno is "<<stu.rollno;
    return 0;
}