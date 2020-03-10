#include <iostream>
using namespace std;

const double minute_per_degree = 60;
const double second_per_minute = 60;

int main()
{
    double degrees, minutes, seconds;
    cout << "Enter a latitude in degrees,minutes,and seconds:" << endl;
    cout << "First,enter the degrees:" << endl;
    cin >> degrees;
    cout << "Next,enter the minutes of arc:" << endl;
    cin >> minutes;
    cout << "Finally,enter the seconds of arc:" << endl;
    cin >> seconds;
    double result_degrees = degrees + minutes / minute_per_degree + seconds / (minute_per_degree * second_per_minute);
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds"
        << " = " << result_degrees << " degrees." << endl;
    return 0;
}
