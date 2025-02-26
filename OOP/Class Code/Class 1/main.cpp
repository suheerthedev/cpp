#include <iostream>
#include <string>
using namespace std;

class MyClass
{
public:
    string name;
    void percentage();
};

class Room
{
    protected:
        string str;
private:
    float length;
    float breadth;
    float height;

public:
    float calculateArea()
    {
        return length * breadth;
    }
    float calculateVolume()
    {
        return length * breadth * height;
    }
    float setLength(float l)
    {
        length = l;
    }
    float setBreadth(float b)
    {
        breadth = b;
    }
    float setHeight(float h)
    {
        height = h;
    }
};

class Table: public Room{
    public:
    void setString(string str1){
        str = str1;
    }
    void print(){
        cout<<str<<endl;
    }
};

class Base{

    public:
        int x;
    protected:
    int y;
    private:
    int z;

}
;

class Child public: Base{
    public:
        int a;
    protected:
    int b;
    private:
    int c;
}
int main()
{
    Room r1;
    Table t1;
    r1.setHeight(10);
    r1.setBreadth(10);
    r1.setLength(10);

    t1.setString("Protected");
    t1.print();
    

    cout << r1.calculateArea() << endl;
    return 0;
}
