#include<iostream>
using namespace std;
class sample{
    private:
    float a;
    public:
    sample(){
        a=10.54;
    }
    //using a casting operator function 
    operator int(){
        int x;
        x=a;
        return x;
    } 
};
int main(){
    sample s;
    int y=s;
    cout<<"the value of x is "<<y<<endl;
    return 0;
}

