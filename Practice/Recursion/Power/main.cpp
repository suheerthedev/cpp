#include<iostream>
using namespace std;


//loop to recursion conversion method
int power(int base, int exp, int result,int i = 1){
    if( i >= exp){
        return result;
    }

    return power(base, exp, base * result, i+1);
}

//direct implementation
int power1(int base, int exp){
    if(exp == 1){
        return base;
    }

    return base * power1(base, exp-1);
}


int main(){
    while (true)
    {
    
        int base, exp;

        cout<<"Enter Base: ";
        cin>>base;

        cout<<"Enter Exponent: ";
        cin>>exp;

        cout<<power1(base, exp)<<endl;

    }
    return 0;
}