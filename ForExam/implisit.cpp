#include <iostream>

class MyInt {
private:
    int value;
public:
    MyInt(float v) {
        value = v;
    }
    operator int() const {
        return value;
    }
};

int main() {
    MyInt myInt(42.5);
    int x = myInt; // Implicit conversion from MyInt to int
    std::cout << "x: " << x << std::endl; // Output: x: 42
    return 0;
}
