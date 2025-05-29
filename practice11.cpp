#include <iostream>
using namespace std;
int main()
{
    int i, x;
    cout << "Input array length: ";
    cin >> x;
    int arr[x];
    for (i = 0; i < x; i++)
    {
        arr[i] = rand() % 10 + 1;
    }
    try
    {
        if (arr[x] < 0 || arr[x] > 5)
        {
            throw string("Invalid array length.");
        }
        for (i = 0; i < x; i++)
        {
            cout<< arr[i] << " ";
        }
    }
    catch (string z)
    {
        cout << "404: " << z << endl;
    }
}