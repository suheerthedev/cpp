#include <iostream>
using namespace std;

bool primeCheck(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count > 2)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int num = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (primeCheck(num))
    {
        cout << "Is A Prime" << endl;
    }
    else
    {
        cout << "Not A Prime" << endl;
    }
    return 0;
}