#include <iostream>
using namespace std;

const int hours_per_day = 24;
const int minutes_per_hour = 60;
const int seconds_per_minute = 60;

int main()
{
    long long input_seconds;
    cout << "Enter the number of seconds:" << endl;
    cin >> input_seconds;
    int days = input_seconds / (seconds_per_minute * minutes_per_hour * hours_per_day);
    int hours = input_seconds % (seconds_per_minute * minutes_per_hour * hours_per_day) / (seconds_per_minute * minutes_per_hour);
    int minutes = input_seconds % (seconds_per_minute * minutes_per_hour * hours_per_day) % (seconds_per_minute * minutes_per_hour) / seconds_per_minute;
    int seconds = input_seconds % (seconds_per_minute * minutes_per_hour * hours_per_day) % (seconds_per_minute * minutes_per_hour) % seconds_per_minute;
    cout << input_seconds << " seconds = " << days << " days, " << hours << " hours, "
        << minutes << " minutes, " << seconds << " seconds" << endl;
    return 0;
}
