#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

// Student Class
class Student {
private:
    int id;
    std::string name;
    double marks[3]; // Marks for 3 subjects
    char grade;

    // Calculate Grade based on average marks
    void calculateGrade() {
        double avg = (marks[0] + marks[1] + marks[2]) / 3;
        if (avg >= 90)
            grade = 'A';
        else if (avg >= 75)
            grade = 'B';
        else if (avg >= 60)
            grade = 'C';
        else if (avg >= 50)
            grade = 'D';
        else
            grade = 'F';
    }

public:
    // Constructor
    Student(int id, const std::string& name, double m1, double m2, double m3)
        : id(id), name(name) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        calculateGrade();
    }

    // Getters
    int getId() const { return id; }
    std::string getName() const { return name; }
    char getGrade() const { return grade; }

    // Display Student Details
    void display() const {
        std::cout << "ID: " << id << "\nName: " << name
                  << "\nMarks: " << marks[0] << ", " << marks[1] << ", " << marks[2]
                  << "\nGrade: " << grade << "\n\n";
    }
};

// Student Management System Class
class StudentManagement {
private:
    std::vector<Student> students;

public:
    // Add a Student
    void addStudent() {
        int id;
        std::string name;
        double m1, m2, m3;

        std::cout << "Enter Student ID: ";
        std::cin >> id;
        std::cin.ignore(); // Clear newline character from buffer
        std::cout << "Enter Student Name: ";
        std::getline(std::cin, name);
        std::cout << "Enter Marks for 3 Subjects: ";
        std::cin >> m1 >> m2 >> m3;

        // Check for duplicate ID
        for (const auto& student : students) {
            if (student.getId() == id) {
                std::cout << "Error: Student with ID " << id << " already exists.\n\n";
                return;
            }
        }

        students.emplace_back(id, name, m1, m2, m3);
        std::cout << "Student added successfully!\n\n";
    }

    // Display All Students
    void displayStudents() const {
        if (students.empty()) {
            std::cout << "No students available.\n\n";
            return;
        }

        std::cout << "Student Records:\n";
        for (const auto& student : students) {
            student.display();
        }
    }

    // Search for a Student by ID
    void searchStudent() const {
        int searchId;
        std::cout << "Enter Student ID to search: ";
        std::cin >> searchId;

        for (const auto& student : students) {
            if (student.getId() == searchId) {
                std::cout << "Student Found:\n";
                student.display();
                return;
            }
        }

        std::cout << "Student with ID " << searchId << " not found.\n\n";
    }

    // Delete a Student by ID
    void deleteStudent() {
        int deleteId;
        std::cout << "Enter Student ID to delete: ";
        std::cin >> deleteId;

        for (auto it = students.begin(); it != students.end(); ++it) {
            if (it->getId() == deleteId) {
                students.erase(it);
                std::cout << "Student with ID " << deleteId << " deleted successfully.\n\n";
                return;
            }
        }

        std::cout << "Student with ID " << deleteId << " not found.\n\n";
    }
};

// Main Function
int main() {
    StudentManagement sm;
    int choice;

    do {
        // Display Menu
        std::cout << "=========================\n";
        std::cout << "   Student Management\n";
        std::cout << "=========================\n";
        std::cout << "1. Add Student\n";
        std::cout << "2. Display Students\n";
        std::cout << "3. Search Student\n";
        std::cout << "4. Delete Student\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Menu Actions
        switch (choice) {
            case 1:
                sm.addStudent();
                break;
            case 2:
                sm.displayStudents();
                break;
            case 3:
                sm.searchStudent();
                break;
            case 4:
                sm.deleteStudent();
                break;
            case 5:
                std::cout << "Exiting program. Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice! Please try again.\n\n";
        }
    } while (choice != 5);

    return 0;
}
