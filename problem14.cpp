                                    /*Grading error check by exception handling*/


#include <iostream>
using namespace std;
class studnet
{
private:
    int mark;

public:
    studnet(int m) : mark(m) {}
    void check()
    {
        if (mark < 0 || mark > 100)
        {
            throw string("invalid number.");
        }
        if (mark >= 80)
        {
            cout << "A+";
        }
        else if (mark >= 70)
        {
            cout << "A";
        }
        else if (mark >= 60)
        {
            cout << "A-";
        }
        else if (mark >= 50)
        {
            cout << "B+";
        }
        else if (mark >= 40)
        {
            cout << "B-";
        }
        else if (mark >= 33)
        {
            cout << "C";
        }
        else
        {
            cout << "Fail";
        }
    }
};
int main()
{
    int mark;
    cout << "input mark: ";
    cin >> mark;

    try
    {
        studnet s(mark);
        s.check();
    }
    catch (string e)
    {
        cout << "error: " << e << endl;
    }
}