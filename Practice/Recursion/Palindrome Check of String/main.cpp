#include <iostream>
#include <string>
using namespace std;

bool check(string str, string org, int i, string rev = "")
{
    if (i < 0)
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

    rev += str[i];
    return check(str, org, i - 1, rev);
}

int main()
{
    string str;

    cout << "Enter a String: ";
    getline(cin, str);

    if (check(str, str, str.length() - 1))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}