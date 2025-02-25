#include<iostream>
#include<string>
using namespace std;

class MyClass
{
public:
    string name;
};

int main(){
    MyClass c1;
    c1.name = "Suheer";

    cout<<c1.name<<endl;
    return 0;
}

