#include <iostream>
using namespace std;
class contdest
{
public:
    static int count ;
    contdest()
    {
        cout << "\nObject Created=" << count++;
    }
    ~contdest()
    {
        cout << "\nObject Destroyed = " << --count;
    }
};
int contdest::count = 0;

int main()
{
    cout << "\nMain Block\n";

    contdest a, b, c;

    cout
        << "\nBlock I\n";
    contdest d;

    cout
        << "\nAgain main Block\n";
    contdest e;

    return 0;
}
