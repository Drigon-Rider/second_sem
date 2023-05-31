#include <iostream>
#include <fstream>
#include <string>
#include<cstdio>

using namespace std;

struct Student
{
    string name;
    string regNo;
    int grade;
};

void printStudent(Student s)
{
    cout << "Name: " << s.name << endl;
    cout << "Registration Number: " << s.regNo << endl;
    cout << "Grade: " << s.grade << endl
         << endl;
}

int main()
{
    // Open a text file to store the student records
    ofstream outputFile("student_records.txt");
    // Check if the file was opened successfully
    if (!outputFile)
    {
        cerr << "Error: Unable to open file." << endl;
        return 1;
    }

    // Ask the user to enter the name, registration number, and grade of 10 students and store them in the file
    const int NUM_STUDENTS = 10;
    Student students[NUM_STUDENTS];

    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        cout << "Enter name of student " << i + 1 << ": ";
        getline(cin, students[i].name);
        cout << "Enter registration number of student " << i + 1 << ": ";
        getline(cin, students[i].regNo);
        cout << "Enter grade of student " << i + 1 << ": ";
        cin >> students[i].grade;
        cin.ignore(); // ignore the newline character left in the input buffer by cin

        // Write the student record to the file
        outputFile << students[i].name << " " << students[i].regNo << " " << students[i].grade << endl;
    }
    outputFile.close();

    // Ask the user which student record they want to modify
    string regNoToModify;
    bool found = false;

    cout << "Enter registration number of student whose record you want to modify: ";
    getline(cin, regNoToModify);

    // Open the file again to read the student records and modify the record of the specified student
    ifstream inputFile("student_records.txt");

    // Check if the file was opened successfully
    if (!inputFile)
    {
        cerr << "Error: Unable to open file." << endl;
        return 1;
    }

    Student modifiedStudent;

    while (inputFile >> modifiedStudent.name >> modifiedStudent.regNo >> modifiedStudent.grade)
    {
        if (modifiedStudent.regNo == regNoToModify)
        {
            found = true;
            break;
        }
    }
    

    // Modify the record of the specified student
    if (found)
    {
        cout << "The record of the specified student is:" << endl;
        printStudent(modifiedStudent);

        cout << "Enter the new grade for the student: ";
        cin >> modifiedStudent.grade;
        cin.ignore(); // ignore the newline character left in the input buffer by cin

        // Open the file again to write the modified student record
        ofstream outputFile("records.txt");
        inputFile.seekg(0, ios::beg); // move the file pointer to the beginning of the file
        int outputIndex = 0;
        while (inputFile >> students[outputIndex].name >> students[outputIndex].regNo >> students[outputIndex].grade)
        {
            if (students[outputIndex].regNo == regNoToModify)
            {
                outputFile << modifiedStudent.name << " " << modifiedStudent.regNo << " " << modifiedStudent.grade << endl;
            }
            else
            {
                outputFile << students[outputIndex].name << " " << students[outputIndex].regNo << " " << students[outputIndex].grade << endl;
            }
            outputIndex++;
        }

        cout << "Record modified successfully." << endl;
    }
    else
    {
        cout << "Error: Record not found." << endl;
    }
    inputFile.close();
    outputFile.close();
    remove("student_records.txt");
    rename("records.txt","student_records.txt");

    return 0;
}
