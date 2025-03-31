/*10. Declare a class called book_details to represent details for a book, having data members like
title, author, edition, price and no_of_copies_available. Define following functions:
- constructor(s)
- display to display all data members
- find_books to find and display details of all books having price less than Rs. 250
- main to create an array of book_details and to show usage of above functions.*/
#include <iostream>
#include <string>
using namespace std;

class BookDetails {
private:
    string title;
    string author;
    string edition;
    float price;
    int no_of_copies_available;

public:
    // Constructor to initialize all data members
    BookDetails(string t, string a, string e, float p, int c) {
        title = t;
        author = a;
        edition = e;
        price = p;
        no_of_copies_available = c;
    }

    // Function to display the details of a book
    void display() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Edition: " << edition << endl;
        cout << "Price: Rs. " << price << endl;
        cout << "No. of Copies Available: " << no_of_copies_available << endl;
    }

    // Function to check if price is less than Rs. 250
    bool isPriceLessThan250() const {
        return price < 250;
    }

    // Static function to find and display all books with price < Rs. 250
    static void findBooks(BookDetails books[], int n) {
        bool found = false;
        for (int i = 0; i < n; ++i) {
            if (books[i].isPriceLessThan250()) {
                books[i].display();
                cout << "---------------------------------" << endl;
                found = true;
            }
        }
        if (!found) {
            cout << "No books found with price less than Rs. 250." << endl;
        }
    }
};

int main() {
    // Creating an array of BookDetails objects
    BookDetails books[] = {
        BookDetails("Book1", "Author1", "1st Edition", 199.50, 10),
        BookDetails("Book2", "Author2", "2nd Edition", 299.99, 5),
        BookDetails("Book3", "Author3", "3rd Edition", 249.75, 8),
        BookDetails("Book4", "Author4", "4th Edition", 150.00, 12),
    };

    int n = sizeof(books) / sizeof(books[0]);

    // Displaying all books with price less than Rs. 250
    cout << "Books with price less than Rs. 250:" << endl;
    BookDetails::findBooks(books, n);

    return 0;
}
