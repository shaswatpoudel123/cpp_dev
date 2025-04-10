/*22. Implement a class which can represent a day in YYYY, MM and DD format. Implement
operator overloading function within the class which returns the age of person at entered date.*/
#include <iostream>
#include <iomanip>  // For setting output format
using namespace std;

class Date {
private:
    int year;
    int month;
    int day;

public:
    // Constructor to initialize the date
    Date(int y = 0, int m = 0, int d = 0) : year(y), month(m), day(d) {}

    // Function to check if the year is a leap year
    bool isLeapYear(int y) const {
        if (y % 4 == 0) {
            if (y % 100 == 0) {
                if (y % 400 == 0) {
                    return true;
                }
                return false;
            }
            return true;
        }
        return false;
    }

    // Function to get the number of days in a given month of a year
    int getDaysInMonth(int m, int y) const {
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
            return 31;
        if (m == 4 || m == 6 || m == 9 || m == 11)
            return 30;
        if (m == 2) {
            if (isLeapYear(y))
                return 29;
            return 28;
        }
        return 0; // Invalid month
    }

    // Function to calculate age when the current date is passed
    int operator-(const Date& birthDate) const {
        int currentYear = year;
        int currentMonth = month;
        int currentDay = day;
        int birthYear = birthDate.year;
        int birthMonth = birthDate.month;
        int birthDay = birthDate.day;

        // Calculate the age in years
        int age = currentYear - birthYear;

        // Adjust if the current date hasn't yet passed the birthday this year
        if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay)) {
            age--;
        }

        return age;
    }

    // Function to display the date in YYYY-MM-DD format
    void display() const {
        cout << setw(4) << setfill('0') << year << "-" 
             << setw(2) << setfill('0') << month << "-" 
             << setw(2) << setfill('0') << day;
    }
};

int main() {
    // Create a Date object representing the birth date
    Date birthDate(1995, 5, 15); // Birth date: 1995-05-15

    // Create a Date object representing the current date
    Date currentDate(2025, 3, 29); // Current date: 2025-03-29

    // Display the birth date
    cout << "Birth Date: ";
    birthDate.display();
    cout << endl;

    // Display the current date
    cout << "Current Date: ";
    currentDate.display();
    cout << endl;

    // Calculate the age using operator overloading
    int age = currentDate - birthDate;
    cout << "Age of the person: " << age << " years" << endl;

    return 0;
}
