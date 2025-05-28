                         /*Check even odd number*/ 

#include<iostream>
using namespace std;
int main()
{
    int x;
    cout << "Input a number: ";
    cin >> x;
    try
    {
        if (x % 2 != 0)
            throw 1;
        cout << x << " is the even number.";
    }
    catch (int a)
    {
        cout << "Odd number not allowed.";
    }
}