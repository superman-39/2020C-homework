#include <iostream>
#include <math.h>
using namespace std;

const double inches_per_foot = 12.0;
const double metres_per_inch = 0.0254;
const double pounds_per_kilogram = 2.2;

int main()
{
    double foot, inch, pound;
    cout << "Enter the height of foot:" << endl;
    cin >> foot;
    cout << "Enter the height of inch:" << endl;
    cin >> inch;
    cout << "Enter the height of pound:" << endl;
    cin >> pound;
    double height = (foot * inches_per_foot + inch) * metres_per_inch;
    double weight = pound / pounds_per_kilogram;
    double BMI = weight / pow(height, 2);
    cout << "the BMI is " << BMI << endl;
    return 0;
}
