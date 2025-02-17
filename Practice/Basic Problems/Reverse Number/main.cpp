#include <iostream>
using namespace std;

int reverseNumber(int n)
{
    int rev = 0;
    while(n > 0){
        rev = rev * 10 + (n%10);
        n /= 10;
    }
    return rev;
}

int main()
{
    int num = 0;

    cout << "Enter a number: ";
    cin >> num;

    cout<<"Reversed Number: "<<reverseNumber(num)<<endl;
   
    return 0;
}