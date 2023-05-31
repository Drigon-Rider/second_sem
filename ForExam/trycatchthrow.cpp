#include <iostream>

int main() {
    try {
        int num1, num2;
        std::cout << "Enter two numbers to divide: ";
        std::cin >> num1 >> num2;

        if (num2 == 0) {
            throw "Division by zero error!";
        }

        double result = static_cast<double>(num1) / num2;
        std::cout << "Result: " << result << std::endl;
    }
    catch (const char* error_message) {
        std::cerr << "Error: " << error_message << std::endl;
    }
    catch (...) {
        std::cerr << "Unknown exception caught!" << std::endl;
    }

    return 0;
}
