#include<iostream>
using namespace std;

int reverseNumber(int n, int rev = 0){

    //handles negative input
    if(n < 0){
        return -reverseNumber(-n);
    }

    if(n == 0){
        return rev;
    }
    int digit = n % 10;
    rev = rev * 10 + digit;
    return reverseNumber(n/10, rev);
}

int main(){

    while(true){
        int num;

        cout<<"Enter a number: ";
        cin>>num;

        cout<<"Reversed Number: "<<reverseNumber(num)<<endl;
    }

    return 0;
}