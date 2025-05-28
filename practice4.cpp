/*Class with inheritance with constructor using exception handling*/
#include <iostream>
using namespace std;
class person
{
private:
    string name;
    int age;

public:
    person(string n, int a)
    {
        if (a <= 0 || a >= 100)
            throw string("Invalid age.");
        name = n, age = a;
    }
    void show()
    {
        cout << "NAME\t:" << name << "\nAGE\t:" << age << endl;
    }
};
class student : public person
{
private:
    float gpa;

public:
    student(string n, int a, float g) : person(n, a)
    {
        if (g <= 0.0 || g > 4.00)
        throw  string("Invalid gpa.");
            gpa = g;
        
    }
    void display()
    {
        show();
        cout << "GPA\t:" << gpa;
    }
};
int main()
{
    string n;
    int a;
    float g;
    cout << "Input name: ";
    getline(cin, n);
    cout << "Input age: ";
    cin >> a;
    cout << "Input gpa: ";
    cin >> g;
    try
    {
        student s(n, a, g);
        s.display();
    }
    catch (string x)
    {
        cout << "Error: " << x << endl;
    }
}
