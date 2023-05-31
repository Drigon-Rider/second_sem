#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  // Open a file for writing
  ofstream outfile("data.txt");
  if (!outfile.is_open()) {
    cerr << "Error opening file for writing!" << endl;
    return 1;
  }

  // Write some text to the file
  outfile << "This is some text." << endl;
  outfile << "This is some more text." << endl;
  outfile.close();

  // Open the file for reading
  ifstream infile("data.txt");
  if (!infile.is_open()) {
    cerr << "Error opening file for reading!" << endl;
    return 1;
  }

  // Read from the file and print to the console
  string line;
  while (getline(infile, line)) {
    cout << line << endl;
  }
  infile.close();

  // Open the file for appending
  fstream file("data.txt");
  if (!file.is_open()) {
    cerr << "Error opening file for appending!" << endl;
    return 1;
  }

  // Append some more text to the file
  file << "This is even more text." << endl;
  file.close();

  // Open the file for reading again and print the contents
  ifstream infile2("data.txt");
  if (!infile2.is_open()) {
    cerr << "Error opening file for reading!" << endl;
    return 1;
  }

  cout << "File contents after appending:" << endl;
  while (getline(infile2, line)) {
    cout << line << endl;
  }
  infile2.close();

  return 0;
}
