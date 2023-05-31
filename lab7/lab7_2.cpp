#include <iostream>
#include <fstream>

using namespace std;

class Student {
    public:
        string name;
        int roll;
        float marks;
};

int main() {
    Student students[5];

    // Input student data
    for (int i = 0; i < 5; i++) {
        cout << "Enter name of student " << i+1 << ": ";
        cin >> students[i].name;
        cout << "Enter roll number of student " << i+1 << ": ";
        cin >> students[i].roll;
        cout << "Enter marks of student " << i+1 << ": ";
        cin >> students[i].marks;
        cout << endl;
    }

    // Open file for writing
    ofstream outfile;
    outfile.open("students.txt");

    // Write student data to file
    for (int i = 0; i < 5; i++) {
        outfile << "Name: " << students[i].name << endl;
        outfile << "Roll Number: " << students[i].roll << endl;
        outfile << "Marks: " << students[i].marks << endl << endl;
    }

    // Close file
    outfile.close();

    // Open file for reading
    ifstream infile;
    infile.open("students.txt");

    // Read and display student data from file
    string line;
    while (getline(infile, line)) {
        cout << line << endl;
    }

    // Close file
    infile.close();

    return 0;
}
