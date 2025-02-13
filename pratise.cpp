#include<iostream>
using namespace std;
void greatest(int a[5]){
    try{
        if(a[5]<=1)
        throw 1;
    }
    catch(int i){
        cout<<"excetion caught";
    }
}
int main(){
    int a[5]={0,2,3,4,5};
    greatest(a);

    return 0;
}