                                      /*Check infinity*/
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    float resut;
    cout << "Input two intiger number: ";
    cin >> a >> b;
    try
    {
        if (b == 0)
        {
            throw 1;
        }
        resut = (float)a / b;
        cout << "Resust= " << resut << endl;
    }

    catch (int x)
    {
        cout << "You can not dividen by zero. Please try again." << endl;
    }
}