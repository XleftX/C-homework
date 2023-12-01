#include <iostream>
using namespace std;

class Student {
private:
    string name;
    string className;
    int studentID;
    int score;
    static int count;
public:
    Student(string name, string className, int studentID, int score) {
        this->name = name;
        this->className = className;
        this->studentID = studentID;
        this->score = score;
        count++;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Score: " << score << endl;
        cout << "Grade: ";
        if (score >= 90) {
            cout << "A";
        } else if (score >= 80) {
            cout << "B";
        } else if (score >= 70) {
            cout << "C";
        } else {
            cout << "D";
        }
        cout << endl;
    }
    static int getCount() {
        return count;
    }
};

int Student::count = 0;

int main() {
    Student s1("Alice", "Class A", 1001, 85);
    Student s2("Bob", "Class B", 1002, 92);
    Student s3("Charlie", "Class C", 1003, 78);

    s1.display();
    s2.display();
    s3.display();

    cout << "Total students: " << Student::getCount() << endl;

    return 0;
}
