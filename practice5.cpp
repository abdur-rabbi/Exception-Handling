                                           /*using of this keyword. */

#include <iostream>
using namespace std;
class studnt
{
private:
    string name;
    int id;

public:
    studnt(string name, int id)
    {
        //When class variabe name and local variable name is same then we can use this keyword
      this-> name = name,this-> id = id;       
        cout << "name\t:" << name << "\nID\t:" << id << endl;
    }
};
int main()
{
    studnt s1("Rabbi khan", 24);
    studnt s2("Abdut Rabbi", 46);
}