#include <iostream>

using namespace std;

int main() {
int num, rev_num = 0, rem, temp;

cout << "Enter a number: ";
cin >> num;

temp = num;

while (temp != 0) {
rem = temp % 10;
rev_num = (rev_num * 10) + rem;
temp /= 10;
}

if (num == rev_num) {
cout << num << " is a pallindrome number." << endl;
} else {
cout << num << " is not a pallindrome number." << endl;
}

return 0;
}