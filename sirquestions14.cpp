/*14. Write program to represent transactions of a Digital Wallet which have following details:
Balance: Data member which represents available balance
Reward points: Data member which represents rewards points Load Balance: Action which
represents loading balance
Make a payment: Action which represent making a payment
Payment History: Action which help to browse through last five transactions
For every payment greater than the amount of 2000 balance earns reward points of 50. Every 1000
reward points earns Balance of 10 and the Balance is incremented by 10. Define abstract class
"Digital_wallet" having data members Balance and Reward points. Derive another class
"Transaction" which performs the above mentioned action and activities. Store information about
five transactions in an array and implement run time polymorphism to display information about
a particular transaction_ID. [Make necessary assumptions]*/
#include <iostream>
#include <string>
using namespace std;

// Abstract class representing the Digital Wallet
class Digital_wallet {
protected:
    double balance;
    int reward_points;

public:
    Digital_wallet() : balance(0), reward_points(0) {}

    virtual void load_balance(double amount) = 0;  // Pure virtual function
    virtual void make_payment(double amount, int transaction_ID) = 0;  // Pure virtual function
    virtual void payment_history(int transaction_ID) = 0;  // Pure virtual function

    virtual ~Digital_wallet() {}  // Virtual destructor for proper cleanup
};

// Derived class representing transactions in the Digital Wallet
class Transaction : public Digital_wallet {
private:
    static const int MAX_TRANSACTIONS = 5;  // Fixed size for transaction history
    string transaction_history[MAX_TRANSACTIONS];
    int transaction_counter;

public:
    Transaction() : transaction_counter(0) {}

    // Load balance to the wallet
    void load_balance(double amount) override {
        balance += amount;
        cout << "Balance Loaded: Rs. " << amount << endl;
    }

    // Make payment and check for reward points
    void make_payment(double amount, int transaction_ID) override {
        if (amount > balance) {
            cout << "Insufficient Balance for transaction " << transaction_ID << "!" << endl;
        } else {
            balance -= amount;
            string transaction = "Transaction ID: " + to_string(transaction_ID) + ", Amount: Rs. " + to_string(amount);
            
            // Store transaction history in the array
            if (transaction_counter < MAX_TRANSACTIONS) {
                transaction_history[transaction_counter++] = transaction;
            } else {
                // If the array is full, shift all transactions one place to the left
                for (int i = 1; i < MAX_TRANSACTIONS; ++i) {
                    transaction_history[i - 1] = transaction_history[i];
                }
                transaction_history[MAX_TRANSACTIONS - 1] = transaction;
            }

            // Add reward points if payment is greater than Rs. 2000
            if (amount > 2000) {
                reward_points += 50;
                cout << "Reward points earned: 50" << endl;
            }

            // Convert reward points to balance
            if (reward_points >= 1000) {
                int additional_balance = reward_points / 1000 * 10;
                balance += additional_balance;
                reward_points -= (additional_balance / 10) * 1000;
                cout << "Balance Increased by Rs. " << additional_balance << " due to reward points" << endl;
            }

            cout << "Payment of Rs. " << amount << " successful. Transaction ID: " << transaction_ID << endl;
        }
    }

    // Display payment history for a specific transaction ID
    void payment_history(int transaction_ID) override {
        if (transaction_ID < 1 || transaction_ID > transaction_counter) {
            cout << "Transaction ID " << transaction_ID << " not found!" << endl;
        } else {
            cout << transaction_history[transaction_ID - 1] << endl;
        }
    }

    // Function to view the last 5 transactions
    void view_last_five_transactions() {
        int count = 0;
        cout << "\nLast 5 Transactions: " << endl;
        for (int i = transaction_counter - 1; i >= 0 && count < MAX_TRANSACTIONS; --i) {
            cout << transaction_history[i] << endl;
            count++;
        }
    }

    // Function to display current balance and reward points
    void display_balance_and_rewards() {
        cout << "\nCurrent Balance: Rs. " << balance << endl;
        cout << "Reward Points: " << reward_points << endl;
    }
};

int main() {
    Transaction my_wallet;
    Digital_wallet *wallet = &my_wallet;

    wallet->load_balance(5000);  // Load Rs. 5000 to the wallet
    my_wallet.make_payment(3000, 1);  // Make a payment of Rs. 3000 (Transaction ID: 1)
    my_wallet.make_payment(1500, 2);  // Make a payment of Rs. 1500 (Transaction ID: 2)
    my_wallet.make_payment(2500, 3);  // Make a payment of Rs. 2500 (Transaction ID: 3)

    my_wallet.view_last_five_transactions();  // Display last 5 transactions

    my_wallet.display_balance_and_rewards();  // Display current balance and reward points

    // Display information about transaction 2
    cout << "\nTransaction History for Transaction ID 2:" << endl;
    wallet->payment_history(2);

    return 0;
}
