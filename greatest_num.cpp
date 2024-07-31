#include<iostream>
using namespace std;
int main(){
    int num1;
    int num2;
    cout<<"Enter first number";
    cin>>num1;
    cout<<"Enter second number";
    cin>>num2;
    if(num1==num2){
        cout<<"Both are equal";
    }
    else if(num1>num2){
        cout<<"First number is greatest";
    }
    else{
        cout<<"Second number is greatest";
    }
    return 0;
}