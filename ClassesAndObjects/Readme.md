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

It is possible to pass arguments to constructors. Typically, these arguments help initialize an object when it is create d. These are very useful because they allow you to avoid having to make an additional function call simply to initialize one or more variable in an object.

Constructor with one parameter : Special case.

```
    class X {
        int a;
        public:
        X(int j) {a = j;}
    };

    X ob = 99; 
    //This statement is handled by compiler as if it was written as,
    // X ob = X(99);
```
# Static Data Members

Only one copy of static data variable will exist and that all objects of the class will share that variable.
When you declare a static data member within a class, you are not defining it. Instead, you must provide a global definition for it elsewhere outside the class. This is done by re-declaring the static variable using the scope resolution operator to identify the class to which it belongs.

```
    int shared::a; //define a
```

A static member variable exits before any object of its class is created.

Usage :
1)  Provide access control to some shared resource used by all objects of a class.
2)  Keep track of the number of objects of a particular class type that are in existence.