#include <iostream>
using namespace std;

bool check(int n, int org, int rev = 0)
{
    if (n <= 0)
    {
        if (org == rev)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    rev = rev * 10 + (n % 10);
    n /= 10;
    return check(n, org, rev);
}

int main()
{

    int num = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (check(num, num))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}