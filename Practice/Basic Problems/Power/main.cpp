#include<iostream>
using namespace std;

int power(int base, int exp){
    int result = base;
    for(int i = 1; i < exp; i++){
        result = result * base;
    }
    return result;
}

int main(){
    int base = 0 , exp = 0;

    cout<<"Enter Base: ";
    cin>>base;

    cout<<"Enter Exponent: ";
    cin>>exp;

    cout<<"Result: "<<power(base,exp)<<endl;
}