#include<iostream>
using namespace std;

bool primeNumber(int n, int count = 0, int i = 1){
    if(n <= 1){
        return false;
    }

    if(i > n){
        if(count > 2){
            return false;
        }
        else{
            return true;
        }
    }

    if(n % i == 0){
        count++;
    }

    return primeNumber(n ,count, i+1);

}

int main(){

    while(true){
            int num;

        cout<<"Enter a number: ";
        cin>>num;

        if(primeNumber(num)){
            cout<<num<<" is Prime."<<endl;
        }
        else{
            cout<<num<<" is Composite."<<endl;
        }
        
    }
    return 0;
}