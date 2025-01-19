#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

// Bank Account Class
class BankAccount {
private:
    int accountNumber;
    std::string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(int accountNumber, const std::string& accountHolder, double initialDeposit)
        : accountNumber(accountNumber), accountHolder(accountHolder), balance(initialDeposit) {}

    // Getters
    int getAccountNumber() const { return accountNumber; }
    std::string getAccountHolder() const { return accountHolder; }
    double getBalance() const { return balance; }

    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposit of $" << amount << " successful. New balance: $" << balance << "\n\n";
        } else {
            std::cout << "Invalid deposit amount!\n\n";
        }
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount > balance) {
            std::cout << "Insufficient funds! Withdrawal failed.\n\n";
        } else if (amount > 0) {
            balance -= amount;
            std::cout << "Withdrawal of $" << amount << " successful. New balance: $" << balance << "\n\n";
        } else {
            std::cout << "Invalid withdrawal amount!\n\n";
        }
    }

    // Display account details
    void display() const {
        std::cout << "Account Number: " << accountNumber
                  << "\nAccount Holder: " << accountHolder
                  << "\nBalance: $" << std::fixed << std::setprecision(2) << balance << "\n\n";
    }
};

// Banking System Class
class BankingSystem {
private:
    std::vector<BankAccount> accounts;

public:
    // Create a new account
    void createAccount() {
        int accountNumber;
        std::string accountHolder;
        double initialDeposit;

        std::cout << "Enter Account Number: ";
        std::cin >> accountNumber;
        std::cin.ignore();
        std::cout << "Enter Account Holder Name: ";
        std::getline(std::cin, accountHolder);
        std::cout << "Enter Initial Deposit Amount: ";
        std::cin >> initialDeposit;

        // Check for duplicate account numbers
        for (const auto& account : accounts) {
            if (account.getAccountNumber() == accountNumber) {
                std::cout << "Error: Account with number " << accountNumber << " already exists!\n\n";
                return;
            }
        }

        accounts.emplace_back(accountNumber, accountHolder, initialDeposit);
        std::cout << "Account created successfully!\n\n";
    }

    // Display all accounts
    void displayAccounts() const {
        if (accounts.empty()) {
            std::cout << "No accounts available.\n\n";
            return;
        }

        std::cout << "Bank Accounts:\n";
        for (const auto& account : accounts) {
            account.display();
        }
    }

    // Search for an account by account number
    void searchAccount() const {
        int searchNumber;
        std::cout << "Enter Account Number to search: ";
        std::cin >> searchNumber;

        for (const auto& account : accounts) {
            if (account.getAccountNumber() == searchNumber) {
                std::cout << "Account Found:\n";
                account.display();
                return;
            }
        }

        std::cout << "Account with number " << searchNumber << " not found.\n\n";
    }

    // Deposit into an account
    void depositToAccount() {
        int accountNumber;
        double amount;
        std::cout << "Enter Account Number: ";
        std::cin >> accountNumber;

        for (auto& account : accounts) {
            if (account.getAccountNumber() == accountNumber) {
                std::cout << "Enter Deposit Amount: ";
                std::cin >> amount;
                account.deposit(amount);
                return;
            }
        }

        std::cout << "Account with number " << accountNumber << " not found.\n\n";
    }

    // Withdraw from an account
    void withdrawFromAccount() {
        int accountNumber;
        double amount;
        std::cout << "Enter Account Number: ";
        std::cin >> accountNumber;

        for (auto& account : accounts) {
            if (account.getAccountNumber() == accountNumber) {
                std::cout << "Enter Withdrawal Amount: ";
                std::cin >> amount;
                account.withdraw(amount);
                return;
            }
        }

        std::cout << "Account with number " << accountNumber << " not found.\n\n";
    }
};

// Main Function
int main() {
    BankingSystem bank;
    int choice;

    do {
        // Display menu
        std::cout << "=========================\n";
        std::cout << "      Banking Menu\n";
        std::cout << "=========================\n";
        std::cout << "1. Create Account\n";
        std::cout << "2. Display Accounts\n";
        std::cout << "3. Search Account\n";
        std::cout << "4. Deposit Money\n";
        std::cout << "5. Withdraw Money\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Menu actions
        switch (choice) {
            case 1:
                bank.createAccount();
                break;
            case 2:
                bank.displayAccounts();
                break;
            case 3:
                bank.searchAccount();
                break;
            case 4:
                bank.depositToAccount();
                break;
            case 5:
                bank.withdrawFromAccount();
                break;
            case 6:
                std::cout << "Exiting program. Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice! Please try again.\n\n";
        }
    } while (choice != 6);

    return 0;
}
