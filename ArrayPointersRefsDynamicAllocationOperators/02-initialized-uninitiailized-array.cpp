#include <iostream>
using namespace std;

class c1{
    int i;
    public:
    c1(){i=0;}
    c1(int j){i = j;}
    int get_i(){return i;}
};

int main()
{
    c1 a1[3] = {1,2,3};     // initialized
    c1 a2[24];              // un-initialized
}