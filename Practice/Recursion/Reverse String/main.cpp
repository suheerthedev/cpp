#include<iostream>
#include<string>
using namespace std;

string revString(string str, string rev, int i){
    if(i < 0 ){
        return rev;
    }
    rev += str[i];
    
    return revString(str,rev,i-1);
}

int main(){

    string str;

    cout<<"Enter a string: ";
    getline(cin, str);

    int length = str.length()-1;

    cout<<"Reversed String: "<<revString(str,"",length);
    return 0;
}