#include <iostream>
#include <vector>
#include <string>

class Book {
private:
    int id;
    std::string title;
    std::string author;
    bool isBorrowed;

public:
    // Constructor
    Book(int id, const std::string& title, const std::string& author)
        : id(id), title(title), author(author), isBorrowed(false) {}

    // Getter methods
    int getId() const { return id; }
    std::string getTitle() const { return title; }
    std::string getAuthor() const { return author; }
    bool getBorrowedStatus() const { return isBorrowed; }

    // Borrow the book
    void borrowBook() {
        if (isBorrowed) {
            std::cout << "The book \"" << title << "\" is already borrowed.\n";
        } else {
            isBorrowed = true;
            std::cout << "You have successfully borrowed \"" << title << "\".\n";
        }
    }

    // Return the book
    void returnBook() {
        if (!isBorrowed) {
            std::cout << "The book \"" << title << "\" is not currently borrowed.\n";
        } else {
            isBorrowed = false;
            std::cout << "You have successfully returned \"" << title << "\".\n";
        }
    }

    // Display book details
    void display() const {
        std::cout << "ID: " << id << "\nTitle: " << title
                  << "\nAuthor: " << author
                  << "\nStatus: " << (isBorrowed ? "Borrowed" : "Available") << "\n\n";
    }
};

class Library {
private:
    std::vector<Book> books;

public:
    // Add a new book
    void addBook() {
        int id;
        std::string title, author;

        std::cout << "Enter Book ID: ";
        std::cin >> id;
        std::cin.ignore();
        std::cout << "Enter Book Title: ";
        std::getline(std::cin, title);
        std::cout << "Enter Book Author: ";
        std::getline(std::cin, author);

        // Check for duplicate ID
        for (const auto& book : books) {
            if (book.getId() == id) {
                std::cout << "Error: A book with ID " << id << " already exists.\n\n";
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

        std::cout << "Library Books:\n";
        for (const auto& book : books) {
            book.display();
        }
    }

    // Search for a book by ID
    void searchBook() const {
        int searchId;
        std::cout << "Enter Book ID to search: ";
        std::cin >> searchId;

        for (const auto& book : books) {
            if (book.getId() == searchId) {
                std::cout << "Book Found:\n";
                book.display();
                return;
            }
        }

        std::cout << "Book with ID " << searchId << " not found.\n\n";
    }

    // Borrow a book
    void borrowBook() {
        int borrowId;
        std::cout << "Enter Book ID to borrow: ";
        std::cin >> borrowId;

        for (auto& book : books) {
            if (book.getId() == borrowId) {
                book.borrowBook();
                return;
            }
        }

        std::cout << "Book with ID " << borrowId << " not found.\n\n";
    }

    // Return a book
    void returnBook() {
        int returnId;
        std::cout << "Enter Book ID to return: ";
        std::cin >> returnId;

        for (auto& book : books) {
            if (book.getId() == returnId) {
                book.returnBook();
                return;
            }
        }

        std::cout << "Book with ID " << returnId << " not found.\n\n";
    }
};

int main() {
    Library library;
    int choice;

    do {
        // Display menu
        std::cout << "=========================\n";
        std::cout << " Library Management Menu\n";
        std::cout << "=========================\n";
        std::cout << "1. Add Book\n";
        std::cout << "2. Display Books\n";
        std::cout << "3. Search Book\n";
        std::cout << "4. Borrow Book\n";
        std::cout << "5. Return Book\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Menu actions
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
                library.borrowBook();
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
