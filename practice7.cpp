/*Inherit a Teacher class from Person. Add a subject and age. Throw an exception if subject is empty or age is invalid*/

#include <iostream>
using namespace std;
class person
{
private:
    string name;

public:
    person(string n)
    {
        name = n;
    }
    void show()
    {
        cout << "NAME\t:" << name << endl;
    }
};
class teacher : public person
{
private:
    string sub;
    int age;

public:
    teacher(string n, string s, int a) : person(n)
    {
        
        if (s.empty())
        {
            
            throw string("Subject is empty.");
        }

        else if (a < 28 || a > 60)
        {
           
            throw string("Age is invalid.");
        }
        sub = s, age = a;
    }
    void display()
    {
        show();
        cout << "Subject Name\t:" << sub << "\nAge\t\t:" << age << endl;
    }
};
int main()
{
    string n, s;
    int a;
    cout << "Input name: ";
    getline(cin, n);
    cout << "Input subject: ";
    getline(cin, s);
    cout << "Input age: ";
    cin >> a;
    try
    {
        teacher t(n, s, a);
        t.display();
    }
    catch (string x)
    {
        cout << "Error: " << x << endl;
    }
}
