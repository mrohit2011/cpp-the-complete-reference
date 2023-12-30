# Friend Function
Friend function has access to all private and protected members of class for which it is friend.
Refer eg. 1-friend-function.cpp

These are used,
- For overloading certain types of operator
- It can make creation of I/O functions easier.
- Two or more classes may contain members that are interrelated relative to other parts of program.

# Friend Classes
It is possible for once class to be a friend of another class. When this is the case, the friend class and all its member functions have access to private members of defined within the other class.


# Inline Function.
In C++, you can create short functions that are not actually called; rather, their code is expanded in line at point of each invocation. This process is similar to using a function-like macro. For this precede function decleration with the inline keyword.

```
    inline int max(int a, int b)
    {
        return a>b ?a:b;
    }

    // Inline function max is replaced with its code
    cout << max(10,5);
    cout << a>b ?a:b;

    Note: Like the 'register' specifier, 'inline' is actually just a request, not a command, to the compiler.
```

# Parameterized Constructors

It is possible to pass arguments to constructors. Typically, these arguments help initialize an object when it is created.


