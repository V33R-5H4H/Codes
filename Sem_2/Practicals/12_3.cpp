//Extend the program in (2) to add a sports class. The result class inherits the details of marks obtained from class test and the performance in sports from the sports class (hybrid inheritance)
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
class Sports {
protected:
    int sportsScore;
public:
    Sports(int score) : sportsScore(score) {}
    void displaySportsScore() {
        cout << "Sports Score: " << sportsScore << endl;
    }
};
class Result : public Test, public Sports {
private:
    int totalMarks;

public:
    Result(int roll, int s1, int s2, int sports) : Test(roll, s1, s2), Sports(sports) {
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
    Sports sports(90);
    sports.displaySportsScore();
    Result result(101, 80, 75, 90);
    result.displayResult();
    return 0;
}
