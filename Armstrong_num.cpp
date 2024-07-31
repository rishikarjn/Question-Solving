#include<iostream>
using namespace std;
int main(){
    int number,rem,sum=0;
    cout<<"Enter the number: ";
    cin>>number;
    int temp=number;
    while(number>0){
        rem=number%10;
        sum=sum+(rem*rem*rem);
        number=number/10;
        }
    if(temp==sum)
    cout<<"Armstrong Number"<<endl;
    else
    cout<<"Not Armstrong Number";
    return 0;
}