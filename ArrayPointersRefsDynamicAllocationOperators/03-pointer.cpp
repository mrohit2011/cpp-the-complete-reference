#include <iostream>
using namespace std;

class c1
{
    int i;

public:
    c1() { i = 0; }
    c1(int j) { i = j; }
    int get_i() { return i; }
};

int main()
{
    c1 ob[5] = {1, 2, 3, 4, 5};
    c1* p = ob;

    for(int i=0; i <5; i++)
    {
        cout << i << ": " << p->get_i() << std::endl;
        p++;
    }
}