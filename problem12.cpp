                                                   /*withdrawal balance check by exception handling*/

#include <iostream>
using namespace std;
int main()
{
    int balance;
    float x;
    cout << "Input main balance: ";
    cin >> balance;
    cout << "Input withdrawal balance: ";
    cin >> x;
    try
    {
        if (x <= 0 || x > balance)
        {
            throw string("Insufficent balance.");
        }

        balance -= x;
        {
            cout << "Withdrawal succesfull now Main balance is: " << balance << endl;
        }
    }
    catch (string z)
    {
        cout << "404: " << z << endl;
        balance -= 50;
        cout << "You got penalty charge 50tk now Balance: " << balance << endl;
    }
}