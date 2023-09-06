#include <iostream>
#include <string>
using namespace std;

struct Piza
{
    string name;
    double diameter;
    double weight;
};
int main()
{
    Piza *p = new Piza();
    cout << "Please enter the piza's company name: ";
    cin >> p->name;
    cout << "Enter the piza's diameter: ";
    cin >> p->diameter;
    cout << "Enter the piza's weight: ";
    cin >> p->weight;
    cout << "Name: " << p->name << endl;
    cout << "Diameter: " << p->diameter << endl;
    cout << "Weight: " << p->weight << endl;

    return 0;
}
