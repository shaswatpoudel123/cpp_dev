/*2. Define a class called "Circle" with following attributes:
• radius
• Also include the following member functions:
void setSize(float radius); // this function should set the value of radius of the Circle. float
getArea(); // this function should return the area of the circle.
float getPerimeter(); // this function should return the perimeter of the circle
Write a complete program.*/
#include<iostream>
using namespace std;
class circle{
    private:
    float r;
    public:
    void setsize(float radius){
        r=radius;
    }
    float getarea(){
        return ((22/7)*r*r);

    }
    float getperimeter(){
        return (2*(22/7)*r);
    }
};
int main()
{
    circle c;
     c.setsize(7);
    cout<<c.getarea()<<"is the area"<<endl;
    cout<<c.getperimeter()<<"is the perimeter"<<endl;
    return 0;
}
