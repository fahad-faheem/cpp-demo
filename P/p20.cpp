#include <iostream>
#include <vector>
#include <string>
#include <limits>

// Book Class
class Book {
private:
    int bookId;
    std::string title;
    std::string author;
    bool isCheckedOut;

public:
    // Constructor
    Book(int id, const std::string& t, const std::string& a)
        : bookId(id), title(t), author(a), isCheckedOut(false) {}

    // Getters
    int getBookId() const { return bookId; }
    std::string getTitle() const { return title; }
    std::string getAuthor() const { return author; }
    bool getCheckedOutStatus() const { return isCheckedOut; }

    // Setters
    void checkOut() { isCheckedOut = true; }
    void returnBook() { isCheckedOut = false; }

    // Display Book Details
    void display() const {
        std::cout << "Book ID: " << bookId << "\nTitle: " << title
                  << "\nAuthor: " << author
                  << "\nStatus: " << (isCheckedOut ? "Checked Out" : "Available") << "\n\n";
    }
};

// Library Class
class Library {
private:
    std::vector<Book> books;

public:
    // Add a new book to the library
    void addBook() {
        int id;
        std::string title, author;

        std::cout << "Enter Book ID: ";
        std::cin >> id;
        std::cin.ignore(); // Clear the buffer
        std::cout << "Enter Book Title: ";
        std::getline(std::cin, title);
        std::cout << "Enter Book Author: ";
        std::getline(std::cin, author);

        // Check for duplicate Book ID
        for (const auto& book : books) {
            if (book.getBookId() == id) {
                std::cout << "Error: Book with ID " << id << " already exists.\n\n";
                return;
            }
        }

        books.emplace_back(id, title, author);
        std::cout << "Book added successfully!\n\n";
    }

    // Display all books
    void displayBooks() const {
        if (books.empty()) {
            std::cout << "No books available in the library.\n\n";
            return;
        }

        std::cout << "Library Book Records:\n";
        for (const auto& book : books) {
            book.display();
        }
    }

    // Search for a book by title or ID
    void searchBook() const {
        int searchId;
        std::string searchTitle;

        std::cout << "Enter Book ID or Title to search: ";
        std::cin >> searchId;

        bool found = false;
        for (const auto& book : books) {
            if (book.getBookId() == searchId) {
                book.display();
                found = true;
                break;
            }
        }

        if (!found) {
            std::cout << "Book with ID " << searchId << " not found.\n\n";
        }
    }

    // Check out a book by ID
    void checkOutBook() {
        int bookId;
        std::cout << "Enter Book ID to check out: ";
        std::cin >> bookId;

        for (auto& book : books) {
            if (book.getBookId() == bookId) {
                if (book.getCheckedOutStatus()) {
                    std::cout << "This book is already checked out.\n\n";
                } else {
                    book.checkOut();
                    std::cout << "Book checked out successfully!\n\n";
                }
                return;
            }
        }

        std::cout << "Book with ID " << bookId << " not found.\n\n";
    }

    // Return a book by ID
    void returnBook() {
        int bookId;
        std::cout << "Enter Book ID to return: ";
        std::cin >> bookId;

        for (auto& book : books) {
            if (book.getBookId() == bookId) {
                if (!book.getCheckedOutStatus()) {
                    std::cout << "This book is already available in the library.\n\n";
                } else {
                    book.returnBook();
                    std::cout << "Book returned successfully!\n\n";
                }
                return;
            }
        }

        std::cout << "Book with ID " << bookId << " not found.\n\n";
    }
};

// Main Function
int main() {
    Library library;
    int choice;

    do {
        // Display Menu
        std::cout << "=========================\n";
        std::cout << "   Library Management\n";
        std::cout << "=========================\n";
        std::cout << "1. Add Book\n";
        std::cout << "2. Display Books\n";
        std::cout << "3. Search Book\n";
        std::cout << "4. Check Out Book\n";
        std::cout << "5. Return Book\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Menu Actions
        switch (choice) {
            case 1:
                library.addBook();
                break;
            case 2:
                library.displayBooks();
                break;
            case 3:
                library.searchBook();
                break;
            case 4:
                library.checkOutBook();
                break;
            case 5:
                library.returnBook();
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
