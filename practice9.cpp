                                        /*check password validity by exception handling */

#include <iostream>
using namespace std;
void checkValidity(string x)
{
    if (x.length() < 8)
    {
        throw string("Length is invalid.");
    }
    bool upcase = 0, lowcase = 0, digit = 0;
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] >= 'A' && x[i] <= 'Z')
        {
            upcase = 1;
        }
        if (x[i] >= 'a' && x[i] <= 'z')
        {
            lowcase = 1;
        }
        if (x[i] >= '0' && x[i] <= '9')
        {
            digit = 1;
        }
    }
    if (upcase != 1)
    {
        throw string("Not found upercase letter.");
    }
    if (lowcase != 1)
    {
        throw string("Not found lowercase letter.");
    }
    if (digit != 1)
    {
        throw string("Not found digit.");
    }
}
int main()
{
    string p;
    cout << "Input a valid password: ";
    getline(cin, p);
    try
    {
        checkValidity(p);
        cout << "Password is valid: " << p << endl;
    }
    catch (string z)
    {
        cout << "Error: " << z << endl;
    }
}
