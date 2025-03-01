# Classes are user-defined data types that act as a blueprint to create objects (or variables).

    ->Because a class is a program-defined data type, it must be defined before it can be used.

# Member Functions

    -> In addition to having member variables, classes can also have their own functions! Functions that belong to a class are called member functions.

# member selection operator (.)

# Const class objects and const member functions

    -> All const variables must be initialized at the time of creation.
    -> const int x; -> compile error: not initialised
    -> const int y{}; -> ok: value initialised
    -> const int z{ 5 }; -> ok: list initialised

# Simple Rule is that whenever you make the object using the keyword const then the member function of this class is to be const to accessing the member variable

# Member Function Const and Non-Const Overloading

    -> It is possible to overload a member function to have a const and non-const version of the same function. This works because the const qualifier is considered part of the function’s signature, so two functions which differ only in their const-ness are considered distinct.

# Access Specifiers

    -> Each member of a class type has a property called an access level that determines who can access that member.
    -> C++ has three different access levels: public, private, and protected. If the access is not permitted, the compiler will generate a compilation error. This access level system is sometimes informally called access controls.
    -> The members of a struct are public by default.
    -> Public members of a class do not have any restrictions on how they can be accessed.
    The members of a class are private by default.

    -> Private members of a class can only be accessed by other members of the same class.

# Constructors

    -> A constructor is a special member function that is automatically called after a non-aggregate class type object is created.

# Important Points regarding Constructors

    -> A constructor needs to be able to initialise the object being constructed -- therefore, a constructor must not be const.

    -> Normally a non-const member function can’t be invoked on a const object. However, because the constructor is invoked implicitly, a non-const constructor can be invoked on a const object.

# Member initialization order

    -> Members in a member initializer list are always initialised in the order in which they are defined inside the class (not in the order they are defined in the member initializer list).

# Types of Constructors

    -> Defualt Constructor
    -> Overload Constructor
    -> Delegating constructors
        -> Calling other constructors of same class from a constructor

# Note

    -> A class should only have one default constructor. If more than one default constructor is provided, the compiler will be unable to disambiguate which should be used:
    -> Constructors are allowed to delegate (transfer responsibility for) initialization to another constructor from the same class type. This process is sometimes called constructor chaining and such constructors are called delegating constructors.

    -> To make one constructor delegate initialization to another constructor, simply call the constructor in the member initializer list.

# Copy Constructor

    -> A copy constructor is a constructor that is used to initialise an object with an existing object of the same type. After the copy constructor executes, the newly created object should be a copy of the object passed in as the initializer.
