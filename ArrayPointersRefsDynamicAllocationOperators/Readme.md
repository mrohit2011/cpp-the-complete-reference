# Arrays of Objects

In C++, it is possible to have arrays of objects. The syntax for declaring and using an object array is exactly the same as it is for any other type of array. 

```
#include <iostream>
using namespace std;

class c1 {
    int i;
    public:
    c1(int j){i=j;}
    int get_i(){return i;}
};

int main()
{
    c1 ob[3]={1, 2, 3};     //Initializers
    
    for(int i=0; i<3; i++) cout << ob[i].get_i() << std::endl;
    return 0
}

Note: the initialization syntax used above is shorthand for below this longer form:
c1 ob[3] = {c1(1), c1(2), c(3)}

This short form can only be used to initialize object arrarys whose constructors only require one argument.
```

# this pointer

this pointer is very important when operators are overloaded and whenever a member function must utilize a pointer to the object that invoked it.

Remember: this pointer is automatically passed to all member functions.
Therefore get_pwr() could also be rewritten as shown here:

    double get_pwr() {return this->val;}

Note :
1) this pointer is not passed to friend functions, as they are not members of a class.
2) static member functions do not have a this pointer.