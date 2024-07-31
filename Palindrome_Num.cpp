#include<iostream>
using namespace std;
int main(){
    int number,rem,reverseNum=0;
    cout<<"Enter the number: ";
    cin>>number;
    int temp=number;
    while(number>0){
    rem=number%10;
    reverseNum=(reverseNum*10)+rem;
    number=number/10;
    }
    if(temp==reverseNum){
        cout<<"Number is Palindrome number";
    }
    else
    cout<<"Number is not Palindrome number";
    return 0;




}