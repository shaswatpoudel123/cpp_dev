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
        cout<<"enter the address"<<endl;
        getline(cin,address);
        paisa=0;
    }
    life(int x){
        paisa=x;
        name = "Unknown";  // Default name
        address = "Unknown";
    }
    life(life &x){
        name=x.name;
        address = x.address;
        paisa = x.paisa;
    }
    
    void showdata(){
        cout<<"The name of the person is "<<name<<"\nThe person is from  "<<address<<"\nThe person is donated"<<paisa<<endl;
    }
};
int main(){
    life L;
    life I(1000);  // Calls parameterized constructor
    life V(L);  // Calls copy constructor;  // Calls default constructor again

    cout << "\nDisplaying data:\n";
    L.showdata();
    I.showdata();
    V.showdata();
    return 0;
}