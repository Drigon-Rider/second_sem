#include <iostream>

class MyNumber {
public:
    int value;

    MyNumber(int v) : value(v) {}

    MyNumber operator+() const {
        // Unary + operator just returns the object itself.
        return *this;
    }
};

int main() {
    MyNumber x{42};
    MyNumber y = +x; // y.value == 42

    std::cout << "x.value: " << x.value << std::endl;
    std::cout << "y.value: " << y.value << std::endl;

    return 0;
}
