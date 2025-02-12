/*using new and delete opertor we are making spaces dynamically */
#include<iostream>
using namespace std;
int main(){
    float *pt=new float;
    *pt=55.55;
    cout<<"address :"<<pt<<endl;
    cout<<"value :"<<*pt<<endl;
    cout<<"size :"<<sizeof(*pt)<<endl;
    cout<<"size ptr :"<<sizeof(pt)<<endl;
    delete pt;
    return 0;
}