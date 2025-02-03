#include<iostream>
#include<string>
using namespace std;
class life{
    private:
    int paisa ;
    string name;
    string address;
    public:
    life(){
        cout<< "enter the name "<<endl;
        getline(cin,name);
    }
    life(int x){
        paisa=x;
    }
    life(life &x){
        address=x.name;
    }
    void showdata(){
        cout<<"The name of the person is "<<name<<"\nThe person is from  "<<address<<"\nThe person is donated"<<paisa<<endl;
    }
};
int main(){
    life l,I(1000),V(l),n;
    n.showdata();
    return 0;
}