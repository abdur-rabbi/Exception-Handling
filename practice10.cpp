#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Input a valid mark: ";
    cin >> x;
    try
    {
        if (x < 0 || x > 100)
        {
            throw string("Mark is invalid.");
        }
        cout << "Valid mark is: " << x;
    }
    catch (string z)
    {
        cout << "Error: " << z << endl;
    }
}