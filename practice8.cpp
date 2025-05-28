                                                                    /*an array elements negetivity check by exception handling*/

#include <iostream>
using namespace std;
int main()
{
    int x, i;
    cout << "Input array length: ";
    cin >> x;
    int arr[x];
    for (i = 0; i < x; i++)
    {
        arr[i] = rand() % 50 - 5;
        cout << arr[i] << " ";
    }
    try
    {
        for (i = 0; i < x; i++)
        {
            if (arr[i] < 0)
            {
                throw string("This array has negative elements.But all elements are not negative.");    
            }
        }
        cout<<"\nAll elements are negative."<<endl;
    }
    catch (string x)
    {
        cout << "\nError: " << x << endl;
    }
}
