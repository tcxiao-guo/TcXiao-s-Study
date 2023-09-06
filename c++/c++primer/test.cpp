#include <iostream>
#include <string>
#include <array>
using namespace std;

int main()
{
    array<double, 3> a;
    cout << "Please enter the score: ";
    cin >> a[0];
    cin >> a[1];
    cin >> a[2];
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}
