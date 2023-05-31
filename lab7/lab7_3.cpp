#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Book {
    string author;
    string title;
    string subject;
};

void printBook(Book b) {
    cout << "Author: " << b.author << endl;
    cout << "Title: " << b.title << endl;
    cout << "Subject: " << b.subject << endl << endl;
}

int main() {
    // Open the text file containing the book library
    ifstream inputFile("book_library.txt");
    
    // Check if the file was opened successfully
    if (!inputFile) {
        cerr << "Error: Unable to open file." << endl;
        return 1;
    }
    
    // Read the book details from the file and store them in an array of Book objects
    const int MAX_BOOKS = 100;
    Book library[MAX_BOOKS];
    int bookCount = 0;
    
    while (bookCount < MAX_BOOKS && inputFile >> library[bookCount].author >> library[bookCount].title >> library[bookCount].subject) {
        bookCount++;
    }
    
    // Close the file
    inputFile.close();
    
    // Ask the user to enter the author name, title, and subject of the book they are searching for
    string author, title, subject;
    bool found = false;
    
    cout << "Enter author name: ";
    getline(cin, author);
    cout << "Enter title: ";
    getline(cin, title);
    cout << "Enter subject: ";
    getline(cin, subject);
    
    // Loop through each book in the library and check if it matches the input entered by the user
    for (int i = 0; i < bookCount; i++) {
        if (library[i].author == author && library[i].title == title && library[i].subject == subject) {
            printBook(library[i]);
            found = true;
        }
    }
    
    // Display a message if no books matching the input were found
    if (!found) {
        cout << "No books matching the input were found." << endl;
    }
    
    return 0;
}
