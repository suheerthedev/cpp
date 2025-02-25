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
public:
    float length;
    float breadth;
    float height;
    float calculateArea()
    {
        return length * breadth;
    }
    float calculateVolume()
    {
        return length * breadth * height;
    }
};

int main()
{
    Room r1;
    r1.height = 10;
    r1.breadth = 10;
    r1.length = 10;

    cout << r1.calculateArea() << endl;
    return 0;
}
