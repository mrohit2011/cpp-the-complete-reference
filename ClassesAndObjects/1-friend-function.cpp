#include <iostream>

class myclass
{
    int a, b;
public:
    void set_ab(int i, int j)
    {
        a = i;
        b = j;
    }
    friend int sum(myclass);
};

int sum(myclass c)
{
    return (c.a + c.b);
}

int main(void)
{
    myclass n;
    n.set_ab(10, 5);

    std::cout << "sum: " << sum(n) << std::endl;
    return 0;
}