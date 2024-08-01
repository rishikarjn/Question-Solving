#include<iostream>
using namespace std;
int main(){
    int num=28;
    int sum=0;
    for(int i=1;i<num;i++){
        if(num%i==0)
        sum=sum+i;
    }
    if(sum==num){
        cout<<"This number is a perfect number";
    }
    else{
        cout<<"This number is not a perfect number";
    }
    return 0;
}
