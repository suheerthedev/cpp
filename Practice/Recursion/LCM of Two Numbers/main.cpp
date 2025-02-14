#include <iostream>
using namespace std;

int lcm(int a, int b, int multiple = 0)
{
    if (multiple == 0)
    {
        multiple = a;
    }

    if (multiple % b == 0)
    {
        return multiple;
    }

    return lcm(a, b, multiple + a);
}

int main()
{
    int a = 0, b = 0;

    cout << "Enter First Number: ";
    cin >> a;

    cout << "Enter Second Number: ";
    cin >> b;

    cout << "LCM of Both Numbers: " << lcm(a, b) << endl;
    return 0;
}