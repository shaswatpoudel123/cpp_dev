/*4. Create a class student having private members marks, name and public members rollno,
getdata(), printdata(). Demonstrate concept of pointer to class members for array of 3
objects.*/
#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    int marks;
    string name;
    public:
    int rollno;
    void getdata(){
        cout<<"Enter the name"<<endl;
        getline(cin,name);
        cout<<"Enter the roll no"<<endl;
        cin>>rollno;
        cout<<"Enter the marks"<<endl;
        cin>>marks;
}
 void showdata(){
    cout<<"The name is "<<name;
    cout<<"The rollno is "<<rollno;
    cout<<"The marks is "<<marks;
}
};
int main(){
    student st;
    st.getdata();
    student *s=&st;
    s->showdata();
    return 0;
}