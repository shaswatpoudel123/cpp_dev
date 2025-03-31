/*8. Write a program to represent an age of a person in years, months and days. Implement operator
overloading which calculates the age of a person after a certain period. The period is also
represented in the format of years, months and days.*/
#include<iostream>
using namespace std;
class age{
    private:
    int year;
    int month;
    int day;
    public:
    age(){
        year=0;
        month=0;
        day=0;
    }
    age(int y,int m,int d){
        year=y;
        month=m;
        day=d;
    }
    void disp(){
        if(day>30)
        {
            month++;
            day=day-30;
        } 
        if (month>12)
        {
            year++;
            month=month-12;
        }
        cout<<"the total age is "<<year<<"/"<<month<<"/"<<day<<endl;
    }
    age operator +(age);
};
age age::operator +(age a){
    age temp;
    temp.year=year+a.year;
    temp.month=month+a.month;
    temp.day=day+a.day;
    return temp;
}
int main(){
    age a1(10,12,25) ,a2(15,3,6);
    age a3=a1+a2;
    a1.disp();
    a2.disp();
    a3.disp();
    return 0;
}
