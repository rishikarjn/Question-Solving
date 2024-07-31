#include<iostream>
using namespace std;
int main(){
    int num1=3;
    int num2=5;
    int num3=7;

    if((num1>=num2)&&(num1>=num3))
    cout<<"num1 is greatest";
    else if((num2>=num1)&&(num2>=num3))
    cout<<"num2 is greatest";
    else
    cout<<"num3 is greatest";
    return 0;
}