                                         /*Check age validity*/
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Input age: ";
    cin >> x;
    try
    {
        if (x <= 0 || x >= 150)
            throw 1;
        cout << "Age= " << x;
    }

    catch (int a)
    {
        cout << "Invlie Age.";
    }
}