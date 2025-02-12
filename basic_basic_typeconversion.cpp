#include<iostream>
using namespace std;
class sample{
    private:
    int a;
    public:
    sample(){a=0;}
    sample(int x){
        a=x;
    }
    void showadata(){
        cout<<"The value of a is "<<a<<endl;
    }
};
int main(){
    int m=10;
    sample s(5);
    s=m;
    s.showadata();
    return 0;

}