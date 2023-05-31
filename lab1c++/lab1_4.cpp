#include <iostream>

using namespace std;

int main() {
int arr[10] = {2, 5, 7, 9, 11, 13, 17, 19, 23, 29};
int num, i, flag = 0;

cout << "Enter a number to search: ";
cin >> num;

for (i = 0; i < 10; i++) {
if (arr[i] == num) {
flag = 1;
break;
}
}

if (flag) {
cout << num << " is found in the array." << endl;
} else {
cout << num << " is not found in the array." << endl;
}

return 0;
}