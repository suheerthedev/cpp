#include<iostream>
using namespace std;

class MyClass{
    public:
        int x;
    private:
        int y;
    protected:
        int z;
};

class Child: public MyClass{
    public: 
        int a;
        
        int setZ(int a){
            z = a;
            
        }
        void printValue(){
            cout<<"Z: "<<z<<endl;
        }
    private:
        int b;
    protected:
        int c;
};

int main(){
    MyClass obj;
    Child child1;
    obj.x = 10;
    child1.x = 20;
    child1.a;

    cout<<obj.x<<endl;
    cout<<child1.x<<endl;   
    return 0;
}