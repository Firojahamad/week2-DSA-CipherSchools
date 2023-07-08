#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    void setName(string studentName) {
        name = studentName;
    }

    string getName() {
        return name;
    }

    void setRollNumber(int number) {
        rollNumber = number;
    }

    int getRollNumber() {
        return rollNumber;
    }
};

int main() {
    Student student;
    
    student.setName("John Doe");

    student.setRollNumber(12345);

    string name = student.getName();
    cout << "Student Name: " << name << endl;
    int rollNumber = student.getRollNumber();
    cout << "Roll Number: " << rollNumber << endl;

    return 0;
}

