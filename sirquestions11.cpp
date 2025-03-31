/*11. WAP to define a class to represent bowlers in cricket team having data members first_name,
last_name ,overs_bowled ,number_of_maiden,runs_given and wicket_taken with constructor to
initialize initial values and members function to display bowlers information*/
#include <iostream>
#include <string>
using namespace std;

class Bowler {
private:
    string first_name;
    string last_name;
    float overs_bowled;
    int number_of_maiden;
    int runs_given;
    int wicket_taken;

public:
    // Constructor to initialize all data members
    Bowler(string fn, string ln, float ob, int nm, int rg, int wt) {
        first_name = fn;
        last_name = ln;
        overs_bowled = ob;
        number_of_maiden = nm;
        runs_given = rg;
        wicket_taken = wt;
    }

    // Function to display the bowler's information
    void display() const {
        cout << "Bowler Information:" << endl;
        cout << "First Name: " << first_name << endl;
        cout << "Last Name: " << last_name << endl;
        cout << "Overs Bowled: " << overs_bowled << endl;
        cout << "Number of Maidens: " << number_of_maiden << endl;
        cout << "Runs Given: " << runs_given << endl;
        cout << "Wickets Taken: " << wicket_taken << endl;
    }
};

int main() {
    // Creating a Bowler object with sample data
    Bowler bowler1("John", "Doe", 10.5, 3, 45, 2);

    // Displaying the bowler's information
    bowler1.display();

    return 0;
}
