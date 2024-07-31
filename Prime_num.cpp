#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    if(n%n==0)
    cout<<n<<" is prime number";
    else if(n%1==0)
    cout<<n<<" is a prime number";
    else
    cout<<n<< " is not a prime number";
    return 0;
}