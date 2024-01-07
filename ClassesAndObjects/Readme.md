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

# Static Member Functions

They can directly refer to static member of class. 
These are used to "pre-initialize" private static data before any object is actually created.

Refer example, 05-static-member-function.cpp.


# Constructor and Destructor

Constructor is called when object comes into existence and Destructor is called when object is destroyed.
Global objects have their constructors called before main()  begins execution. They are executed in order of their declaration, with in the same file. You cannot know the order of execution of global constructors spread among several files. Global destructors execute in reverse order after main() has terminated.

# Scope resolution operator

It can allow access to a name in an enclosing scope that is 'hidden' by a local declaration of the same name.

```
int i;  // global

void f()
{
    int i;  // local

    i = 10; // uses local i
    ::i = 10;   // uses global i
}
```
# Passing Objects to Functions

Passing of object is straightforward, some rather unexpected events occur that relate to constructors and destructors. 
When an object is passed to a function, a copy of that object is made (and this copy becomes the parameter in function). This means a new object comes into existence. When function terminates, the copy of this argument is destroyed. 
To summarize: When a copy of object is created to be used as an argument to a function, the normal constructor is not called. Instead, the default copy constructor makes a bit-by-bit identical copy. However, when the copy is destroyed, the destructor is called.

For eg. If an object used as an argument allocates memory and frees that memory when object is destroyed, then its local copy inside the function will free the same memory when its destructor is called. This will leave original object damaged and effectively useless. To prevent this type of problem you will need to define copy operation by creating copy constructor for the class.

# Returning objects

When an object is returned by a function, a temporary object is automatically created that holds the return value. It is this object that is actually returned by the function. After the value has been returned, this object is destroyed. The destruction of the temporary object may cause unexpected side effects in some situations. For example, if the object returned by the function has destructor that frees the dynamically allocated memory, that memory will be freed even though the object that is receiving the return value is still using it. There are ways to overcome this problem that involve overloading the assignment operator and defining a copy constructor.

# Object Assignment

All data from one object is assigned to the other by use of a bit-by-bit copy. However, it is possible to overload the assignment operator and define some other assignment procedure.

