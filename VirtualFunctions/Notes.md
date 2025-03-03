# Virtual Functions

    -> A virtual function is a special type of member function that, when called, resolves to the most-derived version of the function for the actual type of the object being referenced or pointed to.

    -> Rules:
        -> A derived function is considered a match if it has the same signature (name, parameter types, and whether it is const) and return type as the base version of the function. Such functions are called overrides.
        -> To make a function virtual, place the “virtual” keyword before the function declaration.

    -> Note that virtual function resolution only works when a virtual member function is called through a pointer or reference to a class type object. Calling a virtual member function directly on an object (not through a pointer or reference) will always invoke the member function belonging to the same type of that object.
        ->  C c{};
            std::cout << c.getName(); // will always call C::getName
            A a { c }; // copies the A portion of c into a (don't do this)
            std::cout << a.getName(); // will always call A::getName
        Here a is an object not a reference or pointer.

    -> If a function is marked as virtual, all matching overrides in derived classes are also implicitly considered virtual, even if they are not explicitly marked as such.

# Polymorphism

    -> Refers to the ability of an entity to have multiple forms.

    2 types:
        -> Compile-time polymorphism refers to forms of polymorphism that are resolved by the compiler. These include function overload resolution, as well as template resolution.
        -> Runtime polymorphism refers to forms of polymorphism that are resolved at runtime. This includes virtual function resolution.

    -> Remember that when a Derived class is created, the Base portion is constructed first. If you were to call a virtual function from the Base constructor, and Derived portion of the class hadn’t even been created yet, it would be unable to call the Derived version of the function because there’s no Derived object for the Derived function to work on. It will call the Base version instead. A similar issue exists for destructors. If you call a virtual function in a Base class destructor, it will always resolve to the Base class version of the function, because the Derived portion of the class will already have been destroyed.

    -> The override specifier

        -> To help address the issue of functions that are meant to be overrides but aren’t, the override specifier can be applied to any virtual function by placing the override specifier after the function signature (the same place a function-level const specifier goes).

        ->If the function does not override a base class function (or is applied to a non-virtual function), the compiler will flag the function as an error.

# Covariant Return Types :

    -> There is one special case in which a derived class virtual function override can have a different return type than the base class and still be considered a matching override. If the return type of a virtual function is a pointer or a reference to some class, override functions can return a pointer or a reference to a derived class. These are called covariant return types.

# Point

    -> Always make destructors virtual while dealing with inheritance

# Pure virtual function (or abstract function)

    -> Function with no body. It simply acts as a placeholder that is meant to be redefined by derived classes.

    -> Consequences:
        -> Any class with one or more pure virtual functions becomes an abstract base class
        It can not be instantiated
        -> Any derived class must define a body for this function, or that derived class will be considered an abstract base class as well.

# Virtual Base Classes

    -> To share a base class, simply insert the “virtual” keyword in the inheritance list of the derived class.

    ->This creates a virtual base class, which means there is only one base object.

    ->The base object is shared between all objects in the inheritance tree and it is only constructed once.
