#include <iostream>
using namespace std;
class base
{
public:
    double d;
    base(int value)
    {
        d = value;
    }
    double operator+()
    {
        return d;
    }
};
int main(){
    base b(10);

}
