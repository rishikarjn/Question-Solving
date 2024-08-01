#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number ";
    cin>>num;
    int factor=2;
    cout<<"Prime factors=  ";
    while(num>1){
        if(num%factor==0){
        cout<<factor<<" ";
        num=num/factor;
        }
        else{
            factor++;
        }
    }
    return 0;
}