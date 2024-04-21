//Consider a simple example. Class student stores the roll-number, class test stores the marks in two subjects and class result contains the total marks obtained in the test.The class result inherits the details of the marks obtained and roll number of students through multilevel inheritance. Write a program to demonstrate the above.
#include <iostream>
using namespace std;
class Student {
protected:
    int rollNumber;
public:
    Student(int roll) : rollNumber(roll) {}
    void displayStudent() {
        cout << "Roll Number: " << rollNumber << endl;
    }
};
class Test : public Student {
protected:
    int subject1Marks;
    int subject2Marks;
public:
    Test(int roll, int s1, int s2) : Student(roll), subject1Marks(s1), subject2Marks(s2) {}
    void displayTestMarks() {
        cout << "Subject 1 Marks: " << subject1Marks << ", Subject 2 Marks: " << subject2Marks << endl;
    }
};
class Result : public Test {
    int totalMarks;
public:
    Result(int roll, int s1, int s2) : Test(roll, s1, s2) {
        totalMarks = subject1Marks + subject2Marks;
    }
    void displayResult() {
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Student student(101);
    student.displayStudent();
    Test test(101, 80, 75);
    test.displayTestMarks();
    Result result(101, 80, 75);
    result.displayResult();

    return 0;
}
