#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Structure to store student information
struct Student {
    string name;
    int marks;
};

// Function to input student data
void inputStudents(Student students[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nEnter name of student " << i + 1 << ": ";
        cin >> students[i].name;
        cout << "Enter marks of " << students[i].name << ": ";
        cin >> students[i].marks;
    }
}

// Function to sort students by marks (using Bubble Sort)
void sortByMarks(Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                // Swap
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

// Function to display all students
void displayStudents(Student students[], int n) {
    cout << "\n--- Student Result List ---\n";
    cout << left << setw(15) << "Name" << "Marks\n";
    cout << "---------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << left << setw(15) << students[i].name << students[i].marks << endl;
    }
}

// Function to display top scorer
void showTopScorer(Student students[], int n) {
    cout << "\n🏆 Top Scorer 🏆\n";
    cout << "Name: " << students[0].name << endl;
    cout << "Marks: " << students[0].marks << endl;
}

// Main function
int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student students[100]; // limit to 100 students for simplicity

    inputStudents(students, n);
    sortByMarks(students, n);
    displayStudents(students, n);
    showTopScorer(students, n);

    return 0;
}
