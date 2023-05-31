#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Open the source file
    ifstream sourceFile("source.txt");
    if (!sourceFile) {
        cerr << "Error: Could not open source file!" << endl;
        return 1;
    }

    // Open the destination file
    ofstream destFile("destination.txt");
    if (!destFile) {
        cerr << "Error: Could not open destination file!" << endl;
        sourceFile.close();
        return 1;
    }

    // Copy the contents of source file to destination file
    char ch;
    while (sourceFile.get(ch)) {
        destFile.put(ch);
    }

    // Close the files
    sourceFile.close();
    destFile.close();

    cout << "File copied successfully!" << endl;

    return 0;
}
