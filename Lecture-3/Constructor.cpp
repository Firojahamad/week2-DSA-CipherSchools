#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    Student() {
        name = "";
        rollNumber = 0;
    }

    Student(string studentName, int studentRollNumber) {
        name = studentName;
        rollNumber = studentRollNumber;
    }

    Student(const Student& other) {
        name = other.name;
        rollNumber = other.rollNumber;
    }

    void setName(string studentName) {
        name = studentName;
    }

    string getName() {
        return name;
    }

    void setRollNumber(int studentRollNumber) {
        rollNumber = studentRollNumber;
    }

    int getRollNumber() {
        return rollNumber;
    }
};

int main() {
    // Default constructor
    Student student1;
    student1.setName("John Doe");
    student1.setRollNumber(12345);
    cout << "Student 1 Name: " << student1.getName() << endl;
    cout << "Student 1 Roll Number: " << student1.getRollNumber() << endl;

    // Parameterized constructor
    Student student2("Jane Smith", 54321);
    cout << "Student 2 Name: " << student2.getName() << endl;
    cout << "Student 2 Roll Number: " << student2.getRollNumber() << endl;

    // Copy constructor
    Student student3 = student1;
    cout << "Student 3 Name: " << student3.getName() << endl;
    cout << "Student 3 Roll Number: " << student3.getRollNumber() << endl;

    return 0;
}

