#include <iostream>
#include <string>
using namespace std;

string reverseNumber(string str)
{
    string rev = "";
    for(int i = str.length() -1 ; i >= 0; i--){
        rev += str[i];
    }
    return rev;
}

int main()
{
    string str = "";

    cout << "Enter a number: ";
    getline(cin, str);

    cout<<"Reversed Number: "<<reverseNumber(str)<<endl;
   
    return 0;
}