/*to find the lowest no using template in a array*/
#include<iostream>
using namespace std;
template <typename T> /*making tempalte its name*/
T findlowest (T arr[],int size){/*making a function with paraments to pass*/
    T minval=arr[0];/*fixing the 1 value as initial*/
    for(int i=1;i<size;i++){
        if(arr[i]<minval){
            minval=arr[i];
        }
    }
    return minval;
}
int main(){
    int intarr[]={2,3,4,5,1};
    double doublearr[]={2.2,3.3,4.4,5.5,1.1};
    int intsize=sizeof(intarr)/sizeof(intarr[0]);/*sizeof(intArr) gives the total bytes used by the array.sizeof(intArr[0]) gives the size of one element.Their dvision gives the number of element */
    int doublesize=sizeof(doublearr)/sizeof(doublearr[0]);
    cout<<"The lowest no is :"<<findlowest(intarr,intsize)<<endl;
    cout<<"The lowest no is :"<<findlowest(doublearr,doublesize)<<endl;
    return 0;
}
