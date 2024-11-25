#include <iostream>
using namespace std;

class Date {
private:
    int year, month, day;

    // Days in each month
    static const int daysInMonth[12];

    // Check if a year is a leap year
    bool isLeapYear(int y) const {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }

    // Get days in the current month considering leap years
    int getDaysInMonth(int m, int y) const {
        if (m == 2 && isLeapYear(y)) return 29;
        return daysInMonth[m - 1];
    }

    // Normalize the date (handle overflow of days and months)
    void normalize() {
        while (day > getDaysInMonth(month, year)) {
            day -= getDaysInMonth(month, year);
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
    }

public:
    // Constructor to initialize Date
    Date(int y, int m, int d) : year(y), month(m), day(d) {
        normalize(); // Ensure date is valid at initialization
    }

    // Pre-increment operator to go to the next day
    Date& operator++() {
        day++;
        normalize();
        return *this;
    }

    // Post-increment operator to go to the next day
    Date operator++(int) {
        Date temp = *this;
        ++(*this);
        return temp;
    }

    // Pre-decrement operator to go to the previous day
    Date& operator--() {
        day--;
        if (day <= 0) {
            month--;
            if (month <= 0) {
                month = 12;
                year--;
            }
            day = getDaysInMonth(month, year);
        }
        return *this;
    }

    // Operator += to add days
    Date& operator+=(int days) {
        day += days;
        normalize();
        return *this;
    }

    // Operator - to find the difference in days between two dates
    int operator-(const Date& other) const {
        int daysCount = 0;
        Date temp = *this;

        while (temp > other) {
            --temp;
            daysCount++;
        }
        return daysCount;
    }

    // Comparison operator to check if one date is greater than another
    bool operator>(const Date& other) const {
        if (year > other.year) return true;
        if (year == other.year && month > other.month) return true;
        if (year == other.year && month == other.month && day > other.day) return true;
        return false;
    }

    // Display the date in YYYY-MM-DD format
    void display() const {
        cout << year << "-" << (month < 10 ? "0" : "") << month << "-" << (day < 10 ? "0" : "") << day << "\n";
    }
};

// Static array to store the number of days in each month
const int Date::daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main() {
    int year, month, day;
    cout << "Enter the date (year month day): ";
    cin >> year >> month >> day;

    Date dt(year, month, day);  // Initialize a date from user input

    cout << "Initial Date: ";
    dt.display();

    ++dt;                    // Increment date to the next day
    cout << "After ++dt: ";
    dt.display();

    dt++;                    // Post-increment to go to the next day
    cout << "After dt++: ";
    dt.display();

    dt += 20;                // Add 20 days to the date
    cout << "After adding 20 days: ";
    dt.display();

    int year2, month2, day2;
    cout << "\nEnter another date (year month day) to compare: ";
    cin >> year2 >> month2 >> day2;

    Date dt2(year2, month2, day2);
    int days = dt2 - dt;     // Calculate difference in days
    cout << "Days between dates: " << days << "\n"; // Print the days difference

    if (dt2 > dt) {
        cout << "dt2 is after dt\n";
    } else {
        cout << "dt2 is not after dt\n";
    }

    return 0;
}
