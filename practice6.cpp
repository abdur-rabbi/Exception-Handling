/*Create a class Employee that takes name and salary. Throw an exception if salary is negative. Add a method to show employee details*/


#include <iostream>
using namespace std;
class employee
{
private:
    string name;
    float sal;

public:
    employee(string n, float s)
    {
        if (s < 0)
            throw string("Salary is not valis.");
            name=n, sal = s;
       
    }
    void show()
    {
        cout << "NAME\t:" << name << "\nSalary\t:" << sal << endl;
    }
};
int main()
{
    string n;
    float s;
    cout << "Input name: ";
    getline(cin, n);
    cout << "Input salary $: ";
    cin >> s;
    try
    {
        employee e(n, s);
        e.show();
    }
    catch (string x)
    {
        cout << "Error: " << x << endl;
    }
}