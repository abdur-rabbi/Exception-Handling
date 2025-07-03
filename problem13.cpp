/*Create a BankAccount class with a balance attribute and a withdraw function. In the withdraw
function, throw an exception if the withdrawal amount exceeds the balance, with a message
like "Insufficient funds." Write a program to create a BankAccount object, deposit some
money, and try to withdraw an amount greater than the balance to test the exception handling.*/

#include <iostream>
using namespace std;
class bankAccount
{
private:
    string name;
    float balance = 1000, wda;

public:
    bankAccount(string n, float wa) : name(n), wda(wa) {}

    void withdrawal()
    {
        if (wda >= balance)
        {
            throw string("Insufficient funds.");
        }
        balance -= wda;
        cout << "\nWithdrawal successfull.\nAccount holder name\t:" << name << "\nMain balance\t\t:" << balance << "\nNow your main balance: " << balance << endl;
    }
};
int main()
{
    string n;
    float wa;
    cout << "input name: ";
    getline(cin, n);
    cout << "input withdrawal balance: ";
    cin >> wa;
    try
    {
        bankAccount b(n, wa);
        b.withdrawal();
    }
    catch (string e)
    {
        cout << "Error: " << e << endl;
    }
}