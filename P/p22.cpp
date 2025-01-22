#include <iostream>
#include <vector>
#include <string>
#include <limits>
using namespace std;

// Student Class
class Student {
private:
    int studentId;
    string studentName;
    vector<int> grades;

public:
    // Constructor
    Student(int id, string name) {
        studentId = id;
        studentName = name;
    }

    // Add grades for the student
    void addGrades() {
        int numGrades;
        cout << "Enter number of subjects: ";
        cin >> numGrades;
        grades.resize(numGrades);

        cout << "Enter grades for " << numGrades << " subjects:\n";
        for (int i = 0; i < numGrades; ++i) {
            cout << "Grade for Subject " << i + 1 << ": ";
            cin >> grades[i];
        }
    }

    // Calculate average grade
    double calculateAverage() const {
        if (grades.empty()) return 0;

        double total = 0;
        for (int grade : grades) {
            total += grade;
        }
        return total / grades.size();
    }

    // Display student info and grades
    void displayStudentInfo() const {
        cout << "Student ID: " << studentId << "\n";
        cout << "Student Name: " << studentName << "\n";
        cout << "Grades: ";
        for (int grade : grades) {
            cout << grade << " ";
        }
        cout << "\nAverage Grade: " << calculateAverage() << "\n\n";
    }

    int getStudentId() const {
        return studentId;
    }
};

// Grading System Class
class GradingSystem {
private:
    vector<Student> students;

public:
    // Add a new student
    void addStudent() {
        int id;
        string name;

        cout << "Enter Student ID: ";
        cin >> id;
        cin.ignore();  // To clear the buffer
        cout << "Enter Student Name: ";
        getline(cin, name);

        Student newStudent(id, name);
        newStudent.addGrades();
        students.push_back(newStudent);
        cout << "Student added successfully!\n\n";
    }

    // Display all students
    void displayAllStudents() const {
        if (students.empty()) {
            cout << "No students to display.\n\n";
            return;
        }
        for (const auto& student : students) {
            student.displayStudentInfo();
        }
    }

    // Search for a student by ID
    void searchStudentById() const {
        int id;
        cout << "Enter Student ID to search: ";
        cin >> id;

        for (const auto& student : students) {
            if (student.getStudentId() == id) {
                student.displayStudentInfo();
                return;
            }
        }
        cout << "Student with ID " << id << " not found.\n\n";
    }

    // Display average grade of all students
    void displayAverageGradeOfAllStudents() const {
        if (students.empty()) {
            cout << "No students to calculate average.\n\n";
            return;
        }

        double totalAverage = 0;
        for (const auto& student : students) {
            totalAverage += student.calculateAverage();
        }

        double classAverage = totalAverage / students.size();
        cout << "Class Average Grade: " << classAverage << "\n\n";
    }
};

// Main Function
int main() {
    GradingSystem gradingSystem;
    int choice;

    do {
        cout << "========== Student Grading System ==========\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by ID\n";
        cout << "4. Display Average Grade of All Students\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                gradingSystem.addStudent();
                break;
            case 2:
                gradingSystem.displayAllStudents();
                break;
            case 3:
                gradingSystem.searchStudentById();
                break;
            case 4:
                gradingSystem.displayAverageGradeOfAllStudents();
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
