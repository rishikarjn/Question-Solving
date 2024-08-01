#include<iostream>
using namespace std;
int main(){
    double base=2.5;
    int expo=4;
    float res=1.0;
    while(expo!=0)
    {
        res*=base;
        expo--;
    }
  
    cout<<"Result: "<<res;
    return 0;
}