# The hidden “this” pointer

    -> Inside every member function, the keyword this is a const pointer that holds the address of the current implicit object.

# There are three types of const Pointer

    Pointer Type	        Can Change Pointer?	    Can Modify Value?
    const int* ptr	            ✅ Yes	                ❌ No
    int* const ptr	            ❌ No	                ✅ Yes
    const int* const ptr	    ❌ No	                ❌ No

# Note

    -> For non-const member functions, this is a const pointer to a non-const value (meaning this cannot be pointed at something else, but the object pointing to may be modified). With const member functions, this is a const pointer to a const value (meaning the pointer cannot be pointed at something else, nor may the object being pointed to be modified).

    -> Function Type	                this Type	                Can Modify Object?
    Non-const function	        Example* const this	                ✅ Yes
    Const function	          const Example* const this	            ❌ No

    ->All non-static member functions have a this pointer that refers to the object the function was called on.

# Static Member Function

    -> A static member function is a function that belongs to the class itself rather than any specific object.

    -> 🔹 Key Properties of Static Member Functions
        ✅ Can be called without creating an object
        ✅ Cannot access non-static data members
        ✅ Can only access static members (variables & functions)
        ✅ Cannot use this pointer

# Classes and Headers

    -> C++ allows us to separate the “declaration” portion of the class from the “implementation” portion by defining member functions outside of the class definition.

    -> Member functions are defined outside the class type just like non-member functions. The only difference is that we must prefix the member function names with the name of the class type (in this case, Date::) so the compiler knows we’re defining a member of that class type rather than a non-member.

# Destructors

    -> Classes have another type of special member function that is called automatically when an object of a non-aggregate class type is destroyed. This function is called a destructor. Destructors are designed to allow a class to do any necessary clean up before an object of the class is destroyed.

    -> Naming
        Must have the same name as the class, preceded by a tilde (~).
        Can’t take arguments.
        Has no return type.
    -> Points
        A class can only have a single destructor.
        Destructors may safely call other member functions since the object isn’t destroyed until after the destructor executes.

    -> Implicit destructor
        If a non-aggregate class type object has no user-declared destructor, the compiler will generate a destructor with an empty body. It is effectively just a placeholder.

    -> std::exit() function problem
    The std::exit() function, can be used to terminate your program immediately.
    Local variables are not destroyed first, and because of this, no destructors will be called.

# Class template with member functions

    -> A template in C++ is a blueprint for creating generic classes or functions. It allows writing reusable and type-independent code, enabling the same function or class to work with different data types without rewriting the code.

    -> Types of Templates in C++
        1. Function Templates
            -> A function template allows writing a single function that can handle multiple data types.
        2. Class Templates
            -> A class template allows creating a class that can operate on any data type.

# Points

    -> Note that when we define a member function inside the class template definition, we don’t need to provide a template parameter declaration for the member function. Such member functions implicitly use the class template parameter declaration.
    ->  Second, we don’t need deduction guides for CTAD to work with non-aggregate classes. A matching constructor provides the compiler with the information it needs to deduce the template parameters from the initializers.
    -> Defining the member function outside the class with a forward declaration in it.

# Static member variables

    -> They are created at the start of the program, and destroyed at the end of the program. Such variables keep their values even if they go out of scope.
    -> Points
        Member variables of a class can be made static by using the static keyword.
        Unlike normal member variables, static member variables are shared by all objects of the class.

# Friend non-member functions

    -> A friend is a class or function (member or non-member) that has been granted full access to the private and protected members of another class. In this way, a class can selectively give other classes or functions full access to their members without impacting anything else.

    -> Unlike functions, classes have no return types or parameters, so class forward declarations are always simply class ClassName (unless they are class templates).

    -> Insights:
        Even though Display is a friend of Storage, Display has no access to the *this pointer of Storage objects (because *this is actually a function parameter).
        Friendship is not reciprocal. Just because Display is a friend of Storage does not mean Storage is also a friend of Display. If you want two classes to be friends of each other, both must declare the other as a friend.
        Class friendship is also not transitive. If class A is a friend of B, and B is a friend of C, that does not mean A is a friend of C.
        Friendship is not inherited. If class A makes B a friend, classes derived from B are not friends of A.

# Friend member functions

    -> This is done similarly to making a non-member function a friend, except the name of the member function is used instead.
