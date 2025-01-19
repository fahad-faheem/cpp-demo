#include <iostream>
#include <vector>
#include <string>

class Student {
private:
    int id;
    std::string name;
    int age;
    std::string course;

public:
    // Constructor
    Student(int id, std::string name, int age, std::string course)
        : id(id), name(name), age(age), course(course) {}

    // Getter methods
    int getId() const { return id; }
    std::string getName() const { return name; }
    int getAge() const { return age; }
    std::string getCourse() const { return course; }

    // Display student details
    void display() const {
        std::cout << "ID: " << id << "\nName: " << name
                  << "\nAge: " << age << "\nCourse: " << course << "\n\n";
    }
};

class StudentManagementSystem {
private:
    std::vector<Student> students;

public:
    // Add a new student
    void addStudent() {
        int id, age;
        std::string name, course;

        std::cout << "Enter Student ID: ";
        std::cin >> id;
        std::cin.ignore(); // Clear the input buffer
        std::cout << "Enter Student Name: ";
        std::getline(std::cin, name);
        std::cout << "Enter Student Age: ";
        std::cin >> age;
        std::cin.ignore();
        std::cout << "Enter Student Course: ";
        std::getline(std::cin, course);

        students.emplace_back(id, name, age, course);
        std::cout << "Student added successfully!\n\n";
    }

    // Display all students
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

    // Search for a student by ID
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

    // Delete a student by ID
    void deleteStudent() {
        int deleteId;
        std::cout << "Enter Student ID to delete: ";
        std::cin >> deleteId;

        for (auto it = students.begin(); it != students.end(); ++it) {
            if (it->getId() == deleteId) {
                students.erase(it);
                std::cout << "Student deleted successfully!\n\n";
                return;
            }
        }
        std::cout << "Student with ID " << deleteId << " not found.\n\n";
    }
};

int main() {
    StudentManagementSystem sms;
    int choice;

    do {
        // Display menu
        std::cout << "=========================\n";
        std::cout << " Student Management Menu\n";
        std::cout << "=========================\n";
        std::cout << "1. Add Student\n";
        std::cout << "2. Display Students\n";
        std::cout << "3. Search Student\n";
        std::cout << "4. Delete Student\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            sms.addStudent();
            break;
        case 2:
            sms.displayStudents();
            break;
        case 3:
            sms.searchStudent();
            break;
        case 4:
            sms.deleteStudent();
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
