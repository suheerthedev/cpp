#include<iostream>
using namespace std;

int gcd(int a , int b){
    if(b == 0){
        return a;
    }
    return gcd(b,a%b);
}

int main(){

    int a = 0, b = 0;

    cout<<"Enter First Number: ";
    cin>>a;

    cout<<"Enter Second Number: ";
    cin>>b;


    cout<<"GCD Of Both Number: "<<gcd(a,b)<<endl;
    return 0 ;
}