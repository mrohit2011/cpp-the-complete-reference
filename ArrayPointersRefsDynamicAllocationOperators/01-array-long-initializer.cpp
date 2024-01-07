#include <iostream>
using namespace std;

class c1
{
    int h, i;

public:
    c1(int j, int k)
    {
        h = j;
        i = k;
    }
    int get_i() { return i; }
    int get_h() { return h; }
};

int main()
{
    // Array long initializer (Since constructor has 2 argument, shorthand initialization format cannot be used)
    c1 ob[3] = {c1(1, 2), c1(15, 20), c1(55, 44)};

    for (int i = 0; i < 3; i++)
    {
        cout << ob[i].get_h() << ", " << ob[i].get_i() << std::endl;
    }
    return 0;
}