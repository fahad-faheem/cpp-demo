#include <iostream>
#include <vector>
#include <string>
using namespace std;

// BankAccount Class
class BankAccount {
private:
    int accountNumber;
    string ownerName;
    double balance;

public:
    // Constructor
    BankAccount(int accNum, string name, double initialBalance) {
        accountNumber = accNum;
        ownerName = name;
        balance = initialBalance;
    }

    // Deposit Money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << " successfully!\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    // Withdraw Money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn $" << amount << " successfully!\n";
        } else {
            cout << "Insufficient balance or invalid amount.\n";
        }
    }

    // Display Account Information
    void displayInfo() const {
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Owner Name: " << ownerName << "\n";
        cout << "Balance: $" << balance << "\n\n";
    }

    int getAccountNumber() const {
        return accountNumber;
    }
};

// Bank System Class
class BankSystem {
private:
    vector<BankAccount> accounts;

public:
    // Add New Account
    void addAccount() {
        int accNum;
        string name;
        double initialBalance;

        cout << "Enter Account Number: ";
        cin >> accNum;
        cin.ignore();
        cout << "Enter Account Holder Name: ";
        getline(cin, name);
        cout << "Enter Initial Balance: ";
        cin >> initialBalance;

        accounts.emplace_back(accNum, name, initialBalance);
        cout << "Account created successfully!\n\n";
    }

    // Display All Accounts
    void displayAllAccounts() {
        if (accounts.empty()) {
            cout << "No accounts available.\n";
            return;
        }
        for (const auto& acc : accounts) {
            acc.displayInfo();
        }
    }

    // Perform Deposit or Withdrawal
    void manageAccount(bool isDeposit) {
        int accNum;
        double amount;
        cout << "Enter Account Number: ";
        cin >> accNum;
        cout << "Enter Amount: ";
        cin >> amount;

        for (auto& acc : accounts) {
            if (acc.getAccountNumber() == accNum) {
                if (isDeposit)
                    acc.deposit(amount);
                else
                    acc.withdraw(amount);
                return;
            }
        }
        cout << "Account not found!\n";
    }
};

// Main Function
int main() {
    BankSystem bank;
    int choice;

    do {
        cout << "\n===== Bank Management System =====\n";
        cout << "1. Create Account\n";
        cout << "2. Display All Accounts\n";
        cout << "3. Deposit Money\n";
        cout << "4. Withdraw Money\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                bank.addAccount();
                break;
            case 2:
                bank.displayAllAccounts();
                break;
            case 3:
                bank.manageAccount(true);
                break;
            case 4:
                bank.manageAccount(false);
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
