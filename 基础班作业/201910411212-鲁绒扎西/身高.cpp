#include <iostream>
using namespace std;

const double inch_per_feet = 12.0;

int main()
{
    int inch;
    cout << "Enter the height in inch:______\b\b\b\b\b\b";
    cin >> inch;
    cout << "the new is " << inch / inch_per_feet << " feet" << endl;
    return 0;
}
