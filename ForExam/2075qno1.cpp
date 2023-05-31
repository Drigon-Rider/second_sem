#include <iostream>
using namespace std;

class Feet {
public:
    double Length;
};

class Meters {
public:
    double Length;

   Meters FromFeet(Feet feet) {
        Meters meters;
        meters.Length = feet.Length * 0.3048; // Convert Feet to Meters
        return meters;
    }
};

int main() {
    Feet feet;
    feet.Length = 10;

    Meters meters = meters.FromFeet(feet);

    cout << meters.Length << endl; // Output: 3.048

    return 0;
}
