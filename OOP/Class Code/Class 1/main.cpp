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

int main()
{
    Room r1;
    r1.setHeight(10);
    r1.setBreadth(10);
    r1.setLength(10);

    cout << r1.calculateArea() << endl;
    return 0;
}
