#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

// Bank Account Class
class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(int accNum, string holder, double initialBalance) {
        accountNumber = accNum;
        accountHolder = holder;
        balance = initialBalance;
    }

    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: $" << fixed << setprecision(2) << balance << "\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: $" << fixed << setprecision(2) << balance << "\n";
        } else {
            cout << "Invalid withdrawal amount or insufficient balance.\n";
        }
    }

    // Display account details
    void displayAccount() const {
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Account Holder: " << accountHolder << "\n";
        cout << "Balance: $" << fixed << setprecision(2) << balance << "\n";
    }

    // Get account number
    int getAccountNumber() const {
        return accountNumber;
    }

    // Get account balance
    double getBalance() const {
        return balance;
    }

    // Get account holder name
    string getHolderName() const {
        return accountHolder;
    }
};

// Bank Class
class Bank {
private:
    vector<BankAccount> accounts;
    int nextAccountNumber = 1000;

public:
    // Create new account
    void createAccount() {
        string holder;
        double initialDeposit;
        
        cout << "Enter account holder name: ";
        cin.ignore();
        getline(cin, holder);
        
        cout << "Enter initial deposit amount: $";
        cin >> initialDeposit;
        
        if (initialDeposit < 0) {
            cout << "Initial deposit cannot be negative.\n";
            return;
        }

        accounts.emplace_back(nextAccountNumber++, holder, initialDeposit);
        cout << "Account successfully created. Your account number is: " << (nextAccountNumber - 1) << "\n";
    }

    // Find an account by number
    BankAccount* findAccount(int accNum) {
        for (auto &account : accounts) {
            if (account.getAccountNumber() == accNum) {
                return &account;
            }
        }
        return nullptr;
    }

    // Deposit money into an account
    void depositToAccount() {
        int accNum;
        double amount;

        cout << "Enter account number: ";
        cin >> accNum;
        
        BankAccount* account = findAccount(accNum);
        if (account) {
            cout << "Enter deposit amount: $";
            cin >> amount;
            account->deposit(amount);
        } else {
            cout << "Account not found.\n";
        }
    }

    // Withdraw money from an account
    void withdrawFromAccount() {
        int accNum;
        double amount;

        cout << "Enter account number: ";
        cin >> accNum;

        BankAccount* account = findAccount(accNum);
        if (account) {
            cout << "Enter withdrawal amount: $";
            cin >> amount;
            account->withdraw(amount);
        } else {
            cout << "Account not found.\n";
        }
    }

    // Check balance of an account
    void checkBalance() {
        int accNum;

        cout << "Enter account number: ";
        cin >> accNum;

        BankAccount* account = findAccount(accNum);
        if (account) {
            cout << "Current balance: $" << fixed << setprecision(2) << account->getBalance() << "\n";
        } else {
            cout << "Account not found.\n";
        }
    }

    // Display all accounts
    void displayAllAccounts() {
        if (accounts.empty()) {
            cout << "No accounts found.\n";
            return;
        }

        cout << "================= All Bank Accounts =================\n";
        for (const auto &account : accounts) {
            account.displayAccount();
            cout << "----------------------------------------\n";
        }
    }
};

// Function to display menu
void displayMenu() {
    cout << "\n============ Bank Management System ============\n";
    cout << "1. Create Account\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Check Balance\n";
    cout << "5. Display All Accounts\n";
    cout << "6. Exit\n";
    cout << "Enter your choice: ";
}

// Main function
int main() {
    Bank bank;
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                bank.createAccount();
                break;
            case 2:
                bank.depositToAccount();
                break;
            case 3:
                bank.withdrawFromAccount();
                break;
            case 4:
                bank.checkBalance();
                break;
            case 5:
                bank.displayAllAccounts();
                break;
            case 6:
                cout << "Exiting program. Thank you for using our system.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
