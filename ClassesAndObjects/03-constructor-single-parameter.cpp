#include <iostream>

class X {
    int a;

    public:
    X(int i) {a = i;}
    int get_a() {return a;}
};

int main(void)
{
    X ob = 99;  // Passes 99 to i
    std::cout << ob.get_a(); // Outputs 99
    return 0;
}