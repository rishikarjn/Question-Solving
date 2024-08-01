#include<iostream>
using namespace std;

int main(){
    int num=156;
    int rem=0, sum=0, n;

    n=num;

    while(num>0){
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }

    if(n%sum==0)
      cout<<n<<" is a harshad number";
      else
      cout<<n<<" is not a harshad number";
      return 0;
}