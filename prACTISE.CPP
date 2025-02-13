#include <iostream>
using namespace std;

// Abstract class DigitalWallet
class DigitalWallet {
protected:
    double balance;
    int rewardPoints;

public:
    DigitalWallet(double initialBalance = 0) : balance(initialBalance), rewardPoints(0) {}

    virtual void loadBalance(double amount) = 0;
    virtual void makePayment(double amount) = 0;
    virtual void displayTransaction(int transactionID) = 0;

    void convertRewardPoints() {
        while (rewardPoints >= 1000) {
            rewardPoints -= 1000;
            balance += 10;
        }
    }

    virtual ~DigitalWallet() {}
};

// Derived class Transaction
class Transaction : public DigitalWallet {
private:
    struct TransactionDetail {
        int id;
        string type;
        double amount;
    };

    TransactionDetail history[5]; // Array to store last 5 transactions
    int transactionCounter = 0;

public:
    Transaction(double initialBalance = 0) : DigitalWallet(initialBalance) {}

    void loadBalance(double amount) override {
        balance += amount;
        addTransaction("Load", amount);
        cout << "Loaded: " << amount << ", New Balance: " << balance << endl;
    }

    void makePayment(double amount) override {
        if (amount > balance) {
            cout << "Insufficient Balance!" << endl;
            return;
        }

        balance -= amount;
        addTransaction("Payment", amount);

        // Reward Points Logic
        if (amount > 2000) {
            rewardPoints += 50;
        }

        convertRewardPoints();
        cout << "Payment of " << amount << " successful! New Balance: " << balance << ", Reward Points: " << rewardPoints << endl;
    }

    void addTransaction(string type, double amount) {
        history[transactionCounter % 5] = {transactionCounter, type, amount}; // Overwrites oldest transaction
        transactionCounter++;
    }

    void displayTransaction(int transactionID) override {
        for (int i = 0; i < 5; i++) {
            if (history[i].id == transactionID) {
                cout << "Transaction ID: " << history[i].id << ", Type: " << history[i].type << ", Amount: " << history[i].amount << endl;
                return;
            }
        }
        cout << "Transaction ID not found!" << endl;
    }
};

int main() {
    Transaction myWallet(5000);  // Initial Balance

    myWallet.loadBalance(2000);
    myWallet.makePayment(2500);
    myWallet.makePayment(1000);
    myWallet.makePayment(3000);
    myWallet.loadBalance(1500);
    myWallet.makePayment(500);

    myWallet.displayTransaction(1);  // Display a particular transaction

    return 0;
}
