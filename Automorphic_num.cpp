#include<iostream>
using namespace std;
int main(){
    int n,sq,d,flag=0;

    cout<<"Enter the number: ";
    cin>>n;

    sq=n*n;
    d=n;

    while(n>0){
       if(n%10!=sq%10)
       {
        flag=1;
        break;
       } 
       n=n/10;
       sq=sq/10;
    }
    if(flag==1)
    cout<<d<<" is not an Automorphic Number";
    else
    cout<<d<<" is an Automorphic Number";
    return 0;
}