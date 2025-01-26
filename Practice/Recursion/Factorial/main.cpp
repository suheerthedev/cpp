#include<iostream>
using namespace std;

int fact(int n){
    if(n <= 1){
        return 1;
    }

    return n * fact(n-1);
}

int main(){

    while (true)
    {
        int num;

        cout<<"Enter a number: ";
        cin>>num;

        if(num < 0){
            cout<<"Factorial of -ve numbers is undefined."<<endl;
        }
        else{
            cout<<"Factorial of "<<num<<" is: "<<fact(num)<<endl;
        }

    }
    
    return 0;
}